#include <iostream>

class Robot
{
public:
    Robot()
    {
        std::cout << "Robot constructor \n";
    }

    ~Robot()
    {
        std::cout << "Robot destructor \n";
    }

};

int main()
{   
    {
        Robot robocop;
    }
    std::cout << "Inside main \n";

    return 0;
}