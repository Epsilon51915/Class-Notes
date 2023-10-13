#include <iostream>

using namespace std;


bool isMyBirthday (int, int, int, int);
// Prototype for the isMyBirthday function, allowing us to write the actual function BELOW the main.

double costOfHouse (double, bool, int, string);
// Prototype for the costOfHouse function.

void volumeOfCylinder (double, double);
// Protoype for void function.

int main(){

/*
    Functions: Declaration and Definitions

    Function definition must ALWAYS appear before it is called in the main function.
    Function prototypes may be used to circumvent this, function CAN be below main if a 
    function prototype is used above the main.

    Ex:

    int getSum (int, int);

    int main(){
        int a = 5, b = 9;
        int sum = getSum(a, b);

        return 0;
    }

    int getSum(int a, int b){
        int sum = a + b;
        return sum;
    }


    ** Reminder: Do NOT put functions inside main. **

*/
    int year;
    int birth_month;
    int birth_day;
    int day;
    int month;

    string str = "Chambanger";

    cout << "Value of str = " << str << endl;

    string empty_string;
    cout <<"Empty string :" << empty_string << endl;

    string name = "";
    cout << "Enter a name: ";
    cin >> name;
    cout << "Name entered = " << name << endl;

    cout << "Enter name again (with spaces!) : ";
    getline (cin, name);
    cout << "Name entered = " << name << endl;

    /*
        str.find(substr_to_find)
        str.replace(position, length, string_to_replace)
        str.substr(start, length)
    */ 

   string greeting = "Hello, World!";
   string sbstr = greeting.substr(0,2);
        // Will output "He"

    return 0;
}

bool isMyBirthday(int birth_month, int month, int birth_day, int day){

    bool is_my_birthday;
    return is_my_birthday;
}