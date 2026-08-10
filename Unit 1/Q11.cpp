// Create Class Student With Parameterized Constructor , And Initalize Object Using " this "

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "==== Student Detials ====\n"
             << "Roll No: " << rollNo
             << "\nName: " << name
             << "\nMarks: " << marks << endl;
    }
};
int main()
{
    system("clear");
    Student s1(2075, "Krishna Tailor", 8.64);
    s1.display();
}