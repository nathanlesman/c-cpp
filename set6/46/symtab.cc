#include "symtab.h"
#include <algorithm>

Symbol &Symtab::find(std::string const &ident) {
    size_t idx = findIdx(ident);
    if (idx == d_symbols.size() || d_symbols[idx].compare(ident) != Symbol::EQUAL) {
        d_symbols.insert(d_symbols.begin() + idx, Symbol(ident));
    }
    return d_symbols[idx];
}

size_t Symtab::findIdx(std::string const &ident) {
    size_t begin = 0, end = d_symbols.size();
    while (begin < end) {
        size_t mid = (begin + end) / 2;
        if (d_symbols[mid].compare(ident) == Symbol::LHS_FIRST) {
            begin = mid + 1;
        } else {
            end = mid;
        }
    }
    return begin;
}

size_t Symtab::size() const {
    return d_symbols.size();
}

Symbol &Symtab::at(size_t idx) {
    return d_symbols[idx];
}

Symbol const &Symtab::at(size_t idx) const {
    return d_symbols[idx];
}

