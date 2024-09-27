#include "main.ih"

bool check_if_double(size_t argc, char *argv[])
{
    for (size_t arg_number = 1; arg_number != argc; ++arg_number)
    {
        string current_arg = argv[arg_number];

        if (current_arg.contains('.') == true)
        {
            return true;            
        }
    }
    return false;
}

