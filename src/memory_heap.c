#include "memory_heap.h"

asm(".include \"include/gba.inc\"");

#include "asm/memory_heap/asm_08006174.s"

s32 func_08006174(s32, s32);

s32 mem_heap_alloc(s32 x) {
  func_08006174(0, x);
}

#include "asm/memory_heap/asm_08006184.s"

#include "asm/memory_heap/asm_08006240.s"
