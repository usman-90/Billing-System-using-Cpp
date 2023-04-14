#include <iostream>
#include <string>
#include "shop.h"
using namespace std;
Shop::Shop()
{
	
}
void Shop::getdata(){
	cout << "\nEnter Shop Name: ";
    cin >> shop_name;
    cout << "Enter Shop City: ";
    cin>>shop_add;
    cout << "Enter Shop Num: ";
    cin >> shop_num;
}
ostream &operator<<(ostream &out, Shop &s)
{
    out <<"\n\t   "<< s.shop_name <<endl;
    out <<"\t   "<< s.shop_add << endl;
    out <<"\t   "<< s.shop_num << endl;
    return out;
}
