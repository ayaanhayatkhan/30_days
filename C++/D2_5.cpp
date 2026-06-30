#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    void display() {
        cout << "Car Brand: " << brand;
    }
};

int main() {
    Car car1;

    car1.brand = "Toyota";
    car1.display();

    return 0;
}