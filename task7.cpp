#include <iostream>
using namespace std;
main()
{
string movie;
cout<<"enter movie name "<<endl;
cin>>movie;
int adultPrice;
cout<<"enter adult price "<<endl;
cin>>adultPrice;
int childprice;
cout<<"enter child price "<<endl;
cin>>childprice;
int childsold;
cout<<"enter child sold tickets "<<endl;
cin>>childsold;
int adultsold;
cout<<"enter adult sold tickets "<<endl;
cin>> adultsold;
int childtotal,adulttotal;
childtotal=childprice*childsold;
adulttotal=adultPrice*adultsold;
int total;
total=childtotal+adulttotal;
cout<<"total amount is "<<total<<endl;
int percentage;
cout<<"enter percentage to donate "<<endl;
cin>>percentage;

float store;
store=(percentage/100.0)*total;
cout<<"amount after percentage is "<<store;
cout<<endl;


int answer;
answer=total-store;
cout<<"amount after donation is :_ "<<answer;
}