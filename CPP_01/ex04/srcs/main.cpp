#include <iostream>
#include <fstream>
#include <string>

std::string    replace(std::string &line, std::string s1, std::string s2)
{
    int pos = 0;
    while ((pos = line.find(s1)) != -1)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
    }
    return (line);
}
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::ifstream ifs(argv[1]);
    std::string line;

    std::ofstream ofs;
    if (!ifs.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        return (1);
    }
    std::getline(ifs, line);
    ofs.open((std::string(argv[1]) + ".replace").c_str());
    line = replace(line, s1, s2);
    ofs << line;

    ifs.close();
    ofs.close();
    return (0);
}