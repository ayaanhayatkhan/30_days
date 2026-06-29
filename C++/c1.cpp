#include <iostream>
using namespace std;

// function definition
int square(int x) {
    return x * x;
}

int main() {

    // Calling the function
    int result = square(5);
    
    cout << "Square of 5 is: " << result << endl;

    return 0;
}