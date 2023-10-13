#include <iostream>
#include <cmath>

using namespace std;

int main() {

/* Arithmetic Operations: 
    Increment / Decrement (++ and --)
   
        i.e:  int i = 5;
              i ++; (Adds by one.)
            or
              int d = 13;
              d --; (Subtracts by one.)
    
    Modulus (%)

        i.e:  int m = 13
               m % 2 (Divides m by 2, only reads the remainder.)
               cout << "1" << endl;  (Displays only the remainder of the above operation.)
        (Likewise, / while using int variables only gives the whole divisors.)

    Combining arithmetic and assignment.

        i.e: 
              count +=2 
            is the same as
              count = count + 2

              total += cans * VAN_VOLUME
            is the same as
              total = total + cans * CAN_VOLUME

              total *= 2
            is the same as
              total = total * 2

    Unintended Intiger Division:
        7 / 3 = 2, not 2.5
    However...
        7.0 / 4.0, 7.0 / 4, and 7 / 4.0 all yield 1.75
    If at least one of the operands is a double, then the result will be a double. If not, the result will be an intiger.

    Unbalanced Parentheses:
        ((b * b - 4 * a * c) / (2 * a)
            More ( than ), causing an imbalance.
        
    Type Casting:
        Conversion from one data type to another.

        int x = 25;
        int y = 10;
        cout << x / static_cast<double>(y);
        using static_cast<new_data_type>(variable_to_convert) changes the variable in parentheses into the data type in arrow brackets
*/

int celsius;

cout << "What is the celsius value?" << endl;

cin >> celsius;

cout << "The celsius value you entered is: " << celsius << endl;

double fahrenheit;

fahrenheit = (9.0/5.0) * celsius + 32;

cout << "The fahrenheit value is: " << fahrenheit << endl;

/*
    Boolean Variable and Operators:

    Stores a condition "true" or "false"

    bool time = true;

*/



// DAY 2

/*
  Boolean Variables and operations:

    Relational Operators: 
      > (Greater than)
      < (Less than)
      >= (Greater than or equal to)
      <= (Less than or equal to)
      == (Tests for equality)
      != (Not equal to)
      Note: == is not the same as =. = is the assignment operation, assigning a value to a variable.
            == is testing if some variable equals some value.
*/


cout << "----------Note Code from day two----------" << endl;

int x = 5;

bool isXGreaterThan5 = (x > 5);

cout << isXGreaterThan5 << endl;
// If x > 5, this will output the number 1, denoting "true". Else, this will output the number 0, denoting "false"

bool isXGreaterThanOrEqualTo5 = ( x >= 5);

cout << isXGreaterThanOrEqualTo5 << endl;

string str1 = "Hello";
string str2 = "World";

bool strComparison = (str1 < str2);

cout << strComparison << endl;

string str3 = "hello";
string str4 = "World";

bool strComparison2 = (str3 < str4);

cout << strComparison2 << endl;

// Strings beginning with capital letters are ALWAYS greater than strings beginning with lowercase letters.
// Between "Hello" and "World", because H comes before W, Hello < World.


/*
    The IF Statement

    Implements a decision.
      When a condition is fufilled, one block of statements is executed.
      If the condition is not fufilled, a different block of statements is executed.

      Syntax:

      if (condition) DO NOT PUT SEMICOLON AFTER IF STATEMENT
      {
        statement 1;
      }
      else
      {
        statement 2;
      }
      Braces and the else statement are not required, but help prevent errors and keep code neat.
*/

int score;

score = 86;

if (score >= 90)
{
  cout << "Your grade is A" << endl;
}
else if (score >= 80 && score < 90)
{
  cout << "Your grade is a B" << endl;
}
else if (score >= 70 && score < 80)
{
  cout << "Your grade is a C" << endl;
}
else 
{
  cout << "Your grade is an F" << endl;
}

cout << "Now, input a score." << endl;
int new_score;
cin >> new_score;

if (new_score >= 90)
{
  cout << "Your new grade is A" << endl;
}
else if (new_score >= 80 && new_score < 90)
{
  cout << "Your new grade is a B" << endl;
}
else if (new_score >= 70 && new_score < 80)
{
  cout << "Your new grade is a C" << endl;
}
else 
{
  cout << "Your new grade is an F" << endl;
}

// OR

char grade;
// char data types may oly hold one letter, and use single quotes ('') and not double quotes ("")
if (new_score >= 90)
{
  grade = 'A';
}
else if (new_score >= 80 && new_score < 90)
{
  grade = 'B';
}
else if (new_score >= 70 && new_score < 80)
{
  grade = 'C';
}
else 
{
  grade = 'F';
}

cout << "Your score = " << new_score << endl;
cout << "Your grade = " << grade << endl;

/*
  Logical Operators:
  And (&&)
  Requires both statements to be true in order to execute.
  I.E: if (x > 0 && x < 10)
  Will only execute if  0 < x < 10
  NOTE: DO N O T WRITE AS 0 < x < 10
  This will compile as "Is x > 0?" And if true, it will output 1, and then compare "Is 1 < 10?"
  Instead, ALWAYS use the &&. 0 < x < 10 == x > 0 && x < 10.

  Or (||)

  Not (!)
  Flips a value from true to false, or false to true.
  !(x > 0)
  If x > 0, value will be "false" bacause of the not operator.
*/
    return 0;
}