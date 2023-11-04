#include <iostream>

#include "trainer.h"

using namespace std;

// -------------------------------------[Constructors]-------------------------------------------
Trainer::Trainer()
{
    name_ = "Player 1";
    pokemon_.clear();
}

Trainer::Trainer(string name)
{
    name_ = name;
    pokemon_.clear();
}

Trainer::Trainer(string name, vector<Pokemon> pokemon)
{
    name_ = name;
    pokemon_ = pokemon;
}

//--------------------------------------[Setters]------------------------------------------------
void Trainer::setName(string name)
{
    name_ = name;
}
//--------------------------------------[Getters]------------------------------------------------
string Trainer::getName()
{
    return name_;
}
//--------------------------------------[Interfaces]---------------------------------------------
void Trainer::rest()
{
    return;
}