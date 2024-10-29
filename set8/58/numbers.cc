#include "numbers.h"
#include <iostream>
#include <utility>  // for std::swap

Numbers::Numbers(size_t count)
:
    d_size(count),
    d_numbers(new int[count])  // values intentionally uninitialized
{}

Numbers::Numbers(size_t count, int value)
:
    d_size(count),
    d_numbers(new int[count])
{
    for (size_t idx = 0; idx != count; ++idx)
        d_numbers[idx] = value;
}

Numbers::Numbers(Numbers const &other)
:
    d_size(other.d_size),
    d_numbers(new int[other.d_size])
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_numbers[idx] = other.d_numbers[idx];
}

Numbers::Numbers(Numbers &&tmp) noexcept
:
    d_size(tmp.d_size),
    d_numbers(tmp.d_numbers)
{
    tmp.d_size = 0;
    tmp.d_numbers = nullptr;
}

Numbers::~Numbers()
{
    delete[] d_numbers;
}

Numbers &Numbers::operator=(Numbers const &rhs)
{
    if (this != &rhs)
    {
        Numbers tmp(rhs);
        swap(tmp);
    }
    return *this;
}

Numbers &Numbers::operator=(Numbers &&tmp) noexcept
{
    swap(tmp);
    return *this;
}

int &Numbers::at(size_t idx)
{
    if (idx >= d_size)
    {
        std::cout << "Error: Index out of range\n";
        return d_numbers[0];  // return first element as fallback
    }
    return d_numbers[idx];
}

int const &Numbers::at(size_t idx) const
{
    if (idx >= d_size)
    {
        std::cout << "Error: Index out of range\n";
        return d_numbers[0];  // return first element as fallback
    }
    return d_numbers[idx];
}

size_t Numbers::length() const
{
    return d_size;
}

void Numbers::write(std::ostream &out) const
{
    for (size_t idx = 0; idx != d_size; ++idx)
        out << d_numbers[idx] << ' ';
}

void Numbers::swap(Numbers &other) noexcept
{
    std::swap(d_size, other.d_size);
    std::swap(d_numbers, other.d_numbers);
}

std::ostream &operator<<(std::ostream &out, Numbers const &numbers)
{
    numbers.write(out);
    return out;
}
