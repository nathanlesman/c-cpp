#include "person.ih"

void Person::insert(ostream &out_stream)
{
    out_stream << name()     << ", "
               << address()  << ", "
               << phone()    << ", "
               << mass()     << "\n";

}
