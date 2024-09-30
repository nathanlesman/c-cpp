#include "main.ih"
#include <iostream>


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "arg1: str to inspect, arg2: target, "
                "optionally arg3: starting offset\n";
        return 0;
    }

     if (               // called as string::find, maybe using an offset
         size_t offset = findcase(argv[1], argv[2], 
                                         argc < 4 ? 0 : stoul(argv[3])); 
         offset == string::npos
     )
         cout << "not found\n";
     else
         cout << "found at offset " << offset << '\n';
}