#include <iostream>

using namespace std;

void showBalance(double balance){
    cout << "Your balance: " << balance << endl;
}

double withdrawMoney(double balance){
    double withdraw;
    cout << "How much would you like to withdraw: ";
    cin >> withdraw;
    // We must check that withdraw < balance.

    if (balance < withdraw)
    {
        cout << "You do not have sufficient funds." << endl;
        return balance;
    }
    balance = balance - withdraw;
    cout << "You withdrew: " << withdraw << " dollars." << endl;
    return balance;
}

double depositMoney(double balance){
    double deposit;
    cout << "How much would you like to deposit: ";
    cin >> deposit;
    balance = balance + deposit;
    cout << "You deposited: " << deposit << " dollars." << endl;
    return balance;
    
}

int main(){

    double balance = 500;
    int choice;

    do
    {
    cout << "------------------------------------------" << endl;
    cout << "My banking account" << endl;
    cout << "------------------------------------------" << endl << endl;

    cout << "1. Check your balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl << endl << endl;

    int choice;
    cout << "Select an option: ";
    cin >> choice;

    switch (choice) {

        case 1:
            // cout << "Your balance is: " << balance << endl;
            showBalance(balance);
            break;

        case 2:
            balance = withdrawMoney(balance);
            break;

        case 3:
            balance = depositMoney(balance);
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;
    }
    } while (choice != 4);

    return 0;
}