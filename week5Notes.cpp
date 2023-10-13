#include <iostream>
#include <cassert>

using namespace std;
int main(){

/*
    Loops: 
        Exam at 6:30 pm on October 5th.
        While loop
        Do while loop
        For loop
        3 parts of a loop
        (Variable initialisation)
        (A condition)
        (Loop Body)
*/

    // The While Loop
    // Variable
    int i = 1;
    
    cout << "While Loop: " << endl << endl;

    // Loop Initialisation
    while (i <= 10)
    {
        // Loop Body
        cout << i << endl;
        i++;
    }

    cout << endl << "Validating input" << endl;

    double input = 0;

   
    while (input <= 0)
    {
        cout << "Input a number: ";
        cin >> input;

        if (input <= 0)
        {
            cout << "Invalid input." << endl;
        }
        else   
            cout << "Your number is: " << input << endl;
    }
    
/*
    Day Two:
    Floating Point Comparisons
    Pre/Post increment/decrement operators
    For Loops
*/

    float a = 1.1;
    float b = 2.2;
    float sum = a + b;
    cout << "Sum: " << sum << endl;
    if (sum == 3.3)
    {
        cout << "Equal" << endl;
    }
        cout << "Not Equal" << endl;


    int x = 5;
    int y = 5;
    
    // X is incremented by 1, then the result is assigned to the variable.
    int result_pre_increment = ++x;

    // Y is assigned to the variable, then Y is incremented by 1.
    int result_post_increment = y++;

    cout << "Pre-increment result: " << result_pre_increment << endl;
    cout << "Post-increment result: " << result_post_increment << endl;


    int c = 10;
    int d = 10;

    // C is decremented by 1, then the value is assigned to the variable.
    int result_pre_decrement = --c;

    // D is assigned to a variable, then D is decremented by 1.
    int result_post_decrement = d--;

    /*
        for (counter = 1; counter <= 10; counter++)
        initialises variable, declares what the variable must be at for the loop to end,
        and how much the variable will increment per loop.
    */

    return 0;
}