#include "charcount.ih"

// doubles the raw memory
CharCount::Char *CharCount::rawCapacity(size_t const capacity) const
{
    return static_cast<Char *>(operator new(2 * capacity * sizeof(Char)));
}
