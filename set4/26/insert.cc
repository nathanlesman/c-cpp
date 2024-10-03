#include "person.ih"

void insert(ostream &out_stream, Person const &somebody)
{
    out_stream << somebody.name()     << ", "
               << somebody.address()  << ", "
               << somebody.phone()    << ", "
               << somebody.mass()     << "\n";

}
