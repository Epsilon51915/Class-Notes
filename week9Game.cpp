// If your header files contain other header files or namespaces that you wish to use,
// you can delete these header files from your driver file.

#include "week9Game.h"

// #include "trainer.h"

// I deleted #include <iostream> and using namespace std, but my program still works perfectly well
// because these are both used in the week9Game.h file that I included above.
int main(){

    Pokemon totodile;

    // cout << totodile.name << endl;
    /*
        .name attribute is encapsulated in the "private" section of the Pokemon class,
        meaning it cannot be used in the main or other functions not in the class.
    */

   // Sets the name variable of our totodile object to "Totodile"
   totodile.setName("Totodile");

   // Displays the name
   cout << totodile.getName() << endl;

    Pokemon cyndaquil = totodile; // This is allowed, you can directly copy objects.

    cout << cyndaquil.getName() << endl;
    // But this says cyndaquil is a Totodile which doesn't make sense so I'm going to fix that.

    cyndaquil.setName("Cyndaquil");
    cout << cyndaquil.getName() << endl;

    /*
        These functions are called "Setters," which set the value of a private variable,
        and "Getters," which allow you to use these variables outside of the class.

        Encapuslation: Objects provide a public interface, while hiding the inner variables.
    */


    /*
        Day 2(3?)
        Order of public and private in a class does not matter.
        Each Pokemon object has it's own copy of every data members.
        Creating a class does not use up any memory, but creating an object
        of a class type does.
        When you drive a car, you don't need to know how everything works, just what
        controls you need to use.
        Similarly, when a programmer uses objects, they don't care about how it all works, only
        about how the variables interact wtih each other (interfaces). A lot of the details
        about implementation are abstracted away.


        When compiling, you must use g++ (relevent flags,) week9Game.cpp week9Game_impL.cpp
        this tells the compiler where the implementation for week9Game.h lies.
        DO NOT DO #include "week9Game_impL.cpp"
    */
    return 0;
}