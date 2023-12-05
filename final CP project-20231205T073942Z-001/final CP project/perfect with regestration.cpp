// try.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void clear();
void clean(int&, string&, char&);
void iron(int&, string&, char&);
void dry(int&, string&, char&);
void dryx(int&, string&, char&);
void irondry(int&, string&, char&, string&, int&);
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

int main()
{
	ifstream mfile;                           // make file
	ofstream save;                           // save info in file
	string username,d,line;
	string password;
	char pass;
	int h=0;
	int choicex;
	while(h==0)
	{
	cout<<"Press 1 to regester\nPress 2 to login\nPress 3 to login as guest(no discount)";
	cout<<endl;
	cin>>choicex;
	if(choicex==1)
	{
	
	cout<<"enter your username(without spaces):\n";
	 cin>>username;
    string fileName = username;
  	fileName += ".dat";
    mfile.open(fileName.c_str( ),fstream::out);
    if(mfile != NULL)
	  {
  	    cout<<"user name already exists try another one\n";
		  continue;  
	  }
	  else
	  {
	  	cout<<"user name does exist\n";
	  }
    cout<<"enter your password(without spaces):\n";
    cin>>password;
    save.open (fileName.c_str(), std::ofstream::out | std::ofstream::app);
    save << password <<"\n";
    save.close();
    mfile.close();
    break;
    }
    else if(choicex==2)
    {
      cout<<"enter username:\n";
      cin>>username;
      username += ".dat";
      mfile.open(username.c_str());
  	  if(mfile !=NULL)
	  {
  	    cout<<"user name exists\n";
	  }
	  else
	  {
	  	cout<<"invalid input\nare you sure you have an account if not regester\n";
	  	continue;
	  }
    	cout<<"enter password:\n";
    	char ch = _getch();
        while(ch !=13 )
        {
            password.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        cout<<"\n";
    	while(getline(mfile, line)) 
		{
         if(line==password)
         {
         	cout<<"valid input\n";
		 }
		 else if(line!=password)
		 {
		 	cout<<"invalid input\nare you sure you have an account if not regester\n";
		 	continue;
		 }
	    }
	    mfile.close();
	    break;
  }
  else if(choicex==3)
  {
  	cout<<"enter your name:\n";
  	cin>>a[5].name;
  	cout<<"you wont get a discount for logging in as guest\n";
  	break;
  }
  else if(choicex>3||choicex<=0)
  {
  	cout<<"invalid input try again\n";
  	continue;
  }
}
system("CLS");
cout<<"welcome to dry cleaning shop\n\n\n";
	int s = 1, z = 0;
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
				clean(a[0].price, a[0].item, a[0].confirm);
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
		else if (a[0].choice == 2)
		{
			a[1].others = "what do you wish to do?\nPress 1 to wash jeans\nPress 2 to wash sweaters\nPress 3 to wash shirts\nPress 4 to wash Tshirts\nPress 5 to wash pajamas\nPress 6 to wash blanket\nPress 7 to wash bedsheet\nPress 8 to wash curtain\nPress 9 to wash coat\nPress 10 to wash whole suit\nPress 11 to wash socks\n";
			cout << a[1].others;
			cin >> a[1].choice;
			if (a[1].choice == 1)
			{
				a[0].price = 25;
				a[0].item = "jeans";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 2)
			{
				a[0].price = 35;
				a[0].item = "sweater";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 3)
			{
				a[0].price = 30;
				a[0].item = "shirt";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 4)
			{
				a[0].price = 20;
				a[0].item = "Tshirt";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 5)
			{
				a[0].price = 25;
				a[0].item = "pajama";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 6)
			{
				a[0].price = 75;
				a[0].item = "blanket";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 7)
			{
				a[0].price = 55;
				a[0].item = "bedsheet";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 8)
			{
				a[0].price = 60;
				a[0].item = "curtain";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 9)
			{
				a[0].price = 40;
				a[0].item = "coat";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 10)
			{
				a[0].price = 60;
				a[0].item = "suit";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 11)
			{
				a[0].price = 5;
				a[0].item = "socks";
				dry(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
		}
		else if (a[0].choice == 3)
		{
			a[1].others = "what do you wish to do?\nPress 1 to wash jeans\nPress 2 to wash sweaters\nPress 3 to wash shirts\nPress 4 to wash Tshirts\nPress 5 to wash pajamas\nPress 6 to wash blanket\nPress 7 to wash bedsheet\nPress 8 to wash curtain\nPress 9 to wash coat\nPress 10 to wash whole suit\nPress 11 to wash socks\n";
			cout << a[1].others;
			cin >> a[1].choice;
			if (a[1].choice == 1)
			{
				a[0].price = 65;
				a[0].item = "jeans";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 2)
			{
				a[0].price = 40;
				a[0].item = "sweater";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 3)
			{
				a[0].price = 35;
				a[0].item = "shirt";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 4)
			{
				a[0].price = 25;
				a[0].item = "Tshirt";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 5)
			{
				a[0].price = 30;
				a[0].item = "pajama";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 6)
			{
				a[0].price = 80;
				a[0].item = "blanket";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 7)
			{
				a[0].price = 60;
				a[0].item = "bedsheet";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 8)
			{
				a[0].price = 65;
				a[0].item = "curtain";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 9)
			{
				a[0].price = 45;
				a[0].item = "coat";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 10)
			{
				a[0].price = 65;
				a[0].item = "suit";
				iron(a[0].price, a[0].item, a[0].confirm);
				a[0].total = a[0].total + a[0].price;
			}
			else if (a[1].choice == 11)
			{
				a[0].price = 5;
				a[0].item = "socks";
				iron(a[0].price, a[0].item, a[0].confirm);
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
	if(choicex==1)
	{
		a[1].total=0;
		cout << "since you are a new member you wont have to pay\n your total price is " << a[1].total << "\n";
	}
	else if(choicex==2)
	{
		a[1].total=a[1].total*0.7;
		cout <<username<< " since you are registered user your total price is " << a[1].total << "\n";
	}
	else if(choicex==3)
	{
	cout <<a[5].name<< " your total price is " << a[1].total << "\n";
    }
	system("pause");
	return 0;
}
void clear()
{
	system("CLS");
}
void clean(int& e, string& b, char& d)
{
	cout << "are you sure you want to wash " << b << " y/n\n";
	cin >> d;
	if (d == 'y')
	{
		clear();
		int c;
		cout << "your price for washing one " << b << " is " << e << "\n";
		cout << "how many " << b << " you want to wash?\n";
		cin >> c;
		e = e*c;
		cout << "your price for washing " << c << " " << b << " is " << e << "\n";
		a[3].others = "do you want to perform dry or clean on washed clothes?\nPress 1 to dry only\nPress 2 to iron only \nPress 3 for both\nPress 4 if you dont want to do either\n";
		cout << a[3].others;
		cin >> a[3].choice;
		if (a[3].choice == 1)
		{
			a[4].others = "dry only";
		}
		if (a[3].choice == 2)
		{
			a[4].others = "iron only";
		}
		if (a[3].choice == 3)
		{
			a[4].others = "both only";
		}
		if (a[3].choice == 1 || a[3].choice == 2 || a[3].choice == 3)
		{
			irondry(e, b, d, a[4].others, a[3].choice);
		}
	}
}
void irondry(int& e, string& b, char&d, string& f, int& i)
{
	int amount;
	char confirm;
	cout << "are you sure you want to " << f << " y/n\n";
	cin >> confirm;
	if (confirm == 'y')
	{
		if (i == 1)
		{
			if (b == "jeans")
			{
				int g = 30;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "sweater")
			{
				int g = 40;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "shirt")
			{
				int g = 35;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "Tshirt")
			{
				int g = 25;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "pajama")
			{
				int g = 30;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "blanket")
			{
				int g = 80;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "bedsheet")
			{
				int g = 60;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "curtain")
			{
				int g = 65;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "coat")
			{
				int g = 45;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "suit")
			{
				int g = 65;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "socks")
			{
				int g = 5;
				cout << "your price for drying " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to dry" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
		}
		else if (i == 2)
		{
			if (b == "jeans")
			{
				int g = 25;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "sweater")
			{
				int g = 35;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "shirt")
			{
				int g = 30;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "Tshirt")
			{
				int g = 20;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "pajama")
			{
				int g = 25;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "blanket")
			{
				int g = 75;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "bedsheet")
			{
				int g = 55;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "curtain")
			{
				int g = 60;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "coat")
			{
				int g = 40;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "suit")
			{
				int g = 60;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
			else if (b == "socks")
			{
				int g = 5;
				cout << "your price for ironing " << b << " is " << g << "\n";
				cout << "how many " << b << " you want to iron" << "\n";
				cin >> amount;
				g = g*amount;
				e = e + g;
			}
		}
		else if (i == 3)
		{
			if (b == "jeans")
			{
				int g = 25;
				int h = 30;
				int j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "sweater")
			{
				int g = 35;
				int h = 40, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "shirt")
			{
				int g = 30;
				int h = 35, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "Tshirt")
			{
				int g = 20;
				int h = 25, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "pajama")
			{
				int g = 25;
				int h = 30, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "blanket")
			{
				int g = 75;
				int h = 80, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "bedsheet")
			{
				int g = 55;
				int h = 60, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "curtain")
			{
				int g = 60;
				int h = 65, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "coat")
			{
				int g = 40;
				int h = 45, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "suit")
			{
				int g = 60;
				int h = 65, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
			else if (b == "socks")
			{
				int g = 5;
				int h = 5, j = 0;
				cout << "your price for ironing and drying " << b << " is " << g + h << "\n";
				cout << "how many " << b << " you want to iron and dry" << "\n";
				cin >> amount;
				g = g*amount;
				h = h*amount;
				j = g + h;
				e = e + j;
			}
		}
	}
}
void dry(int& e, string& b, char& d)
{
	char g;
	cout << "are you sure you want to dry " << b << " y/n\n";
	cin >> d;
	if (d == 'y')
	{
		clear();
		int c, k = e;
		cout << "your price for drying one " << b << " is " << e << "\n";
		cout << "how many " << b << " you want to dry?\n";
		cin >> c;
		e = e*c;
		cout << "your price for drying " << c << " " << b << " is " << e << "\n";
		cout << "do you want to iron your clothes?y/n\n";
		cin >> g;
		if (g == 'y')
		{
			//e = e / c;
			if (b != "jeans")
			k = k - 5;
			dryx(k, b, d);
			e = e + k;
		}

	}
}
void iron(int& e, string& b, char& d)
{
	cout << "are you sure you want to iron " << b << " y/n\n";
	cin >> d;
	if (d == 'y')
	{
		clear();
		int c;
		cout << "your price for ironing one " << b << " is " << e << "\n";
		cout << "how many " << b << " you want to iron?\n";
		cin >> c;
		e = e*c;
		cout << "your price for ironing " << c << " " << b << " is " << e << "\n";
	}
}
void dryx(int& e, string& b, char& d)
{
	clear();
	int c, i = 1;
	cout << "your price for ironing one " << b << " is " << e << "\n";
	cout << "how many " << b << " you want to iron?\n";
	cin >> c;
	e = e*c;
	cout << "your price for ironing and drying " << c << " " << b << " is " << e << "\n";
}
