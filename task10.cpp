#include <iostream>
using namespace std;
void discount(string name,int price);
main()
{
while(true){
string name;
cout<<"enter the country name ";
cin>>name;
int price;
cout<<"enter the price of the entered country";
cin>>price;

discount(name,price);}
}
void discount(string name,int price)
{
if(name=="pakistan")
	{
float pakdiscount=price*(5.0/100);
float totalpakdiscount=price-pakdiscount;
cout<<"the discount for pakistan="<<totalpakdiscount;

	}
if(name=="ireland")
	{
float irelanddiscount=price*(10.0/100.0);
float totalirelanddiscount=price-irelanddiscount;
cout<<"the discount for ireland="<<totalirelanddiscount;

	}
if(name=="india")
	{
float indiadiscount=price*(20.0/100.0);
float totalindiadiscount=price-indiadiscount;
cout<<"the discount for india="<<totalindiadiscount;

	}
if(name=="england")
	{
float englanddiscount=price*(30.0/100.0);
float totalenglanddiscount=price-englanddiscount;
cout<<"the discount for england="<<totalenglanddiscount;

	}
if(name=="canada")
	{
float canadadiscount=price*(45.0/100.0);
float totalcanadadiscount=price-canadadiscount;
cout<<"the discount for canada="<<totalcanadadiscount;

	}
}
