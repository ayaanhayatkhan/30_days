#include <iostream>
using namespace std;

char bee[3][3] = {{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}};

int option;
char turn = 'X';
int row, column;
bool draw = false;

void display_bee()
{
    cout << "\n\tT I C - T A C - T O E\n\n";
    cout << "\tPlayer 1 [X]\n\tPlayer 2 [0]\n\n";

    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bee[0][0] << "  |  " << bee[0][1] << "  |  " << bee[0][2] << "\n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bee[1][0] << "  |  " << bee[1][1] << "  |  " << bee[1][2] << "\n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bee[2][0] << "  |  " << bee[2][1] << "  |  " << bee[2][2] << "\n";
    cout << "\t\t     |     |     \n";
}

void player_turns()
{
    if (turn == 'X')
        cout << "\nPlayer 1 [X] Turn: ";
    else
        cout << "\nPlayer 2 [0] Turn: ";

    cin >> option;

    switch (option)
    {
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;

    default:
        cout << "Invalid Choice!\n";
        player_turns();
        return;
    }

    // Check if the selected cell is empty
    if (bee[row][column] != 'X' && bee[row][column] != '0')
    {
        bee[row][column] = turn;

        if (turn == 'X')
            turn = '0';
        else
            turn = 'X';
    }
    else
    {
        cout << "Box already occupied! Try again.\n";
        player_turns();
    }
}

bool gameover()
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((bee[i][0] == bee[i][1] && bee[i][1] == bee[i][2]) ||(bee[0][i] == bee[1][i] && bee[1][i] == bee[2][i]))
        {
            return false;
        }
    }

    // Check diagonals
    if ((bee[0][0] == bee[1][1] && bee[1][1] == bee[2][2]) ||(bee[0][2] == bee[1][1] && bee[1][1] == bee[2][0]))
    {
        return false;
    }

    // Check for empty cells
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (bee[i][j] != 'X' && bee[i][j] != '0')
            {
                return true;
            }
        }
    }

    draw = true;
    return false;
}

int main()
{
    while (gameover())
    {
        display_bee();
        player_turns();
    }

    display_bee();

    if (draw == false)
    {
        if (turn == 'X')
            cout << "\nPlayer 2 [0] Wins! Congratulations!\n";
        else
            cout << "\nPlayer 1 [X] Wins! Congratulations!\n";
    }
    else
    {
        cout << "\nGame Draw!\n";
    }

    return 0;
}