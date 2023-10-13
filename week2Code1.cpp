#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x = 5;
    int y = 3;
   
    cout << x / y << endl;
    cout << x % y << endl;

    // Convert seconds into minutes and seconds

    cout << "Converting seconds into minutes and seconds." << endl;

    int seconds = 200;
    int minutes;

    // Minutes = seconds / 60
    // Seconds = seconds % 60

    minutes = seconds / 60;
    seconds = seconds % 60;

    cout << "Seconds converted into minutes and seconds is: " << minutes << " minute(s) and " << seconds << " second(s)." << endl;

    bool isClassDone = false; // Any non-zero value will result in a value of "true".
    cout << isClassDone << endl;


    return 0;
}