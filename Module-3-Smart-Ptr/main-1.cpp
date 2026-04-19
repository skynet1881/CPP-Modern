#include <iostream>
#include <memory>

class Resource
{
public:
    Resource()
    {
        std::cout << "Resource constructor \n";
    }

    ~Resource()
    {
        std::cout << "Resource destructor \n";
    }
};

int main()
{
    std::shared_ptr<Resource> p1 = std::make_shared<Resource>();
    {
        std::shared_ptr<Resource> p2 = p1;

        std::cout << "P2 killed \n";
    }
    
    std::cout << "P1 killed \n";

    return 0;
}