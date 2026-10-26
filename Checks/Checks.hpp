#include <iostream>
#include <string>
#include "CheckFunctions.cpp"

class Empty
{

private:
    std::string messageCheck;

public:
    Empty(std::string message)
    {
        this->messageCheck = message;
    }

    void isEmpty()
    {
        if (this->messageCheck.empty())
        {
            std::cout << "Empty Message" << std::endl;
        }
    }

    bool isEmptyString()
    {
        if (this->messageCheck.empty())
        {
            this->isEmpty();
            return true;
        }

        return false;
    }
};