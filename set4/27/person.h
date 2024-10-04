#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name_;  
    int age_;   

public:
    Person();  
    void setData(const std::string& name, int age);  
    std::string name() const;   
    int age() const;  
};

#endif 

