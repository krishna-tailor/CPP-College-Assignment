// Program To Check Weather Givent Date Is Correct or Not

#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year, maxDate;

public:
    Date() {}
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void validateDate();
};

void Date ::validateDate()
{
    if (month == 2)
    {
        if (day > 29)
        {
            system("clear");
            cout << "***** Invalid Date *****\n\n";
            return;
        }

        else if (day == 29)
        {
            if (year % 4 == 0)
            {

                system("clear");
                cout << "***** Date Is Valid *****\n\n";
                return;
            }

            else
            {
                system("clear");
                cout << "***** Date Is InValid *****\n\n";
                return;
            }
        }

        else
        {
            system("clear");
            cout << "***** Date Is InValid *****\n\n";
            return;
        }
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        maxDate = 31;
    }

    else
        maxDate = 30;

    if (day > maxDate)
    {
        system("clear");
        cout << "***** Date Is InValid *****\n\n";
        return;
    }

    else
    {
        system("clear");
        cout << "***** Date Is Valid *****\n\n";
        return;
    }
}

int main()
{
    int day, month, year;
    Date d;
    system("clear");

    do
    {
        cout << "Enter Day Number:";
        cin >> day;

        if (day <= 0 || day > 32)
        {
            system("clear");
            cout << "***** Day Number Should Be Greater Than 0 And Less Than 32 *****";
        }
    } while (day <= 0 || day > 32);

    do
    {
        system("clear");
        cout << "Enter Month Number: ";
        cin >> month;

        if (month <= 0 || month > 12)
        {
            system("clear");
            cout << "***** Month Number Should Be Greater Than 0 And Less Than 12 *****";
        }
    } while (month <= 0 || month > 12);

    do
    {
        system("clear");
        cout << "Enter Year Number: ";
        cin >> year;
        if (year <= 0)
        {
            system("clear");
            cout << "***** Year Number Should Be Greater Than 0 *****";
        }
    } while (year <= 0);

    d = Date(day, month, year);
    d.validateDate();
}