#include <iostream>
#include "Functions/Functions.cpp"
#include "Checks/Checks.hpp"
#include <vector>

static std::string getName(const std::string name) {
    return "Welcome and Hello | " + name;
}

static std::string name(std::string name)
{
    return name;
}
    namespace {
    class Args
    {
        std::vector<std::string> str{};

    public:
        explicit Args(const std::vector<std::string> &arg)
        {
            this->str = arg;
        }

        [[nodiscard]] bool GetArgs() const
        {
            if (this->str.empty())
            {
                return false;
            }

            return true;
        }
    };
}

namespace Read {
    namespace {
        void GetReadableData(std::ifstream file) {
            std::string str;
            while (std::getline(file, str)) {
                std::cout << str.c_str() << std::endl;
            }
        }
    }
}

namespace Getz
{

    static std::vector<std::string> Get(std::vector<std::string> init)
    {
        return init;
    }

}

static void OptionPicked(const std::string& name)
{
    std::cout << name << std::endl;
}


int main(int argc, const char *argv[]) {
    const std::vector<std::string> OPTIONS = {"Y", "N"};

    const auto data = Getz::Get(OPTIONS);

    const Args arg(data);

    std::cout << std::endl;
    OptionPicked("Welcome to Create File App");
    std::cout << std::endl;

    if (arg.GetArgs() == true) {
        if (strcmp(argv[1], "Y") == 0) {
            std::ifstream file("./ExtraFiles/Config.txt");
            Read::GetReadableData(std::move(file));


            int option{};

            std::cout << "Enter One, Two or Three: " << std::endl;
            std::cin >> option;

            std::cout
                << "Enter File Name Followed By Extension: " << std::endl;

            std::string fileName;
            std::cin >> fileName;
            Empty a(fileName);

            switch (option) {
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
                        CreatorFile::CreateNamedFiled(fileName);

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
                        CreatorFile::CreateNamedFiled(fileName);

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
                        CreatorFile::CreateNamedFiled(fileName);

                        CreatorFile::GetName(fileName, name);
                        break;
                    }

                default:
                    break;
            }
        }
    }

    return 0;
}
