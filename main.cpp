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

    int option{};

    std::cout << "Enter One, Two or Three: " << std::endl;

    std::cin >> option;

    std::cout << "Enter File Name Followed By Extension: " << std::endl;

    std::string fileName;
    std::cin >> fileName;

    switch (option)
    {

    case 1:

        std::cout << std::endl;
        CreatorFile::CreatorFiles("CreatorFileCLI", getName);
        CreatorFile::create();
        CreatorFile::CreateNamedFiled(fileName.c_str());

        CreatorFile::GetName(fileName, name);
        break;

    case 2:

        std::cout << std::endl;
        CreatorFile::CreatorFiles("CreatorFileCLI", getName);
        CreatorFile::create();
        CreatorFile::CreateNamedFiled(fileName.c_str());

        CreatorFile::GetName(fileName, name);
        break;

    case 3:
        std::cout << std::endl;
        CreatorFile::CreatorFiles("CreatorFileCLI", getName);
        CreatorFile::create();
        CreatorFile::CreateNamedFiled(fileName.c_str());

        CreatorFile::GetName(fileName, name);
        break;
    }

    return 0;
}
