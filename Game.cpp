// If your header files contain other header files or namespaces that you wish to use,
// you can delete these header files from your driver file.

#include "Game.h"
#include <vector>

// #include "trainer.h"

// I deleted #include <iostream> and using namespace std, but my program still works perfectly well
// because these are both used in the week9Game.h file that I included above.

void displayPokemon(Pokemon pokemons[], int size)
{
    for(int i = 0; i < size; i++)
    {
        pokemons[i].display();
    }
}

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

    cyndaquil.setType("Fire");

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

   Pokemon pokemons[2];
   pokemons[0] = totodile;
   pokemons[1] = cyndaquil;

   cout << pokemons[0].getName() << endl;
   cout << pokemons[1].getType() << endl;

   displayPokemon(pokemons, 2);

    int choice;

    vector<Pokemon> pokemon;

    // Load a file that has all the Pokemon data
    cout << "Choose a starter Pokemon" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cin >> choice;

    // Find the pokemon that the user picked and find where that pokemon appears in our file
    while(choice != 1)
    {
        
    }
    return 0;
}