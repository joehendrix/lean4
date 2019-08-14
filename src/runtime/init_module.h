/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void lean_initialize_runtime_module();
void lean_finalize_runtime_module();

#ifdef __cplusplus
}
#endif
