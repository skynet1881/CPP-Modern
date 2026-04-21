#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Entity constructor \n";
    }

    ~Entity()
    {
        std::cout << "Entity destructor \n";
    }

    void printLog()
    {
        std::cout << "Print function \n";
    }
};

int main()
{
    {
        std::unique_ptr<Entity> p1 = std::make_unique<Entity>();
        p1->printLog();

        std::unique_ptr<Entity> p2 = std::move(p1); // p1 -> NULL
    }

    std::cout << "Main ends \n";

    return 0;
}