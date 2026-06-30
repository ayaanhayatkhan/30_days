#include <iostream>
using namespace std;

// function definition
int square(float x) {
    return x * x;
}

int main() {

    // Calling the function
    float result = square(5.5);
    
    cout << "Square of 5 is: " << result << endl;

    return 0;
}