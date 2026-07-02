#include <iostream>
#include <string>
using namespace std;

class Programmer
{
private:
    string name;

public:
    // Getter
    string getName()
    {
        return name;
    }

    // Setter
    void setName(string newName)
    {
        name = newName;
    }
};

int main()
{
    Programmer p;

    p.setName("Geek");

    cout << "Name = " << p.getName();

    return 0;
}