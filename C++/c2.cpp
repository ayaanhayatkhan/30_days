#include <iostream>
using namespace std;

void greet() {
    cout << "Welcome to C++ Programming!" << endl;
}
int multiply(int a, int b) {
    return a * b;
}

int main() {
    
    greet();
    int result = multiply(4, 5);
    cout << "Multiplication result: " << result << endl;
    return 0;
}