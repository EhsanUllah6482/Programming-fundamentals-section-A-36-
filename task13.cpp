#include<iostream>
using namespace std;
main()
{
int holidays;
cout<<"Enter the number of hollidays";
cin>>holidays;
int workingdays=365-holidays;
int timeforgames=(workingdays*63+holidays*127);
int difference=30000-timeforgames;
int hours=difference/60;
int mintues=difference%60;
cout<<"time for sleep is = "<<hours;
cout<<"time for play is = "<<mintues;
}