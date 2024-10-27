#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

string lowercase(string const &str)
{
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void convert(string const &filename)
{
    fstream file(filename, ios::in | ios::out);
    
    if (!file)
    {
        cerr << "Could not open file: " << filename << '\n';
        return;
    }

    cout << "Processing file: " << filename << '\n';
    
    string line;
    size_t pos = 0;
    size_t changes = 0;

    while (getline(file, line))
    {
        if (line.substr(0, 6) == "email:")
        {
            string originalEmail = line.substr(6);
            string newEmail = lowercase(originalEmail);
            
            if (originalEmail != newEmail)
            {
                string newLine = "email:" + newEmail;
                file.seekp(pos);
                file << newLine;
                if (!file.eof())
                {
                    file << '\n';
                }
                changes++;
                cout << "Changed email from: " << originalEmail << " to: " << newEmail << '\n';
            }
        }
        pos = file.tellg();
    }
    
    cout << "Total email addresses changed: " << changes << '\n';
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    convert(argv[1]);
    return 0;
}
