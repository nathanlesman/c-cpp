#include "symbol.h"

Symbol::Symbol(std::string const &ident, int value)
    : d_ident(ident), d_value(value) {}

Symbol::Symbol(std::string const &ident, double value)
    : d_ident(ident), d_value(value) {}

Symbol::Symbol(std::string const &ident, char value)
    : d_ident(ident), d_value(value) {}

std::string const &Symbol::ident() const {
    return d_ident;
}

Value const &Symbol::value() const {
    return d_value;
}

void Symbol::assign(Value const &value) {
    d_value = value;
}

Symbol::CompareResult Symbol::compare(std::string const &other) const {
    if (d_ident < other) {
        return LHS_FIRST;
    }
    if (d_ident > other) {
        return RHS_FIRST;
    }
    return EQUAL;
}

