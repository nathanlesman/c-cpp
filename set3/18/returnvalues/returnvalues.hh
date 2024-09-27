#ifndef RETURNVALUES_HH
#define RETURNVALUES_HH

#include <string>

struct ReturnValues 
{
    bool ok;
    size_t nr;
    std::string value;
};

ReturnValues combine(int argc, char *argv[], size_t requestedArg);

#endif

