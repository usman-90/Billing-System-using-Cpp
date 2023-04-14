#include <iostream>
#include <string>
#include "shop.h"
#include "date.h"
#include "customer.h"
#include "item.h"
#include "bill.h"
#include "shop.cpp"
#include "date.cpp"
#include "customer.cpp"
#include "item.cpp"
#include "bill.cpp"
using namespace std;

int main()
{	
	cout<<"*******************************************************************************"<<endl;
	cout<<"\n*******************************************************************************"<<endl;
	cout<<"\n********************** SUPER-MARKET BILLING SYSTEM ****************************"<<endl;
	cout<<"\n*******************************************************************************"<<endl;
	cout<<"\n*******************************************************************************\n"<<endl;
	bill b[10];
	
	int frst;
	int n = 0;
	int m = 1;
	
	cout<<"Press 1 to Set Shop and Press 0 to exit: ";
	cin>>frst;
	
	if (frst == 1){
	
	string ca;
	bill::s1.getdata();
	bill b;
	cout<<"Enter cashier name: ";
	cin>>ca;
	b.setcashier(ca);
	cout<<"\nShop info entered successfully!"<<endl<<endl;
	system("pause");
	system("cls");
}
	else{
		exit(0);
}	

	while (1){
	top:
	int choice;
	cout<<"\nEnter 1 to add a BILL:  "<<endl;
	cout<<"Enter 2 to view previously added BILL: "<<endl;
	cout<<"Enter 3 to Show Item details: "<<endl;
	cout<<"Enter 4 to exit: "<<endl;
	cin>>choice;
	
	switch (choice)	{
		case 1:
			
			system("cls");
			cout<<"\n****************************ENTER BILL DETAILS*******************************"<<endl<<endl;
			system("pause");
			cout<<endl;			
			b[n].generatebill();
			cout<<"\n\nBill Info ADDED Successfully!"<<endl<<endl;
			system("pause");
			b[n].receipt=m;
			b[n].printbill();
			n++;
			m++;
			system("pause");
			system("cls");
			goto top;
		case 2:
			
			int re;
			system("cls");
			cout<<"\n\n****************************VIEW BILL DETAILS*******************************"<<endl;
			cout<<"\n\nEnter Bill receipt: ";
			cin>>re;
			
			for (int i = 0 ; i < 21 ; i++){
				if (b[i].receipt == re){
					b[i].checkbill();											
				}
				if (i == 20){
				cout<<"NO bill with entered ID exists! "<<endl;
					}
			}
				system("pause");
				system("cls");
				goto top;
		case 3:
			system("cls");
			int r,id;
			cout<<"\n\n****************************VIEW ITEM DETAILS*******************************"<<endl;
			cout<<"\n\nEnter Bill receipt: ";
			cin>>r;
			cout<<"\nEnter Item ID: ";
			cin>>id;
			for (int j = 0 ; j < 21 ; j++){
				if (b[j].receipt == r){		
					for (int k = 0 ; k < b[j].no ; k++ ){
						Item it;
						it = b[j].i[k];
						if (it.itemId == id){
							it.printItem();
							system("pause");
							system("cls");
							goto top;
						}
					}
				}
				if (j == 20){
				cout<<"NO Item with entered ID exists! "<<endl;
					}
		}
				system("pause");
				system("cls");
				goto top;
		case 4:
			exit(0);
		
		default:
		cout<<"Incorrect Choice! "<<endl;		
	}
	
}
	return 0;
}
