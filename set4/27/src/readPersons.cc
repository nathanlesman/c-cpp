#include "person.h"
#include <iostream>

void readPersons(Person persons[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::string name;
        int age;

        std::cout << "? ";
        std::cin >> name >> age;
        persons[i].setData(name, age);
    }
}

