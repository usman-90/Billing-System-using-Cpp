#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
using namespace std;
class Shop
{
private:
    string shop_name;
    string shop_add;
    string shop_num;

public:
    Shop();
    friend ostream &operator<<(ostream &out, Shop &s);
	void getdata();
};
#endif
