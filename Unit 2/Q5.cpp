// Take Class Number Take Private , Protected Members And Access In The Derived Class

#include <iostream>
using namespace std;

class Number
{
protected:
    int no1;

public:
    int no2;
    Number() {}
    Number(int no1, int no2)
    {
        this->no1 = no1;
        this->no2 = no2;
    }
};

class Display : public Number
{
public:
    Display(int no1, int no2)
    {
        Number(this->no1 = no1, this->no2 = no2);
    }
    void show()
    {
        cout << "Displaying Protected Members: " << no1;
        cout << "\nDisplaying Public Members: " << no2 << endl;
    }
};

int main()
{
    system("clear");
    Display d(10, 20);
    d.show();
}