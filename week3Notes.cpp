#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    /*
        NOTES:
        Boolean Operators:
            Logical Operators
            &&,   ||, !
            (and, or, not)

            0 < 200 && 200 < 100 
            Entire line is read as false, because 200 is not less than 100.

            0 < 200 || 200 < 100
            Line is read as true, as only one condition must be true.

            0 < 200 || 100 < 200
            Again, line is true, because at LEAST one of the conditions is true

            0 < 200 < 100
            Interestingly enough, this line is read as true. The compiler reads "is 0 less than 200?"
            which is true, which sets the value of 0 < 200 to 1, the default value for true.
            Then the compiler asks "Is 1 < 100?" Because 0 < 200 has been replaced with 1. Thus, the entire
            statement will be considered true.

            !(0 < 200)
            This will be false. The NOT operator takes the opposite of the truth value in the parenthesis.
            Thus, 0 < 200 is true, but the NOT operator makes the output read "false."

            -10 && 10 > 0
            -10 is read as true. Because there is no relation, any non-zero number inputted is read as true.
            Then, 10 > 0 is read as true, so the whole statement is true.

            0 < x && x < 100 || x == -1
            (!0 < x && x < 100) || x == -1

    */


   int x = 5;

   cout << endl; // Better readability
   cout << "Illustration of setw in C++ using the examples of relational and logical operators." << endl;
   /*
    Set WIdth - setw(number)
    ** Here we use setw(number) to set the width of the output
    ** Replace the number with a choice of your own and see the spaces it prints.
   */

   // Lets use setw to pring some boolean and logical operators and re-evaluate their results.
   cout << setw(30) << "Expression" << setw(20) << "Truth Value" << endl << endl;
   cout << setw(30) << "0 < 200 && 200 < 100" << setw(20) << (0 < 200 && 200 < 100) << endl;
   cout << setw(30) << "0 < 200 || 200 < 100" << setw(20) << (0 < 200 || 200 < 100) << endl;
   // etc. setw manipulator is used to align cout statements.
   
   /*
    Set Precision = setprecision
    ** Here we use setprecision(number) to set the number of decimals we want after the decimal point
            for a float.
    ** Default value is 6.
   */
  cout << endl << endl;

  cout << "Illustration of fixed and setprecision numbers in C++" << endl;
  double y = 12345678.12345678;
  cout << y << endl;
  cout << fixed; 
  // Tells compiler to print all floating point numbers using decimal notation
  // Applies to ALL decimal numbers printed after this line, regardless of whether they're prnted with "fixed" or not
  
  cout << y << endl;
  // Will not print entire to 6 digits after the decimal.
  
  cout << setprecision(8) << y << endl;
  cout << endl << endl;


 /*
  Functions: 
  Composition:
    Return Type/Output  Name of function(argument(s) (aka input(s))) 
      ** Name should be in camelCase
      Body of the function (aka definition of function)

     Rice cookRice(water, rice, salt)
      *Ex. of function

     
      Parts of a function:
      Function Name - Unique name provided to the function
      Function Parameters - Input(s) to a given function
      Function Definition - Sequence of instructions (code) that the function does
      Function Return Value - The output we get from a function

      
      Ex.
      int getPriceOfCar(string make, char model, int year, double mileageDriven)
      {
        int price_of_car = 0;

        **Insert logic to generate price of car here**

        return price_of_car;
      }

      Because the function is defined as an "int" function, its output will be an intiger value.     
 */


/*
      DAY THREE
      Flow of execution during function call:
      Main function creates a variable with an initial value.
      Calls the function and provides the variable as an argument (input).
      Execution of the main function stops, while our called function begins.
      Logic is executed and a value is returned to main.
      Main continues execution.  

      
*/
    return 0;
}