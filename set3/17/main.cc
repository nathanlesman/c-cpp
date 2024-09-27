#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "Error: please provide a command-line argument\n";
        return 1;
    }

    cout << (check_if_double(argc, argv) ? sum(argc, argv, true) : 
                                           sum(argc, argv)) << "\n";
}


