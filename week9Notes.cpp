#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Example
{
    string name;
    string ID;
    int factor;
    bool what_is_going_on = true;
};

struct Contact
{
    string name;
    string email;
};

void printStructure(Contact contact1)
{
    cout << contact1.name << " - " << contact1.email << endl;
}

int main(){

    /*
        Day One:
        Structures:
        Groups all related variables together
        A struct can be composed of data of different data types.

        Syntax is:

        struct <struct name>
        {
            ~ Data ~
        };

        Can have a structure inside a structure

        struct secondStruct
        {
            ~ Data ~
        };

        struct firstStruct
        {

            secondStruct extraStuff;
            
            (Struct name followed by variable name.)
        };

        Declare structs OUTSIDE functions.
        If a struct is declared inside a function, it can only be used in that function.

        Using structs has 2 parts:
        Define blueprint - Provide data members that need to be grouped
        Provide an instance of the variables.


        firstStructure now becomes a new data type that you can assign to a variable,
        similar to an int or a string
        i.e: firstStruct this_is_my_name

    */

    cout << "Day One: " << endl << endl;

    Contact contact1;

    /*
        Display variables using dot notation.
    */

    cout << contact1.name << " - " << contact1.email << endl;

    contact1.name = "A really weird name.";
    contact1.email = "fake-email@fakeness.com";

    cout << contact1.name << " - " << contact1.email << endl;

    // It may be useful to create a function now to repeat the logic that prints
    // the contact name and email, as it is becoming repetitive in our program.

    printStructure(contact1);
    // Now we can use this function to print the information instead of
    // rewriting the entire code line.

    cout << endl;

    /*
        Structs will always be passed by value, never passed by reference.
    */
    
    Contact contact2 = {"A second really weird name", "Even-faker-email@fakeness.com"};

    printStructure(contact2);

    /*
        If you wish to skip initialising a variable (i.e there are 4 variables but
        you only wish to implement 3,) use an empty space or quotes.

        You can assign a structure variable to another structure variable.
        EX: In the example above, we could have contact1 = contact2
        which is valid and will copy all of the user data for contact1 over
        to contact2

        This is also equal to
        contact2.name = contact1.name
        contact2.email = contact1.email

        However, you cannot do contact2 == contact1. (Comparisons)
        You must be more specific. Which element SPECIFICALLY do you want to compare?
        (Name, email, etc.)

        OOP (Object Oriented Programming)
        Encapsulation
        Extraction
        Chapter 9 in book!!
    */

   cout << endl << endl << "DAY TWO" << endl;

    /*
        Object Oriented Programming

        Exam 2 covers:
        Loops
        File Streams
        Strings
        Arrays
        Vectors

        Sometimes there are too many functions in the program, all taking different parameters,
        making programming extremely confusing.
        This also goes for variables, which we can use structs to group related variables.
        OOP Is a programming style where objects are modeled into self contained units.
        We use a keyword "Class" to create a blueprint for an object.
        Classes are very similar to structures, but also allow you to interact with your object.
        
        (Example code in week9Game.cpp)
    */

   /*
        Day 3
        Splitting programs into header fies, implementation files, and driver files.
        A constructor is a special memeber function that initialises the data members of an object
        This functions is called when the object is created for the first time.
        class Pokemon
        {
            private:
                string name_;
                int hp_;
            public:
                Pokemon()
                {
                    name_ = "";
                    hp_ = 0;
                }
        }
        Name of the constructor function is the same as the name of the class
        No return type
        No input parameters (though it can if you choose.)
        Mostly used to set the members of the object.
   */
    cout << endl << endl << "DAY 3" << endl;

    

    return 0;
}