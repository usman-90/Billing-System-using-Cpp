#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class customer
{
private:
    string Name;
    string phn;

public:
    customer();
    friend istream &operator>>(istream &in, customer &c);
    friend ostream &operator<<(ostream &out, customer &c);
};
#endif
