// Copying Data From 1 Student Object To Another Using Copy Constructor

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student() {}
    Student(int rollNo, string name)
    {
        this->name = name;
        this->rollNo = rollNo;
    }

    Student(Student &obj)
    {
        name = obj.name;
        rollNo = obj.rollNo;
    }

    void display()
    {
        cout << "Name: " << name
             << "\nRoll No: " << rollNo << endl;
    }
};
int main()
{
    system("clear");

    Student s1(2075, "Krishna Tailor"), s2(s1);
       
    s1.display();
    s2.display();
}