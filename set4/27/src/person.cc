#include "person.h"

Person::Person() : name_(""), age_(0) {}

void Person::setData(const std::string& name, int age) {
    this->name_ = name;
    this->age_ = age;
}

std::string Person::name() const {
    return name_;
}

int Person::age() const {
    return age_;
}

