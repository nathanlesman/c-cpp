#include "main.ih"

int main() 
{
    size_t const size = 5;
    Person people[size];
     
    extractArray(people, size);

    insertArray(people, size);    
}

