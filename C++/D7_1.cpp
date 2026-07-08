#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s;

    // Accessing public member
    s.name = "Ayaan";

    cout << s.name;

    return 0;
}