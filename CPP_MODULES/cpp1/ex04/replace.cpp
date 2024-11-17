#include "replace.hpp"

std::string ft_replace(std::string text, std::string find, std::string replace)
{
    size_t currentPosition = 0;
    size_t foundPosition = text.find(find);
    std::string result;

    while (foundPosition != std::string::npos)
    {
        result += text.substr(currentPosition, foundPosition - currentPosition) + replace;
        currentPosition = foundPosition + find.length();
        foundPosition = text.find(find, currentPosition);
    }
    
    result += text.substr(currentPosition);
    return result;
}
