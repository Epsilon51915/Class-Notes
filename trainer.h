#ifndef TRAINER_H
#define TRAINER_H
#include <string>
#include <vector>
#include "Game.h"
using namespace std;

class Trainer{
    private:
        string name_;
        vector<Pokemon> pokemon_;
        // struct Badge badge;
    public:

    // -------------------------------[Constructors]------------------------------------
        Trainer();

        Trainer(string, vector<Pokemon>);

        Trainer(string);

        Trainer(vector<Pokemon>);

    // -------------------------------[Setters]-----------------------------------------
        void setName(string);
    
    // -------------------------------[Getters]-----------------------------------------
        string getName();

    // -------------------------------[Interfaces]--------------------------------------
        void rest(); // Rests pokemon and returns pokemon vector with full HP
        // No parameters are needed, because this function already has access to our Pokemon vector

        void capturePokemon(Pokemon);

        void combat(Trainer);

};
#endif