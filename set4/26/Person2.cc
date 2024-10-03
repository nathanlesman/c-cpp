#include "person.ih"

Person::Person(string const &name, string const &address,
               string const &phone, size_t mass)
{
    d_name = name;
    d_address = address;
    setPhone(phone);
    d_mass = mass;
}

