#include <iostream>
#include <cmath>
// make sure file names end in .cpp, or else the #include <iostream> code will produce an error

using namespace std;
int main() { 
    // Main is default function for C++ compiler
    
    int celsius = 25;
    // Creates a new variable of the intiger type, named "celsius", and sets this variable equal to 25
    // Cannot use reserved words as variables, such as "int" or "double"
    // Cannot start a variable with a number, have a space, or use special characters, except underscores.

    int humidity;

    int celsius_value;

    // Creates a new variable, but does not initialise it.

    cout << "Please insert a celsius value ";

    // Sends an initial message to the user, requesting an input.

    cin >> celsius_value;

    // cin takes input from the user, >> is an extraction, that places the user provided value into the variable following the >>    

    cout << "The value you entered is : " << celsius_value;

    // cout displays the provided message to the user.

  
  
    // F = 9/5*Celsius+32

    double farenheit;
    farenheit = 9.0/5.0 * celsius_value + 32;    

    cout << "The farenheit value is : " << farenheit << endl;

    //endl ends line in teh terminal

    const double CONSTANT = 16.3;
    // Creates a variable that cannot be changed later. Trying to reassign a value to this variable will cause a system error.
    // const (variable type) (variable name)
    // Typically denoted with all capital letters, to show programmer that this is an unchangeable variable.

    return 0; 
    // End of function
} 
// Curly braces enclose a block of code

/* g++ is the name of the compiler for the code
 -o is a specific instrction
 insert name of the code you want to execute
 combined, this is g++ -o (desired name of .exe file) Test.cpp
 use .\(.exe file name) in terminal to run the .exe file. */