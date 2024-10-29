#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iostream>
#include <cstddef>

class Numbers
{
    size_t d_size = 0;
    int *d_numbers = nullptr;

    public:
        explicit Numbers(size_t count);         // uninitialized values
        Numbers(size_t count, int value);       // initialized values
        Numbers(Numbers const &other);          // copy constructor
        Numbers(Numbers &&tmp) noexcept;        // move constructor
        ~Numbers();                            // destructor

        Numbers &operator=(Numbers const &rhs); // copy assignment
        Numbers &operator=(Numbers &&tmp) noexcept; // move assignment

        int &at(size_t idx);                   // modify element
        int const &at(size_t idx) const;       // inspect element
        size_t length() const;                 // get number of elements
        void write(std::ostream &out) const;   // write to stream
        void swap(Numbers &other) noexcept;    // swap function
};

std::ostream &operator<<(std::ostream &out, Numbers const &numbers);

#endif
