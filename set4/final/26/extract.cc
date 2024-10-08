#include "person.ih"

void Person::extract(istream &in_stream)
{
    string line;

    while (getline(in_stream, line))
    {
        size_t pos = 0; // position
        size_t comma_pos = line.find_first_of(","); // position of comma
        setName(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        comma_pos = line.find_first_of(",", pos);
        setAddress(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        comma_pos = line.find_first_of(",", pos);
        setPhone(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        setMass(stoul(line.substr(pos)));
    }
}

