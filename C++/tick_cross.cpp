#include<iostream>
using namespace std;

char boared[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;

void display_board(){

system("cls");
cout<<"\tT i c k  C r o s s  G a m e \n\n"<<endl;
cout<<"\tPlayer1 [X] \n\tPlayer2 [0]"<<endl;
cout<<"\t\t\t     |     |     \n";
cout<<"\t\t\t  "<< boared[0][0] <<"  |  "<< boared[0][1] <<"  |  "<< boared[0][2] <<"  \n";
cout<<"\t\t\t_____|_____|_____\n";
cout<<"\t\t\t     |     |     \n";
cout<<"\t\t\t  "<< boared[1][0] <<"  |  "<< boared[1][1] <<"  |  "<< boared[1][2] <<"  \n";
cout<<"\t\t\t_____|_____|_____\n";
cout<<"\t\t\t     |     |     \n";
cout<<"\t\t\t  "<< boared[2][0] <<"  |  "<< boared[2][1] <<"  |  "<< boared[2][2] <<"  \n";
cout<<"\t\t\t     |     |     \n";
}

void player_turns(){

    cout<<"\tPlayer1 turn [X]: \n\tPlayer2 turn [0]: \n";
cin>>choice;

switch (choice)
{
case 1 :
    boared[0][0] = 'X';

    break;

case 2 :
    boared[0][1] = 'X';

    break; 
    
case 3 :
    boared[0][2] = 'X';

    break;    
    

default:
cout<<"Invalid :"<<endl;

    break;
}
}
int main()
{

display_board();
player_turns();
display_board();

}