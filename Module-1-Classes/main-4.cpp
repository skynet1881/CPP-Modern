#include <iostream>

class Person
{
public:
    Person(std::string iName, int iAge) 
        : name(iName), age(iAge)
    {
        std::cout << "Constructor called \n";
    }

    void print()
    {
        std::cout << "Name: " << name << " Age: " << age << "\n";
    }

private:
    std::string name;
    int age;
};

int main()
{
    Person Can("Can", 33);
    Person Berkay("Berkay", 30);

    Can.print();
    Berkay.print();

    return 0;
}