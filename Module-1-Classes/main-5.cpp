#include <iostream>

class Animal // base
{
public:
    virtual void speak()
    {
        std::cout << "Animal sound" << "\n";
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        std::cout << "Dog barks" << "\n";
    }
};

int main()
{
    Animal* a = new Dog();
    a->speak();

    delete a;

    return 0;
}