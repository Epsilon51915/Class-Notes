#include <iostream>

using namespace std;

/*
    Program to build new FIFA game.
*/

int main(){
    cout << endl << endl;
    cout << "FIFE 2023" << endl;

    int team_type; // National team, club team (???)
    char team; // Team Identifier

    cout << "1. National Team" << endl;
    cout << "2. Club Team" << endl << endl;
    cout << "Select your team type: (select a number): "; 
    cin >> team_type;
    cout << endl;

    if (team_type == 1)
    {
        // The user has selected a national team.
        cout << "a. Argentina" << endl;
        cout << "b. Brazil" << endl;
        cout << "c. USA" << endl;

        cout << "Make a choice: ";
        cin >> team;

        if (team == 'a' || team == 'A')
        {
            cout << "You chose Argentina!!" << endl;
        }
        else if (team == 'b' || team == 'B')
        {
            cout << "You chose Brazil!!" << endl;
        }
        else if (team == 'c' || team == 'C')
        {
            cout << "You chose USA!!" << endl;
        }
        else 
        cout << "Please make a valid selection." << endl;
    }
    else if (team_type == 2)
    {
        // The user has selected a club team.
        cout << "a. Manchster United" << endl;
        cout << "b. Liverpool" << endl;
        cout << "c. Chicago Fire" << endl;

        cout << "Make a choice: ";
        cin >> team;
    }
    else
    {
        cout << "Please input a valid selection." << endl;
    }
    return 0;
}