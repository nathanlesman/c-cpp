#ifndef INDENT_INTERNAL_H
#define INDENT_INTERNAL_H

#include <cstddef>
#include <iostream>

static size_t indentation_depth = 0;
static size_t indentation_step_size = 4;

inline void set_indentation_depth(size_t depth) {
    indentation_depth = depth;
}

inline size_t get_indentation_depth() {
    return indentation_depth;
}

inline void set_step_size(size_t size) {
    indentation_step_size = size;
}

inline size_t get_step_size() {
    return indentation_step_size;
}

#endif 

