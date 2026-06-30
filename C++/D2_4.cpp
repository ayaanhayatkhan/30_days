#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b)
{
    return a - b;
}

// Function to convert Celsius to Fahrenheit
float celsiusToF(float c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    int a = 10, b = 5;
    float c = 25;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Celsius to Fahrenheit: " << celsiusToF(c) << endl;

    return 0;
}