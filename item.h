#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;
class Item
{
private:
    string itemName;
    float price;
	float tax;
    float discount;
    int quantity;

public:
    float net;
	int itemId;
    friend istream &operator>>(istream &in, Item &i);
    friend ostream &operator<<(ostream &out, Item &i);
    void printItem();
    void setNet();
    Item& operator=(Item& rightobj);
};
#endif
