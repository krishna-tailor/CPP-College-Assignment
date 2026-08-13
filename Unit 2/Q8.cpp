// Create Base Class Number nad Dervied Class Calculator

#include <iostream>
using namespace std;

class Number
{
protected:
    int num1, num2;

public:
    void getData()
    {
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;
    }
};

class Calculator : public Number
{
public:
    void add()
    {
        getData();
        cout << "Addition Of Two Number Is => " << num1 + num2;
    }
    void sub()
    {
        getData();
        cout << "Subtraction Of Two Number Is => " << num1 - num2;
    }
    void mul()
    {
        getData();
        cout << "Multiplication Of Two Number Is => " << num1 * num2;
    }
    void div()
    {
        getData();
        cout << "Divsion Of Two Number Is => " << num1 / num2;
    }
};

int main()
{
    system("clear");
    Calculator c;
    c.add();
    cout << "\n";
}