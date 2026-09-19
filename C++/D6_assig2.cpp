#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog says: Bark!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    Cat c;

    a.speak();
    d.speak();
    c.speak();

    return 0;
}