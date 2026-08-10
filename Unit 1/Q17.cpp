// Real Life Example With Constructor and destructor

#include <iostream>
using namespace std;

class BankAccount
{
private:
    long int accNo;
    float balance;

public:
    BankAccount()
    {
        cout << "\nInitalizing Members Through Constructor";
        accNo = 123456789;
        balance = 2000;
    }

    void withdraw(float amt)
    {
        cout << "\nAmount Withdrawn Successfully: " << amt;
        balance -= amt;
    }

    ~BankAccount()
    {
        cout << "\nDestructing Object And Displaying Final Amount Withdraw";
        cout << "\nBalance: " << balance<<endl;
    }
};
int main()
{
    system("clear");
    cout << "Into The Main Function\n";
    BankAccount b1;
    b1.withdraw(1000);
}