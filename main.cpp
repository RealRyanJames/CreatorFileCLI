#include <iostream>
#include "Functions/Functions.cpp"
#include "Checks/Checks.hpp"
#include <vector>
#include <sys/stat.h>
#include <typeinfo>

std::string getName(std::string name)
{
    return "Welcome and Hello | " + name;
}

std::string name(std::string name)
{
    return name;
}

class Args
{

private:
    std::vector<std::string> str{};

public:
    Args(std::vector<std::string> arg)
    {
        this->str = arg;
    }

    bool GetArgs()
    {
        if (this->str.empty())
        {
            return false;
        }

        return true;
    }
};

void OptionPicked(std::string name)
{
    std::cout << name << std::endl;
}

int main(int argc, const char *argv[])
{
    std::vector<std::string> OPTIONS = {"Y", "N"};

    int option{};
    Args arg(OPTIONS);

    std::cout << std::endl;
    OptionPicked("Welcome to Create File App");
    std::cout << std::endl;

    if (arg.GetArgs() == true)
    {
        if (strcmp(argv[1], "Y") == 0)
        {

            std::cout << "Enter One, Two or Three: " << std::endl;
            std::cin >> option;

            std::cout
                << "Enter File Name Followed By Extension: " << std::endl;

            std::string fileName;
            std::cin >> fileName;
            Empty a(fileName);

            switch (option)
            {

            case 1:

                if (a.isEmptyString())
                {
                    std::cout << a.isEmptyString() << std::endl;
                }
                else
                {

                    std::cout << std::endl;
                    CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                    CreatorFile::create();
                    CreatorFile::CreateNamedFiled(fileName.c_str());

                    CreatorFile::GetName(fileName, name);
                    break;
                }
            case 2:

                if (a.isEmptyString())
                {
                    std::cout << a.isEmptyString() << std::endl;
                }
                else
                {

                    std::cout << std::endl;
                    CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                    CreatorFile::create();
                    CreatorFile::CreateNamedFiled(fileName.c_str());

                    CreatorFile::GetName(fileName, name);
                    break;
                }
            case 3:

                if (a.isEmptyString())
                {
                    std::cout << a.isEmptyString() << std::endl;
                }
                else
                {

                    std::cout << std::endl;
                    CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                    CreatorFile::create();
                    CreatorFile::CreateNamedFiled(fileName.c_str());

                    CreatorFile::GetName(fileName, name);
                    break;
                }
            }
        }
    }

    else
    {

        std::cout << "Enter File Name Followed By Extension: " << std::endl;

        std::string fileName;
        std::cin >> fileName;
        Empty a(fileName);

        switch (option)
        {

        case 1:

            if (a.isEmptyString())
            {
                std::cout << a.isEmptyString() << std::endl;
            }
            else
            {

                std::cout << std::endl;
                CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                CreatorFile::create();
                CreatorFile::CreateNamedFiled(fileName.c_str());

                CreatorFile::GetName(fileName, name);
                break;
            }
        case 2:

            if (a.isEmptyString())
            {
                std::cout << a.isEmptyString() << std::endl;
            }
            else
            {

                std::cout << std::endl;
                CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                CreatorFile::create();
                CreatorFile::CreateNamedFiled(fileName.c_str());

                CreatorFile::GetName(fileName, name);
                break;
            }
        case 3:

            if (a.isEmptyString())
            {
                std::cout << a.isEmptyString() << std::endl;
            }
            else
            {

                std::cout << std::endl;
                CreatorFile::CreatorFiles("CreatorFileCLI", getName);
                CreatorFile::create();
                CreatorFile::CreateNamedFiled(fileName.c_str());

                CreatorFile::GetName(fileName, name);
                break;
            }
        }
    }
    return 0;
}
