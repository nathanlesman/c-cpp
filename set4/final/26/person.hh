#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iosfwd>

class Person
{
    std::string d_name; // name of person
    std::string d_address; // address field
    std::string d_phone; // telephone number
    size_t      d_mass; // the mass in kg.
    
    public: // member functions
        Person();
        Person(std::string const &name, 
               std::string const &address,
               std::string const &phone, 
               size_t mass);

        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        std::string const &name()    const;
        std::string const &address() const;
        std::string const &phone()   const;
        size_t mass()                const;

        void insert(std::ostream &out_stream);
        void extract(std::istream &in_stream);
};

#endif
