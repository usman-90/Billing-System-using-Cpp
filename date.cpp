#include <iostream>
#include "date.h"
using namespace std;
Date::Date() {}
Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void Date::getDate()
{
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}
void Date::printDate()
{
    cout << day << "-" << month << "-" << year << endl;
}

