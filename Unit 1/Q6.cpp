// Tracking Total Number of Students usig Static Data Members

#include <iostream>
using namespace std;

class Student
{
private:
    static int count;
    public:
    Student()
    {
        count++;
    }

    void static display()
    {
        cout << "***** Total Students " << count << " *****\n\n";
    }
};

int Student::count = 0;
int main()
{
    system("clear");
    Student s1, s2, s3,s4,s5;
    Student ::display();
}