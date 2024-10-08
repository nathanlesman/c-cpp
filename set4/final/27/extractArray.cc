#include "main.ih"

void extractArray(Person people[], size_t size)
{
    for (size_t index = 0; index != size; ++index)
    {
        cout << "?\n";
        people[index].extract(cin);
    }
}
