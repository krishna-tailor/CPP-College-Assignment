// Inheritence Demonstration

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    Student() {}
    Student(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }
};

class Marks : public Student
{
public:
    float marks;
    Marks(string name, int rollNo, float marks)
    {
        Student(this->name = name, this->rollNo = rollNo);
        this->marks = marks;
    }

    void display()
    {
        cout << "==== Student Detials ====\n"
             << "Name: " << name
             << "\nRoll No: " << rollNo
             << "\nMarks: " << marks;
    }
};
int main()
{
    system("clear");
    Marks m1("Krishna Tailor", 2075, 8.64);
    m1.display();
}