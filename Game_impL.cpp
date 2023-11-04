#include "Game.h"


// Now that we have implementation in this function, we can delete it from the game.h file.
// Syntax is:   return_type Class_Name::functionName(Function Parameters)
/*
    Colons are scope resolution: Saying:
    This function is a part of this class.
*/
void Pokemon::setId(int id)
        {
            id_ = id;
        }

void Pokemon::setAttack(int attack)
        {
            attack_ = attack;
        }

void Pokemon::setDefense(int defense)
        {
            defense_ = defense;
        }

void Pokemon::setSpeed(int speed)
        {
            speed_ = speed;
        }

void Pokemon::setName(string name)
        {
            name_ = name;
        }

void Pokemon::setHP(int hp)
        {
            hp_ = hp;
        }

void Pokemon::setType(string type)
        {
            type_ = type;
        }
        

string Pokemon::getName()
        {
            return name_;
        }

int Pokemon::getHP()
        {
            return hp_;
        }

string Pokemon::getType()
        {
            return type_;
        }

// This is a default constructor
Pokemon::Pokemon()
        {
            name_ = "";
            id_ = 1;
            hp_ = 5;
            attack_ = 5;
            defense_ = 7;
            type_ = "Normal";
            speed_ = 3;
        }

Pokemon::Pokemon(string name, int id)
        {
            name_ = name;
            id_ = id;
        }

Pokemon::Pokemon(string name, int id, int hp, int attack, int defense, int speed, string type)
        {
            name_ = name;
            id_ = id;
            hp_ = hp;
            attack_ = attack;
            defense_ = defense;
            speed_ = speed;
            type_ = type;
        }

void Pokemon::display()
        {
            cout << "Name: " << name_ << endl;
            cout << "ID: " << id_ << endl;
        }