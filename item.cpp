#include <iostream>
#include <string>
#include "item.h"
using namespace std;
Item& Item::operator=(Item& rightobj){
	this->itemId = rightobj.itemId;
	this->itemName = rightobj.itemName;
	this->discount = rightobj.discount;
	this->net = rightobj.net;
	this->price = rightobj.net;
	this->quantity = rightobj.quantity;
	this->tax = rightobj.tax;
	return *this;
}
istream &operator>>(istream &in, Item &i)
{
    cout << "Enter Item ID: ";
    in >> i.itemId;
    cout << "Enter Item Name: ";
    cin >> i.itemName;
    cout << "Enter Price: ";
    in >> i.price;
    cout << "Enter Item Quantity: ";
    in >> i.quantity;
    cout << "Enter Tax percentage: ";
    in >> i.tax;
    cout << "Enter Discount percentage: ";
    in >> i.discount;
    return in;
}
void Item::setNet()
{
    float total = (price * quantity) ;
    net = total - (discount * quantity * total / 100);
}
ostream &operator<<(ostream &out, Item &i)
{
    out << i.itemId << "\t" << i.itemName << "\t  " << i.price << "\t" << i.quantity << "\t" << i.tax << "\t         " << i.discount << "\t         " << i.net << endl;
    return out;
}
void Item::printItem()
{
    float total = (price * quantity) + (tax * price / 100);
    cout << "\n--------------------ITEM ID : " << itemId << "--------------------" << endl;
    cout << "\n\n\tItem Name: \t\t" << itemName << endl;
    cout << "\n\tItem Price: \t\t" << price << endl;
    cout << "\n\tTax in %age: \t\t" << tax << endl;
    cout << "\n\tDiscount in %age: \t" << discount << endl;
    cout << "\n\tQuantity: \t\t" << quantity << endl;
    cout << "\n\tNet Amount: \t\t" << total - (discount * total / 100) << endl<<endl;
    cout << "----------------------------------------------------"<<endl<<endl<<endl;
}
