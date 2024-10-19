#ifndef SYMTAB_H
#define SYMTAB_H

#include "symbol.h"
#include <vector>

class Symtab {
    std::vector<Symbol> d_symbols;

public:
    Symbol &find(std::string const &ident);
    size_t findIdx(std::string const &ident);
    size_t size() const;
    Symbol &at(size_t idx);
    Symbol const &at(size_t idx) const;
};

#endif // SYMTAB_H

