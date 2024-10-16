#include "charcount.h"

void shiftRight(size_t idx)
{
    // shift all elements after index one spot to the right
    for (size_t current = d_info.nCharObj - 1; current != idx; --current)
        d_info.ptr[current] = move(d_info.ptr[current - 1])
}
