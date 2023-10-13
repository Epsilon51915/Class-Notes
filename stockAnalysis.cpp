#include <iostream>
using namespace std;

int main(){

    float stock_price;

    float highest = -1;
    float lowest = 10;

    // Using "true" as the condition creates an infinite while loop
    while(true)
    {
        cout << "Enter stock price: ";
        cin >> stock_price;

        if(cin.fail())
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue; // Restarts the loop from the beginning.
        }

        // Logic for highest/lowest prices of the day
        if (stock_price > highest)
        {
            highest = stock_price;
        }
        else if (stock_price < lowest)
        {
            lowest = stock_price;
        }
        cout << "Highest: " << highest << endl;
        cout << "Lowest: " << lowest << endl;
    }

    return 0;
}