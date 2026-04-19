#include <iostream>

class Point
{
public: 
    int z;
    int y;
    int x;
};

int main()
{
    Point p;

    p.x = 0;
    p.y = 5;
    p.z = 10;

    std::cout << "Size of Point " << sizeof(Point) << "\n";

    std::cout << "Address of object " << &p << "\n";
    std::cout << "Address of x " << &p.x << "\n";
    std::cout << "Address of y " << &p.y << "\n";
    std::cout << "Address of z " << &p.z << "\n"; 

    return 0;
}