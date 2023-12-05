#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
#include<conio.h>
using namespace std;
class dryclean
{
	public:
	int choice;
	string name;
	string password;
	string item;
	int price;
	string others;
	char confirm;
	int total;
	void conf(char& a)
	{
		cin>>a;
		system("CLS");
	}
	int wash(int b,string c,char d)
	{
		int amount,z=b;
		char con;
		cout<<"your price for washing one "<<c<<" is "<<b<<"\nare you sure you want to wash it y/n\n";
		cin>>d;
		if(d=='y')
		{
			cout<<"how many "<<c<<" you want to wash:\n";
			cin>>amount;
			b=b*amount;
			system("CLS");
			cout<<"your price for washing "<<amount<<" "<<c<<" is "<<b<<"\n";
			cout<<"do you want to perform dry washed clothes y/n\n";
			cin>>con;
			if(con=='y')
			{
				if(c=="socks")
				z=z;
				else
				{
					z=z-20;
				}
				int x=dry(z,c,d);
				b=b+x;
			}
			return b;
		}
	}
	int dry(int b,string c,char d)
	{
		int amount,z=b;
		char con;
		cout<<"your price for drying one "<<c<<" is "<<b<<"\nare you sure you want to dry it y/n\n";
		cin>>d;
		if(d=='y')
		{
			cout<<"how many "<<c<<" you want to dry:\n";
			cin>>amount;
			b=b*amount;
			system("CLS");
			cout<<"your price for drying "<<amount<<" "<<c<<" is "<<b<<"\n";
			cout<<"do you want to perform iron on your clothes y/n\n";
			cin>>con;
			if(con=='y')
			{
				z=z+5;
				int x=iron(z,c,d);
				b=b+x;
			}
			return b;
		}
	}
	int iron(int b,string c,char d)
	{
		int amount,z=b;
		cout<<"your price for ironing one "<<c<<" is "<<b<<"\nare you sure you want to iron it y/n\n";
		cin>>d;
		if(d=='y')
		{
			cout<<"how many "<<c<<" you want to iron:\n";
			cin>>amount;
			b=b*amount;
			system("CLS");
			cout<<"your price for ironing "<<amount<<" "<<c<<" is "<<b<<"\n";
			return b;
		}
	}		
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
cout<<"wait while the information is loaded\n";
Sleep(1500);
	int s=1;
	while(s!=0)
	{
	a[0].total=0;
	a[0].others = "Press 1 to wash\nPress 2 to dry\nPress 3 to iron\n";
	cout<<a[0].others;
	cin>>a[0].choice;
	if(a[0].choice==1)
	{
	a[1].others = "what do you wish to do?\nPress 1 to wash jeans\nPress 2 to wash sweaters\nPress 3 to wash shirts\nPress 4 to wash Tshirts\nPress 5 to wash pajamas\nPress 6 to wash blanket\nPress 7 to wash bedsheet\nPress 8 to wash curtain\nPress 9 to wash coat\nPress 10 to wash whole suit\nPress 11 to wash socks\n";
	cout << a[1].others;
	cin >> a[1].choice;
	if(a[1].choice==1)
	{
		cout<<"are you sure you want to wash jeans? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 50;
			int z=a[0].price;
			a[0].item = "jeans";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==2)
	{
		cout<<"are you sure you want to wash sweaters? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 60;
			int z=a[0].price;
			a[0].item = "sweaters";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==3)
	{
		cout<<"are you sure you want to wash shirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 40;
			int z=a[0].price;
			a[0].item = "shirts";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==4)
	{
		cout<<"are you sure you want to wash Tshirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 30;
			int z=a[0].price;
			a[0].item = "Tshirts";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==5)
	{
		cout<<"are you sure you want to wash pajamas? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 40;
			int z=a[0].price;
			a[0].item = "pajamas";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==6)
	{
		cout<<"are you sure you want to wash blanket? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 200;
			int z=a[0].price;
			a[0].item = "blankets";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==7)
	{
		cout<<"are you sure you want to wash bedsheets? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 100;
			int z=a[0].price;
			a[0].item = "bedsheets";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==8)
	{
		cout<<"are you sure you want to wash curtains? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 130;
			int z=a[0].price;
			a[0].item = "curtains";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==9)
	{
		cout<<"are you sure you want to wash coats? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 110;
			int z=a[0].price;
			a[0].item = "coats";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==10)
	{
		cout<<"are you sure you want to wash suit? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 150;
			int z=a[0].price;
			a[0].item = "suit";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==11)
	{
		cout<<"are you sure you want to wash socks? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 10;
			int z=a[0].price;
			a[0].item = "socks";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
    }
    else if(a[0].choice==2)
	{
	a[1].others = "what do you wish to do?\nPress 1 to dry jeans\nPress 2 to dry sweaters\nPress 3 to dry shirts\nPress 4 to dry Tshirts\nPress 5 to dry pajamas\nPress 6 to dry blanket\nPress 7 to dry bedsheet\nPress 8 to dry curtain\nPress 9 to dry coat\nPress 10 to dry whole suit\nPress 11 to dry socks\n";
	cout << a[1].others;
	cin >> a[1].choice;
	if(a[1].choice==1)
	{
		cout<<"are you sure you want to dry jeans? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 30;
			int z=a[0].price;
			a[0].item = "jeans";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==2)
	{
		cout<<"are you sure you want to dry sweaters? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 40;
			int z=a[0].price;
			a[0].item = "sweaters";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==3)
	{
		cout<<"are you sure you want to dry shirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 20;
			int z=a[0].price;
			a[0].item = "shirts";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==4)
	{
		cout<<"are you sure you want to dry Tshirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 10;
			int z=a[0].price;
			a[0].item = "Tshirts";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==5)
	{
		cout<<"are you sure you want to dry pajamas? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 20;
			int z=a[0].price;
			a[0].item = "pajamas";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==6)
	{
		cout<<"are you sure you want to dry blanket? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 180;
			int z=a[0].price;
			a[0].item = "blankets";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==7)
	{
		cout<<"are you sure you want to dry bedsheets? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 80;
			int z=a[0].price;
			a[0].item = "bedsheets";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==8)
	{
		cout<<"are you sure you want to dry curtains? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 110;
			int z=a[0].price;
			a[0].item = "curtains";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==9)
	{
		cout<<"are you sure you want to dry coats? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 90;
			int z=a[0].price;
			a[0].item = "coats";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==10)
	{
		cout<<"are you sure you want to dry suit? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 130;
			int z=a[0].price;
			a[0].item = "suit";
			z=a[0].dry(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==11)
	{
		cout<<"are you sure you want to dry socks? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 5;
			int z=a[0].price;
			a[0].item = "socks";
			z=a[0].wash(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
    }
    else if(a[0].choice==3)
	{
	a[1].others = "what do you wish to do?\nPress 1 to iron jeans\nPress 2 to iron sweaters\nPress 3 to iron shirts\nPress 4 to iron Tshirts\nPress 5 to iron pajamas\nPress 6 to iron blanket\nPress 7 to iron bedsheet\nPress 8 to iron curtain\nPress 9 to iron coat\nPress 10 to iron whole suit\nPress 11 to iron socks\n";
	cout << a[1].others;
	cin >> a[1].choice;
	if(a[1].choice==1)
	{
		cout<<"are you sure you want to iron jeans? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 35;
			int z=a[0].price;
			a[0].item = "jeans";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==2)
	{
		cout<<"are you sure you want to iron sweaters? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 45;
			int z=a[0].price;
			a[0].item = "sweaters";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==3)
	{
		cout<<"are you sure you want to iron shirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 25;
			int z=a[0].price;
			a[0].item = "shirts";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==4)
	{
		cout<<"are you sure you want to iron Tshirts? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 15;
			int z=a[0].price;
			a[0].item = "Tshirts";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==5)
	{
		cout<<"are you sure you want to iron pajamas? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 25;
			int z=a[0].price;
			a[0].item = "pajamas";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==6)
	{
		cout<<"are you sure you want to iron blanket? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 185;
			int z=a[0].price;
			a[0].item = "blankets";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==7)
	{
		cout<<"are you sure you want to iron bedsheets? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 85;
			int z=a[0].price;
			a[0].item = "bedsheets";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==8)
	{
		cout<<"are you sure you want to iron curtains? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 115;
			int z=a[0].price;
			a[0].item = "curtains";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==9)
	{
		cout<<"are you sure you want to iron coats? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 95;
			int z=a[0].price;
			a[0].item = "coats";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==10)
	{
		cout<<"are you sure you want to iron suit? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 135;
			int z=a[0].price;
			a[0].item = "suit";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
	else if(a[1].choice==11)
	{
		cout<<"are you sure you want to iron socks? y/n\n";
		a[0].conf(a[0].confirm);
		if(a[0].confirm=='y')
		{
			a[0].price = 5;
			int z=a[0].price;
			a[0].item = "socks";
			z=a[0].iron(a[0].price, a[0].item, a[0].confirm);
			a[0].total = a[0].total + z;
		}
	}
    }
    a[1].total = a[1].total+a[0].total;
    cout<<"do you want to wash,dry or iron more clothes?\nPress 1 for yes and 0 for no\n";
    cin>>s;
    }
    cout<<"your total price is "<<a[1].total;
}
