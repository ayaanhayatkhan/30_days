#include<iostream>
using namespace std;

class student
{
public:
string name ;
string father_name ;
int roll_num ;
float per;

void disp()
{
    cout<<"Student name is "<<name<<" Father name is "<<father_name<<" Roll No is "<<roll_num<<" And Percentage is "<<per<<endl;

}
};

int main ()
{

student std1;
std1.name="Ayaan";
std1.father_name="Hayat khan";
std1.roll_num=1234;
std1.per=87.17;
std1.disp();

return 0;

}







