// This is a header file!!
// We are copying all the data from the class.

#include <iostream>
using namespace std;

class Pokemon {
    private:
        // Data members (attributes)
        int id_;
        string name_;
        int hp_;
        int attack_;
        int defense_;
        int speed_;
        string type_;

        // The underscore under the name is a convention that tells programmers that these
        // are private variables and cannot be used outside of the class.
    
    public:
        // Methods (interface)
        void setId(int id);
        void setAttack(int attack);
        void setDefense(int defense);
        void setSpeed(int speed);
        void setName(string name);
        void setHP(int hp);
        void setType(string type);
        
        string getName();
        int getHP();
        string getType();

        Pokemon();
      
};
