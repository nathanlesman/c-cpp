#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    cout << "hello " <<
        (argc == 1 ? "world" : 
         (argc == 2 ? argv[1] : 
         (argc > 2 && stoul(argv[1]) < static_cast<size_t>(argc - 1) ? argv[stoul(argv[1]) + 1] : "world"))) 
        << endl;

    return 0;
}

