#include "data.h"
#include <utility>
#include <new>

// Initialize static member function pointer arrays
void (Data::*Data::s_destroy[NUM_TYPES])() = {
    &Data::destroyDouble,
    &Data::destroyWord,
    &Data::destroyValue
};

void (Data::*Data::s_copy[NUM_TYPES])(Data const &) = {
    &Data::copyDouble,
    &Data::copyWord,
    &Data::copyValue
};

void (Data::*Data::s_move[NUM_TYPES])(Data &&) = {
    &Data::moveDouble,
    &Data::moveWord,
    &Data::moveValue
};

void (Data::*Data::s_swap[NUM_TYPES][NUM_TYPES])(Data &) = {
    {&Data::swapDoubleDouble, &Data::swapDoubleWord, &Data::swapDoubleValue},
    {&Data::swapWordDouble, &Data::swapWordWord, &Data::swapWordValue},
    {&Data::swapValueDouble, &Data::swapValueWord, &Data::swapValueValue}
};

// Constructors
Data::Data(double *values)
{
    new (&d_union.u_double) double*(values);
}

Data::Data(std::string const &str)
{
    new (&d_union.u_word) std::string(str);
}

Data::Data(size_t value)
{
    d_union.u_value = value;
}

// Copy constructor
Data::Data(Data const &other, Type type)
{
    (this->*s_copy[type])(other);
}

// Move constructor
Data::Data(Data &&tmp, Type type) noexcept
{
    (this->*s_move[type])(std::move(tmp));
}

// Destroy member
void Data::destroy(Type type)
{
    (this->*s_destroy[type])();
}

// Field-specific destroy members
void Data::destroyDouble()
{
    delete[] d_union.u_double;
}

void Data::destroyWord()
{
    d_union.u_word.~basic_string();
}

void Data::destroyValue()
{
    // Nothing to destroy for plain old data
}

// Copy members
void Data::copyDouble(Data const &other)
{
    double *newArray = new double[ARRAY_SIZE];
    for (size_t idx = 0; idx != ARRAY_SIZE; ++idx)
        newArray[idx] = other.d_union.u_double[idx];
    d_union.u_double = newArray;
}

void Data::copyWord(Data const &other)
{
    new (&d_union.u_word) std::string(other.d_union.u_word);
}

void Data::copyValue(Data const &other)
{
    d_union.u_value = other.d_union.u_value;
}

// Move members
void Data::moveDouble(Data &&tmp)
{
    d_union.u_double = tmp.d_union.u_double;
    tmp.d_union.u_double = nullptr;
}

void Data::moveWord(Data &&tmp)
{
    new (&d_union.u_word) std::string(std::move(tmp.d_union.u_word));
}

void Data::moveValue(Data &&tmp)
{
    d_union.u_value = tmp.d_union.u_value;
}

// Swap implementations
void Data::swap(Data &other, Type thisType, Type otherType)
{
    (this->*s_swap[thisType][otherType])(other);
}

void Data::swapDoubleDouble(Data &other)
{
    std::swap(d_union.u_double, other.d_union.u_double);
}

void Data::swapDoubleWord(Data &other)
{
    double *tempDouble = d_union.u_double;
    std::string tempWord = std::move(other.d_union.u_word);
    other.d_union.u_word.~basic_string();
    d_union.u_double = nullptr;
    new (&d_union.u_word) std::string(std::move(tempWord));
    other.d_union.u_double = tempDouble;
}

void Data::swapDoubleValue(Data &other)
{
    double *tempDouble = d_union.u_double;
    size_t tempValue = other.d_union.u_value;
    d_union.u_value = tempValue;
    other.d_union.u_double = tempDouble;
}

void Data::swapWordDouble(Data &other)
{
    other.swapDoubleWord(*this);
}

void Data::swapWordWord(Data &other)
{
    std::swap(d_union.u_word, other.d_union.u_word);
}

void Data::swapWordValue(Data &other)
{
    std::string tempWord = std::move(d_union.u_word);
    d_union.u_word.~basic_string();
    size_t tempValue = other.d_union.u_value;
    new (&other.d_union.u_word) std::string(std::move(tempWord));
    d_union.u_value = tempValue;
}

void Data::swapValueDouble(Data &other)
{
    other.swapDoubleValue(*this);
}

void Data::swapValueWord(Data &other)
{
    other.swapWordValue(*this);
}

void Data::swapValueValue(Data &other)
{
    std::swap(d_union.u_value, other.d_union.u_value);
}

// Accessors
double *Data::getDouble() const
{
    return d_union.u_double;
}

std::string const &Data::getWord() const
{
    return d_union.u_word;
}

size_t Data::getValue() const
{
    return d_union.u_value;
}
