// Lean compiler output
// Module: init.data.nat.default
// Imports: init.data.nat.basic init.data.nat.div init.data.nat.bitwise
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* initialize_init_data_nat_basic(obj*);
obj* initialize_init_data_nat_div(obj*);
obj* initialize_init_data_nat_bitwise(obj*);
static bool _G_initialized = false;
obj* initialize_init_data_nat_default(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_data_nat_basic(w);
if (io_result_is_error(w)) return w;
w = initialize_init_data_nat_div(w);
if (io_result_is_error(w)) return w;
w = initialize_init_data_nat_bitwise(w);
if (io_result_is_error(w)) return w;
return w;
}
