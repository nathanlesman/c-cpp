#include "strings.ih"

string *CharCount::rawCapacity(size_t const capacity) const
{
    return static_cast<string *>(operator new(2 * capacity * sizeof(string)));
}
