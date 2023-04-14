#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int d, int m, int y);
    void getDate();
    void printDate();
};
#endif
