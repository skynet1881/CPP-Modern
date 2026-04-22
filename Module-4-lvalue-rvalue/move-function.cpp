#include <iostream>
#include <vector>

// std::move(x)
int main()
{
    //std::vector<int> v1 = {1, 2, 3};
    //std::vector<int> v2 = v1; // lvalue: copy constructor

    //std::cout << "v1 size: " << v1.size() << std::endl;
    //std::cout << "v2 size: " << v2.size() << std::endl;

    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = std::move(v1); // rvalue: move constructor

    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "v2 size: " << v2.size() << std::endl;
}