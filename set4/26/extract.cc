#include "person.ih"

void extract(istream &in_stream)
{
    string line;
    Person somebody;

    while (getline(in_stream, line))
    {
        size_t pos = 0; // position
        size_t comma_pos = line.find_first_of(","); // position of comma
        somebody.setName(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        comma_pos = line.find_first_of(",", pos);
        somebody.setAddress(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        comma_pos = line.find_first_of(",", pos);
        somebody.setPhone(line.substr(pos, comma_pos - pos));

        pos = line.find_first_not_of(" ", comma_pos + 1);
        somebody.setPhone(line.substr(pos));
    }
}

