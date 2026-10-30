#include "./namespaces.cpp"
#include <fstream>
#include <ranges>
#include <utility>

void CreatorFile::create()
{
    std::cout << "Calling from C++" << std::endl;
}

void CreatorFile::CreatorFiles(std::string name, std::string (*func)(std::string))
{
    std::cout << func(std::move(name)) << std::endl;
}

void CreatorFile::GetName(std::string name, std::string (*fileName)(std::string))
{
    std::cout << "You Created: " << fileName(std::move(name)) << std::endl;
}
enum TypeFileExtension
{

    CS,
    RS,
    JS,
    TS,
};

void CreatorFile::CreateNamedFiled(std::string name)
{
    std::ofstream file(name.c_str());
    if (file.is_open())
    {

        file << "Created File" << name.c_str() << std::endl;
    }

    file.close();
}
