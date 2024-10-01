#include "indent_internal.h"
#include "indent.h"

void indent_less() {
    if (get_indentation_depth() >= get_step_size()) {
        set_indentation_depth(get_indentation_depth() - get_step_size());
    }
}

