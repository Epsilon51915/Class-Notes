#include <iostream>


using namespace std;

void printEvenOrOdd(int number){

    int remainder = number % 2;

    // New switch function

    switch (remainder) 
    {
        case 0: 
            cout << "This is an even number." << endl;
            break;
        case 1:
            cout << "This is an odd number." << endl;
            break;
    }
}

int main(){

    int number;

    number = 101;

    cout << "Enter a number" << endl;
    cin >> number;

    // The logic for the even or odd would be directly down here

    printEvenOrOdd(number);

    return 0;
}