#include "indent_internal.h"
#include "indent.h"

std::ostream& indented_cout() {
    for (size_t i = 0; i < get_indentation_depth(); ++i) {
        std::cout << ' ';
    }
    return std::cout;
}

