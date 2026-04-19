// What is class? A class is a user-defined data type that serves as a blueprint for creating objects. 
// It encapsulates data members (variables) and member functions (methods) that operate on the data. 
// A class defines the properties and behaviors of the objects created from it, 
// allowing for object-oriented programming principles such as encapsulation, inheritance, and polymorphism.
#include <iostream>

class Car
{
public:
    void setBrandName(std::string name)
    {
        this->name = name;
    }

    void accelerate(int speedIncrease)
    {   
        spead += speedIncrease;
    }

    void printSpeed()
    {
        std::cout << name <<": Speed: " << spead << "\n";
    }

    int spead;
    std::string name;
};

int main()
{
    Car bmw;
    bmw.setBrandName("BMW");
    bmw.spead = 0;
    bmw.accelerate(100);
    bmw.accelerate(60);
    bmw.printSpeed();

    Car scoda;
    scoda.setBrandName("Scoda");
    scoda.spead = 0;
    scoda.accelerate(50);
    scoda.printSpeed();

    return 0;
}