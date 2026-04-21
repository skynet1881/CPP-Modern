#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "This is constructor \n";
    }

    ~Entity()
    {
        std::cout << "This is destructor \n";
    }
};

int main()
{
    std::shared_ptr<Entity> p1 = std::make_shared<Entity>();

    std::cout << "Use count before block: " << p1.use_count() << "\n";

    {
        std::shared_ptr<Entity> p2 = p1;
        std::cout << "Use count: " << p1.use_count() << "\n";
    }

    std::cout << "Use count after block: " << p1.use_count() << "\n";

    return 0;
}