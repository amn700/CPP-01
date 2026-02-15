#include "replace.hpp"

std::string readFile(const std::string& filename)
{
    std::ifstream input(filename.c_str());
    if (!input.is_open())
        return "";
    
    std::stringstream buffer;
    buffer << input.rdbuf();
    return buffer.str();
}

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);
    return result;
}

bool writeFile(const std::string& filename, const std::string& content)
{
    std::ofstream output(filename.c_str());
    if (!output.is_open())
        return false;
    output << content;
    return true;
}
