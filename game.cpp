#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

char getUserchioice();
char getComputerchoice();
void showChoice(char choice);
void choosewinner(char player, char computer);

int main()
{
    char player;
    char computer;
    player = getUserchioice();
    cout << "Your Choice:\n";
    showChoice(player);
    cout << endl;
    computer = getComputerchoice();
    cout << "Computer's Choice:\n";
    showChoice(computer);
    cout << endl;

    choosewinner(player, computer);
    return 0;
}

char getUserchioice()
{
    char player;

    cout << " ROCK PAPERS SCISSORS GAME\n";
    cout << "***************************\n";
    do
    {
        cout << "Choose one of the following\n";
        cout << "R for Rock\n";
        cout << "S for scissors\n";
        cout << "P for Paper\n";
        cin >> player;
        player = toupper(player);

    } while (player != 'R' && player != 'S' && player != 'P');

    return player;
}

char getComputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'R';
    case 2:
        return 'S';
    case 3:
        return 'P';
    }
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'R':
        cout << "Rock";
        break;
    case 'S':
        cout << "Scissors";
        break;
    case 'P':
        cout << "Paper";
        break;
    }
}
void choosewinner(char player, char computer)
{
    switch (player)
    {
    case 'R':
        if (computer == 'R')
        {
            cout << "It's a tie";
        }
        else if (computer == 'P')
        {
            cout << "You lose";
        }
        else
        {
            cout << "You win!";
        }
        break;
    case 'S':
        if (computer == 'S')
        {
            cout << "It's a tie";
        }
        else if (computer == 'R')
        {
            cout << "You lose";
        }
        else
        {
            cout << "You win!";
        }
        break;
    case 'P':
        if (computer == 'P')
        {
            cout << "It's a tie";
        }
        else if (computer == 'S')
        {
            cout << "You lose";
        }
        else
        {
            cout << "You win!";
        }
        break;
    }
}