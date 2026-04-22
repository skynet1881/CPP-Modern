#include <iostream>

void function(int &value)
{
    std::cout << "lvalue: " << value << std::endl;
}

void function(int &&value)
{
    std::cout << "rvalue: " << value << std::endl;
}

int main()
{
    int x = 10;
    
    function(x);
    function(20+5);
   
    return 0;
}