#include <iostream>
using namespace std;

int main (){

    string input_password;
    int attempts = 3;
    string secret_password = "J3HZ76G918-3HAJ4";

    do 
    {

        cout << "Enter password: ";
        cin >> input_password;

        if (secret_password == input_password)
        {
            cout << "Unlocked successfully." << endl;
            break;
            // Breaks can be used to exit loops prematurely, like if the correct password is gotten before 
            // the user runs out of attempts.
        }
        else
        {
            attempts--;
            cout << "Failed attempt. You have " << attempts << " attempts left." << endl;
        }

    } while (attempts > 0 && input_password != secret_password);

    return 0;
}