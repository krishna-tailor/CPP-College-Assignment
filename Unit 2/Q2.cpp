// Simple Inheritence Program

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person() {}
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};

class Employee : public Person
{
public:
    int empId;
    float salary;
    Employee(string name, int age, int empId, float salary)
    {
        Person(this->name = name, this->age = age);
        this->empId = empId;
        this->salary = salary;
    }

    void display()
    {
        cout << "==== Employee Details ====\n\n"
             << "Age: " << age
             << "\nName: " << name
             << "\nEmployee Id: " << empId
             << "\nSalary: " << salary << endl;
    }
};
int main()
{
    system("clear");
    Employee e1("Krishna Tailor", 19, 100, 65000.00);
    e1.display();
}