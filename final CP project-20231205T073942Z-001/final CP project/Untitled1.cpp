// try.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void clear();
void clean(int&,string&,char&);
void iron();
void dry();
void irondry(int&,string&,char&,int&);
struct drycleansystem
{
	int choice;
	string name;
	string password;
	string item;
	int price;
	string others;
	char confirm;
	int total;
}a[100];

int _tmain(int argc, _TCHAR* argv[])
{
	int s=1,z=0;
	a[0].others = "Press 1 to wash\nPress 2 to dry\nPress 3 to iron\n";
	while (s != 0)
	{
		a[0].total = 0;
		cout << a[0].others;
		cin >> a[0].choice;
		if (a[0].choice == 1)
		{
			a[1].others = "what do you wish to do?\nPress 1 to wash jeans\nPress 2 to wash sweaters\nPress 3 to wash shirts\nPress 4 to wash Tshirts\nPress 5 to wash pajamas\nPress 6 to wash blanket\nPress 7 to wash bedsheet\nPress 8 to wash curtain\nPress 9 to wash coat\nPress 10 to wash whole suit\nPress 11 to wash socks\n";
			cout << a[1].others;
			cin >> a[1].choice;
			if (a[1].choice == 1)
			{
				a[0].price = 50;
				a[0].item = "jeans";
				clean(a[0].price, a[0].item,a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 2)
			{
				a[0].price = 60;
				a[0].item = "sweater";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 3)
			{
				a[0].price = 40;
				a[0].item = "shirt";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 4)
			{
				a[0].price = 45;
				a[0].item = "Tshirt";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 5)
			{
				a[0].price = 50;
				a[0].item = "pajama";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 6)
			{
				a[0].price = 150;
				a[0].item = "blanket";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 7)
			{
				a[0].price = 100;
				a[0].item = "bedsheet";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 8)
			{
				a[0].price = 200;
				a[0].item = "curtain";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 9)
			{
				a[0].price = 120;
				a[0].item = "coat";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 10)
			{
				a[0].price = 180;
				a[0].item = "suit";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 11)
			{
				a[0].price = 10;
				a[0].item = "socks";
				clean(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
		}
		a[1].total = a[1].total + a[0].total;
		if (z > 0)
			cout << "your current toal is " << a[1].total << "\n";
		z++;
		cout << "do you want to do more things Press 1 for yes and 0 for no\n";
		cin >> s;
	}
	cout << "your total price is " << a[1].total<<"\n";
	system("pause");
	return 0;
}
void clear()
{
	system("CLS");
}
void clean(int& e, string& b,char& d)
{
	cout << "are you sure you want to wash " << b<<" y/n\n";
	cin >> d;
	if (d == 'y')
	{
		clear();
		int c;
		cout << "your price for washing one " << b << " is " << e << "\n";
		cout << "how many jeans you want to buy?\n";
		cin >> c;
		e = e*c;
		cout << "your price for washing " << c << " " << b << " is " << e << "\n";
		a[3].others = "do you want to perform dry or clean on washed clothes?\nPress 1 to dry only\nPress 2 to iron only Press 3 for both";
		cout << a[3].others;
		cin >> a[3].choice;
		if (a[3].choice == 1)
		{
			irondry(e, b, d, a[3].choice);
		}
	}
}
void irondry(int& e, string& b, char&d, int& f)
{

}
