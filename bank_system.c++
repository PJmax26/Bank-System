#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

float showBalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{

    float balance = 0;
    int choice = 0;
    ;

    do
    {
        cout << "Enter your choice: " << endl;
        cout << "1. Show current balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting";
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}

float showBalance(float balance)
{
    cout << "Your balance is $" << balance << endl;
    return 0;
}
float deposit()
{

    float amount = 0;

    cout << "How much would you like to deposit: ";
    cin >> amount;

    if (amount < 0)
    {
        cout << "This is not a valid amount" << endl;
        return 0;
    }

    else
    {
        return amount;
    }
}
float withdraw(float balance)
{

    float amount = 0;

    cout << "How much would you like to withdraw: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "You do not have enough money to withdraw" << endl;
        return 0;
    }

    else
    {
        return amount;
    }
}