/*
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once

#include "runtime/debug.h"
#include "runtime/thread.h"

#ifdef __cplusplus
#define LEAN_ATOMIC(tp) std::atomic<tp>
#define LEAN_MEMORY_ORDER_ACQUIRE std::memory_order_acquire
#define LEAN_MEMORY_ORDER_ACQ_REL std::memory_order_acq_rel
#else
#define LEAN_ATOMIC(tp) _Atomic(tp)
#define LEAN_MEMORY_ORDER_ACQUIRE memory_order_acquire
#define LEAN_MEMORY_ORDER_ACQ_REL memory_order_acq_rel
#endif

#ifdef __cplusplus
#include <cstddef>
#endif

#define LEAN_OBJECT_SIZE_DELTA     8
#define LEAN_MAX_SMALL_OBJECT_SIZE 512
#define LEAN_PAGE_SIZE             8192        // 8 Kb

struct lean_allocator_heap;
typedef struct lean_allocator_heap lean_allocator_heap;

struct lean_allocator_page;
typedef struct lean_allocator_page lean_allocator_page;

struct lean_allocator_page_header {
    LEAN_ATOMIC(lean_allocator_heap*) m_heap;
    lean_allocator_page * m_next;
    lean_allocator_page * m_prev;
    void *           m_free_list;
    unsigned         m_max_free;
    unsigned         m_num_free;
    unsigned         m_slot_idx;
    bool             m_in_page_free_list;
};

typedef struct lean_allocator_page_header lean_allocator_page_header;

struct lean_allocator_page {
    lean_allocator_page_header m_header;
    char m_data[LEAN_PAGE_SIZE - sizeof(lean_allocator_page_header)];

#ifdef __cplusplus
    lean_allocator_page * get_next() const { return m_header.m_next; }
    lean_allocator_page * get_prev() const { return m_header.m_prev; }
    void set_next(lean_allocator_page * n) { m_header.m_next = n; }
    void set_prev(lean_allocator_page * p) { m_header.m_prev = p; }
    void set_heap(lean_allocator_heap * h) { m_header.m_heap = h; }
    lean_allocator_heap * get_heap() { return m_header.m_heap; }
    bool has_many_free() const { return m_header.m_num_free > m_header.m_max_free / 4; }
    bool in_page_free_list() const { return m_header.m_in_page_free_list; }
    unsigned get_slot_idx() const { return m_header.m_slot_idx; }
    void push_free_obj(void * o);
#endif
};

inline size_t lean_allocator_align(size_t v, size_t a) {
    return (v / a)*a + a * (v % a != 0);
}

inline unsigned lean_allocator_get_slot_idx(unsigned obj_size) {
    lean_assert(obj_size > 0);
    lean_assert(align(obj_size, LEAN_OBJECT_SIZE_DELTA) == obj_size);
    return obj_size / LEAN_OBJECT_SIZE_DELTA - 1;
}

inline void * lean_allocator_get_next_obj(void * obj) {
    return *(void**)obj;
}

LEAN_THREAD_EXTERN_PTR(lean_allocator_page*, lean_allocator_g_curr_pages);

#ifdef __cplusplus
namespace lean {
namespace allocator {

using heap = lean_allocator_heap;
using page_header = lean_allocator_page_header;
using page = lean_allocator_page;

inline size_t align(size_t v, size_t a) {
    return lean_allocator_align(v, a);
}

inline char * align_ptr(char * p, size_t a) {
    return reinterpret_cast<char*>(align(reinterpret_cast<size_t>(p), a));
}

inline unsigned get_slot_idx(unsigned obj_size) {
    return lean_allocator_get_slot_idx(obj_size);
}

inline void set_next_obj(void * obj, void * next) {
    *reinterpret_cast<void**>(obj) = next;
}

inline void * get_next_obj(void * obj) {
    return lean_allocator_get_next_obj(obj);
}

}

void init_thread_heap();

}
#endif // __cplusplus
LEAN_EXTERN_BEGIN

void *lean_alloc(size_t sz);
#ifndef LEAN_RUNTIME_STATS
void * lean_alloc_small_slow(size_t sz, unsigned slot_idx);
void * lean_big_alloc(size_t sz);

/* This function is useful when we statically know the size `sz`.
   In this case, the compiler can statically simplify some of the checks. */
inline void * lean_alloc_small(size_t sz) {
    sz = lean_allocator_align(sz, LEAN_OBJECT_SIZE_DELTA);
    if (sz <= LEAN_MAX_SMALL_OBJECT_SIZE) {
        lean_assert(lean_allocator_g_curr_pages);
        unsigned slot_idx = lean_allocator_get_slot_idx(sz);
        lean_allocator_page * p = lean_allocator_g_curr_pages[slot_idx];
        void * r = p->m_header.m_free_list;
        if (r != 0) {
            p->m_header.m_free_list = lean_allocator_get_next_obj(r);
            p->m_header.m_num_free--;
            return r;
        }
        return lean_alloc_small_slow(sz, slot_idx);
    } else {
        return lean_big_alloc(sz);
    }
}
#else
/* When LEAN_RUNTIME_STATS is enabled, we collect allocation statistics.
   We just use the vanilla `alloc` in this case. */
inline void * lean_alloc_small(size_t sz) { return alloc(sz); }
#endif

LEAN_EXTERN_END
#ifdef __cplusplus
namespace lean {

inline void * alloc(size_t sz) { return lean_alloc(sz); }
inline void * alloc_small(size_t sz) { return lean_alloc_small(sz); }

void dealloc(void * o, size_t sz);

void initialize_alloc();
void finalize_alloc();
}
#endif // __cplusplus
