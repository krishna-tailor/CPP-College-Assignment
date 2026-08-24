// Overloading == operator and comparing roll number of two students if they are same or not

#include <iostream>
using namespace std;

class Student
{
    int rollNo;

public:
    Student(int rollNo = 0)
    {
        this->rollNo = rollNo;
    }

    int operator==(Student other)
    {
        if (rollNo == other.rollNo)
            return 0;
        return 1;
    }
};
int main()
{
    system("clear");
    Student s1(10), s2(10), s3(20);
    if ((s1 == s2) == 0)
        cout << "Roll Number Are Same";

    else if ((s1 == s2) == 1)
        cout << "\nRoll Number Are Different\n";
}