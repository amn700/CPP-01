#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    std::string content = readFile(filename);
    if (content.empty())
    {
        std::cerr << "Error: could not read file " << filename << std::endl;
        return 1;
    }
    
    std::string result = replaceAll(content, s1, s2);
    std::string outFilename = filename + ".replace";
    if (!writeFile(outFilename, result))
    {
        std::cerr << "Error: could not write to file " << outFilename << std::endl;
        return 1;
    }
    
    return 0;
}
