#include "main.ih"
#include <cstring>



size_t findcase(string const &str, string const &target, size_t offset)

{
    if (target.empty() || offset >= str.length())
        return string::npos;

    char const *cStr = &str.front();
    char const *cTar = &target.front();

    // start from the location of the offset,when idx is valid, move the pointer forward
    //on the string, try to match the target
    for (size_t idx = offset; idx <= str.length() -target.length(); idx ++)
    {
        //if there is a match,the pointer will stop at the first character of the match part
        // at this moment, the location of this character is at the position of idx
        if( strncasecmp( cStr+ idx , cTar, target.length()) == 0 )
        {
    
            return idx - offset;
        }
    
    }
    return string::npos;
   }
