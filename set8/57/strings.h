#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <cstddef>
#include <utility>

class Strings
{
    size_t d_size = 0;         // number of strings
    char **d_str = nullptr;    // array of string pointers

    public:
        // Copy constructor
        Strings(Strings const &other);

        // Move constructor
        Strings(Strings &&tmp);

        // Copy assignment operator
        Strings &operator=(Strings const &rhs);

        // Move assignment operator
        Strings &operator=(Strings &&tmp);

        // Swap member function
        void swap(Strings &other);
};

// Implementation of new members only:

// Copy constructor
inline Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_str(other.d_size ? new char *[other.d_size] : nullptr)
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_str[idx] = strdup(other.d_str[idx]);    // deep copy of each string
}

// Move constructor
inline Strings::Strings(Strings &&tmp)
:
    d_size(tmp.d_size),
    d_str(tmp.d_str)
{
    tmp.d_size = 0;
    tmp.d_str = nullptr;
}

// Copy assignment operator
inline Strings &Strings::operator=(Strings const &rhs)
{
    if (this != &rhs)
    {
        Strings tmp(rhs);      // copy construct temporary
        swap(tmp);             // swap members with temporary
    }                          // temporary is destroyed, taking old resources
    return *this;
}

// Move assignment operator
inline Strings &Strings::operator=(Strings &&tmp)
{
    swap(tmp);                 // swap with temporary
    return *this;             // temporary is destroyed, taking old resources
}

// Swap member function
inline void Strings::swap(Strings &other)
{
    std::swap(d_size, other.d_size);
    std::swap(d_str, other.d_str);
}

#endif
