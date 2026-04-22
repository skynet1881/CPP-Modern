#include <iostream>

int main()
{
    int x = 10;

    int& ref = x;  // lvalue
    int& ref1 = 10; // rvalue
    int& ref2 = (10 + 5); // rvalue

    return 0;
}