#include <iostream>

int main()
{
    int x = 10;
    int&& rref= 10; // rvalue
    int&& rref2 = x; // lvalue   

    return 0;
}