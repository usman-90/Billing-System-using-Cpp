#include <iostream>
#include <string>
#include "customer.h"
using namespace std;
customer::customer()
{
}
istream &operator>>(istream &in, customer &c)
{
    cout << "Enter Customer Name: ";
    in>>c.Name;
    cout << "Enter Phone Number: ";
    in >> c.phn;
    return in;
}
ostream &operator<<(ostream &out, customer &c)
{
    out << "        Customer Name: " << c.Name << endl;
    out << "         Tel: " << c.phn << endl<<endl;
    return out;
}
