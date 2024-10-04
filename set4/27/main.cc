#include "person.h"
#include <iostream>

void readPersons(Person persons[], size_t size);
void writePersons(const Person persons[], size_t size);

int main() {
    const size_t size = 5;
    Person persons[size];

    readPersons(persons, size);
    writePersons(persons, size);

    return 0;
}

