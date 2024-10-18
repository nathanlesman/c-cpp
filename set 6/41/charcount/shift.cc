#include "charcount.ih"

void CharCount::shiftRight(size_t idx)
{
    // create space for one new Char
    new(d_info.ptr + d_info.nCharObj) Char{ 0, 0 };

    // shift all elements after index one spot to the right
    for (size_t current = d_info.nCharObj; current != idx; --current)
        d_info.ptr[current] = move(d_info.ptr[current - 1]);
}
