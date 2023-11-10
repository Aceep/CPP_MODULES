#include <iostream>
#include <fstream>
#include <string>

std::string    replace(std::string &line, std::string s1, std::string s2)
{
    int pos = 0;
    std::string tmp;
    std::string res;

    tmp = line;
    while ((pos = tmp.find(s1)) != -1)
    {
        tmp.erase(pos, s1.length());
        tmp.insert(pos, s2);
        res.append(tmp.substr(0, pos + s2.length()));
        tmp = tmp.substr(pos + s2.length());
    }
    res.append(tmp);
    return (res);
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
    ofs.open((std::string(argv[1]) + ".replace").c_str());
    while (std::getline(ifs, line))
    {
        line = replace(line, s1, s2);
        ofs << line + "\n";
    }
    ifs.close();
    ofs.close();
    return (0);
}