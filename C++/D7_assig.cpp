#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    int speed;
    int fuel;

protected:
    int maxSpeed;
};

// Derived class
class Car : public Vehicle
{
public:
    int doors;

    void setData()
    {
        speed = 120;
        fuel = 50;
        maxSpeed = 200;   // Accessible because it is protected
        doors = 4;
    }

    void display()
    {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel: " << fuel << " Litres" << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Doors: " << doors << endl;
    }
};

int main()
{
    Car c;

    c.setData();
    c.display();

    return 0;
}