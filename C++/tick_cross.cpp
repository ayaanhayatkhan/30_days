#include<iostream>
using namespace std;

char boared[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
char turn = 'X';
int row , cloumn ;
bool draw = false ;




void display_board(){

system("clear");
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

if (turn == 'X')
cout<<"\n\tPlayer1 turn [X]: ";

if (turn == '0')
cout<<"\n\tPlayer2 turn [0]: ";

cin>>choice;


switch (choice)
{
case 1 : row =0; cloumn =0; break;
case 2 : row =0; cloumn =1; break;
case 3 : row =0; cloumn =2; break;
case 4 : row =1; cloumn =0; break;
case 5 : row =1; cloumn =1; break;
case 6 : row =1; cloumn =2; break;
case 7 : row =2; cloumn =0; break;
case 8 : row =2; cloumn =1; break;
case 9 : row =2; cloumn =2; break;

    
default:
    cout<<"Invalid choice\n";
    break;

}
if (turn == 'X')
{
    boared[row][cloumn]= 'X';
    turn = '0';

}
else if (turn == '0')
{
    boared[row][cloumn]= '0';
    turn = 'X';

}

}

// check which player win to over the game 

bool gameover()
{

    for (int i = 0; i < 3; i++) // for rows
    {
        /* code */
        if (boared[i][0] == boared[i][1] && boared[i][0] == boared[i][2] || boared[0][i] == boared[1][i] && boared[0][i] == boared[2][i])
       { 
        //cout<<"Row wise Game over :"<<endl;
        return false;
       }
           
    }

    if (boared [0][0] == boared [1][1] && boared[0][0] == boared[2][2] || boared[0][2] == boared[1][1] && boared[0][2] == boared[2][0])
    return false;

    // if there is any box not filled
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) // for rows
    {
        if (boared[i][j] != 'X' && boared[i][j] != '0')
       { 
        cout<<"Empty cell exist :"<<endl;
        return true;
       }
           
    }
    // Draw 
    draw = true;
    return false ;

}
//end of game over 


int main(){
 
    while(gameover())
{

display_board();
player_turns();
display_board();
gameover();


}
if (turn == 'X' && draw == false)
{
    cout<<"Palyer2 [X] Wins !! Congralulations"<<endl;
}
else if  (turn == '0' && draw == false)
{
    cout<<"Palyer1 [0] Wins !! Congralulations"<<endl;
}
else 
cout<<"GAME DRAW!!\n";
}
