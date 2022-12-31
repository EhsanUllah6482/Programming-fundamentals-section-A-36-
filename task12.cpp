#include<iostream>
using namespace std;
main()
{
int red,white,tuilp;
cout<<"enter number of red flowers";
cin>>red;
cout<<"enter number of white flowers";
cin>>white;
cout<<"enter number of tuilp flowers";
cin>>tuilp;
float tred;
tred=red*2.0;
cout<<"original price of red rose="<<tred;
float twhite=white*4.10;
cout<<"original price of white rose="<<twhite;
float ttuilp=tuilp*2.50;
cout<<"originl price of tuilp rose="<<ttuilp;
if(tred>=200)
	{
float rdiscount=tred*(20.0/100.0);
cout<<"original price ="<<tred;
cout<<"price after discount ="<<rdiscount;
	}
if(twhite>=200)
	{
float wdiscount=twhite*(20.0/100.0);
cout<<"original price ="<<twhite;
cout<<"price after discount ="<<wdiscount;
	}
if(ttuilp>=200)
	{
float tdiscount=ttuilp*(20.0/100.0);
cout<<"original price ="<<ttuilp;
cout<<"price after discount ="<<tdiscount;
	}
}