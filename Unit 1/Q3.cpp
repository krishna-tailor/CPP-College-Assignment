#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        cout << "===== Employee Details =====\n\n"
             << "Name: " << name
             << "\nID: " << id
             << "\nSalary: " << salary << endl;
    }
};

int main()
{
    system("clear");
    Employee e1(2075, "Krishna Tailor", 95000);
    e1.display();
}