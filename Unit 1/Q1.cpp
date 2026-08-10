// Bank Account Program

#include <iostream>
using namespace std;

class BankAccount
{
private:
    long int accountNo = 1234567;
    float balance = 2000;

public:
    void withdraw();
    void deposite();
    void display();
};

void BankAccount ::withdraw()
{
    if(balance == 0)
    {
        system("clear");
        cout<<"***** No Amount Available To Withdraw *****\n\n";
        return;
    }
    int amount;
    do
    {
        cout << "Enter Amount To Withdraw: ";
        cin >> amount;

        if (amount > balance || amount <= 0)
        {
            system("clear");
            cout << "***** Invalid Amount *****\n\n";
        }
    } while (amount > balance || amount <= 0);

    balance -= amount;
    system("clear");
    cout << "***** Amount Withdrawn Successfully *****\n\n";
}

void BankAccount ::deposite()
{
    int amount;
    do
    {
        cout << "Enter Amount To Deposite: ";
        cin >> amount;

        if (amount <= 0)
        {
            system("clear");
            cout << "***** Amount Should Be Greater Than 0 *****\n\n";
        }
    } while (amount <= 0);
    balance += amount;
    system("clear");
    cout << "***** Amount Deposited Successfully *****\n\n";
}

void BankAccount ::display()
{
    cout << "***** Bank Account Details *****\n\n"
         << "Account No: " << accountNo
         << "\nBalance: " << balance;

    cout << "\n\n";
}

int main()
{
    system("clear");
    BankAccount account;
    int choice;
    do
    {
        cout << "-------------------------------------------\n";
        cout << "===== Bank Operations =====\n\n";
        cout << "1. Withdraw Amount \n2. Deposite Amount \n3. Display Details \n4. Exit....\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("clear");
            account.withdraw();
            break;

        case 2:
            system("clear");
            account.deposite();
            break;

        case 3:
            system("clear");
            account.display();
            break;

        case 4:
            system("clear");
            cout << "***** Exiting.... *****\n\n";
            break;

        default:
            system("clear");
            cout << "***** Invalid Choice *****\n\n";
            break;
        }

    } while (choice != 4);
}
