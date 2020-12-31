#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int i,guess,comp;
    cout << "\n Welcome to the game of Higher or Lower" << endl;
    cout << "In this game you need to guess a number between 1 and 50";
    cout << "\nBut you will only get 5 turns to reach towards the correct number";
    srand(time(0));
    comp=rand() % 50 + 1;
    for(i=1;i<6;i++)
    {
        if(i==1)
        {
            cout << "\n Choose a number : ";
            cin >> guess;
            cout<< "\n"<<comp;

        }
        else
        {
            if(guess==comp)
            {
                cout<< "\nHooray! Player Wins.";
                break;
            }
            else if(guess<comp)
            {
                cout<< "\nYour guess is lower than right number, Turns left : "<< (6-i);
                cout<< "\nTry again, entering a number higher than previous : ";
                cin>>guess;
                cout<< "\n";
            }
            else if(guess>comp)
            {
                cout<< "\nYour guess is higher than right number, Turns left : "<< (6-i);
                cout<< "\nTry again, entering a number lower than previous : ";
                cin>>guess;
                cout<< "\n";
            }
            else
            {
                cout<< "Invalid Response. Chances Left : "<< (6-i);
            }
        }
    }
        if(guess==comp)
        {
            cout<< "Player Wins";
        }
        else if(guess!=comp)
        {
            cout<< "Computer Wins";
        }
    return 0;
}
