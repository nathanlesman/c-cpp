#ifndef SYMBOL_H
#define SYMBOL_H

#include "value.h"
#include <string>

class Symbol {
    std::string d_ident;
    Value d_value;

public:
    Symbol(std::string const &ident, int value = 0);
    Symbol(std::string const &ident, double value);
    Symbol(std::string const &ident, char value);

    std::string const &ident() const;
    Value const &value() const;
    void assign(Value const &value);

    enum CompareResult { LHS_FIRST, RHS_FIRST, EQUAL };
    CompareResult compare(std::string const &other) const;
};

#endif // SYMBOL_H

