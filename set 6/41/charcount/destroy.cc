#include "charcount.ih"

void CharCount::destroy()
{
    size_t size = d_info.nCharObj - 1;
    
    for (Char *end = d_info.ptr + size; end != d_info.ptr; end--)
        delete end;

    operator delete(d_info.ptr);
}
