#include <iostream>

namespace CreatorFile
{

    void create();

    void CreatorFiles(std::string name, std::string (*func)(std::string));

    void CreateNamedFiled(std::string name);

    void GetName(std::string name, std::string (*fileName)(std::string));

}