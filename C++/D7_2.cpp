#include <iostream>
using namespace std;

class Employee {
private:     

    // salary and empId cannot be accessed 
    // from outside the Class
    double salary;
    int empID;

public:                 
    string name; // Name can be accessed anywhere
    
    Employee(string n, double s, int id) {
        name = n;
        salary = s;
        empID = id;
    }
};

int main() {
    Employee emp("Fedrick", 50000, 101);
    cout << "Name: " << emp.name << endl;
    return 0;
}