#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
string name ;
string father_name ;
int roll_num ;
float per;

public:

student() // This is the constructor of class which is automatically called when object is created
{

   // cout<<"Object created";
}

void getdata(){
    cout<<"Enter the your name :\n"<<endl;
    cin>>name;

    cout<<"Enter the your father name :"<<endl;
    cin>>father_name;

    cout<<"Enter the your Roll num :"<<endl;
    cin>>name;

    cout<<"Enter the your Percentage :"<<endl;
    cin>>per;

}

void disp()
{
    cout<<"Student name is "<<name<<" Father name is "
    <<father_name<<" Roll No is "<<roll_num<<" And Percentage is "<<per<<endl;

}
};

int main ()
{

student std1;
std1.getdata();
std1.disp();

return 0;

}







