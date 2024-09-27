#include "main.ih"

int sum(size_t argc, char *argv[]) 
{
    int total = 0;

    for (size_t term_number = 1; term_number != argc; ++term_number) 
        total += stol(argv[term_number]);
    
    return total;

}

