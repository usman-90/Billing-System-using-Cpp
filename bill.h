#ifndef BILL_H
#define BILL_H
#include <iostream>
#include <string>
#include "date.h"
#include "shop.h"
#include "customer.h"
#include "item.h"
using namespace std;
class bill : public Item
{
private:
    
	static string cashier;

	Date d;
    customer c;
 
    float totall;
    int cash;

public:
	Item i[20];
	int no;	
	int receipt;
	static Shop s1;
    void generatebill();
    void printbill();
    void getshop();
    void setcashier(string);
	void checkbill();
};
#endif
