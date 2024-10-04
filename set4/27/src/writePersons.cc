#include "person.h"
#include <iostream>

void writePersons(const Person persons[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << persons[i].name() << " is " << persons[i].age() << " years old." << std::endl;
    }
}

