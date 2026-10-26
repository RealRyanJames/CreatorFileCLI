#include <iostream>
#include "Functions/Functions.cpp"

std::string getName(std::string name)
{
    return "Welcome and Hello | " + name;
}

std::string name(std::string name)
{
    return name;
}

int main()
{

    std::cout << "Enter File Name Followed By Extension: " << std::endl;
    std::string fileName;
    std::cin >> fileName;

    std::cout << std::endl;
    CreatorFile::CreatorFiles("Ryan", getName);
    CreatorFile::create();
    CreatorFile::CreateNamedFiled(fileName.c_str());

    CreatorFile::GetName(fileName, name);
    return 0;
}
