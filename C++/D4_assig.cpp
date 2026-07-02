#include<iostream>
using namespace std;

class student
{
public:
string name ;
string father_name ;
int roll_num ;
float per;

student() // This is the constructor of class which is automatically called when object is created
{

    //cout<<"Object created\n";
}
~student()
{
    cout<<"Object destroyed\n";
}
void disp()
{
    cout<<"Student name is "<<name<<" Father name is "
    <<father_name<<" Roll No is "<<roll_num<<" And Percentage is "<<per<<endl;

}
void get_input()
{
cout<<"\nEnter your name :";
cin>>name;

cout<<"Enter your father name :\n";
cin>>father_name;

cout<<"Enter your roll number :\n";
cin>>roll_num;

cout<<"Enter your percentage :\n";
cin>>per;


}
};

int main ()
{
char choise = 'N';
int array_size=3;
int count = 0 ;   
student std[array_size] ;
    
do
    {
    
        

    std[count].get_input();
    count++;

    
    cout<<"Do you want to enter another : Y / N\n";
    cin>>choise;
    
        
    } while (choise == 'Y' && count<array_size);


    for (int i = 0; i < array_size; i++)
    {

    std[i].disp();

    }
    

//cout<<"Size of std array is :\n"<<sizeof(std[0]);

return 0;

}







