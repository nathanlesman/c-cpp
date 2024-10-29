#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size <= d_capacity);
        enlarge();

    d_str[d_size] = next; // store next

    ++d_size;
}
