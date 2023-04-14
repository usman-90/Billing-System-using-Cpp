#include <iostream>
#include <string>
#include "shop.h"
#include "date.h"
#include "customer.h"
#include "item.h"
#include "bill.h"
using namespace std;
Shop bill::s1;
string bill::cashier;

void bill::setcashier(string c){
	cashier = c;
}
void bill::generatebill()
{
    receipt++;
    d.getDate();
    cin >> c;
    cout << "Enter no  of Items: ";
    cin >> no;
    for (int j = 0; j < no; j++)
    {
        cin >> i[j];
        i[j].setNet();
        totall = totall + i[j].net;
    }
}

void bill::printbill()
{
    cout << "----------SHOP RECEIPT----------" << endl;
    cout << s1;
    cout << "\t   Receipt No: " << receipt << endl;
    cout << "\t   DATE: ";
    d.printDate();
    cout << "\t   Cashier: " << cashier << endl;
    cout << c;
    cout << "ID" << "\t" << "Name" << "\t" << "  price" << "\t" << "Qt" << "\t" << "Tax %age" << "\t" << "Discount" << "\t" << "Net" << endl <<endl;
    for (int j = 0; j < no; j++)
    {
        cout << i[j];
    }
    cout << "\nTotal Amount: " << totall << endl<<endl<<endl;
    cout<<"-----------PAYMENT SUMMARY-----------"<<endl;
    cout<<"\n\tTotal Cash given: ";
    cin>>cash;
    cout<<"\tTotal Cash Repaid: "<<cash - totall<<endl<<endl;
    cout << "-------------THANK YOU---------------" << endl;
    cout << "------------HAVE A NICE DAY----------" << endl<<endl;
}

void bill::checkbill()
{
    cout << "\n----------SHOP RECEIPT-------------"<< endl;
    cout << s1;
    cout << "\t   Receipt No: " << receipt << endl;
    cout << "\t   DATE: ";
    d.printDate();
    cout << "\t   Cashier: " << cashier << endl;
    cout << c;
    cout << "ID" << "\t" << "Name" << "\t" << "  price" << "\t" << "Qt" << "\t" << "Tax %age" << "\t" << "Discount" << "\t" << "Net" << endl <<endl;
	for (int j = 0; j < no; j++)
    {
        cout << i[j];
    }
    cout << "\nTotal Amount: " << totall << endl<<endl<<endl;
    cout<<"\n-----------PAYMENT SUMMARY-----------"<<endl;
    cout<<"\tTotal Cash given: "<<cash<<endl;
    cout<<"\tTotal Cash Repaid: "<<cash - totall<<endl<<endl;
    cout << "-------------THANK YOU---------------" << endl;
    cout << "------------HAVE A NICE DAY----------" << endl<<endl;
}

