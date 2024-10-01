#ifndef INDENT_H
#define INDENT_H

void indent_more();
void indent_less();
void reset_indentation();
std::ostream& indented_cout();
void step_size(size_t size);

#endif 

