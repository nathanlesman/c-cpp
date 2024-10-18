#include "charcount.ih"

void CharCount::inc(char ch, size_t idx)
{
    ++d_info.ptr[idx].count;
}
