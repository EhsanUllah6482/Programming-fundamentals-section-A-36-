#include<iostream>
using namespace std;
main()
{
int pounds;
cout<<"Enter the size in pounds :_"<<endl;
cin>>pounds;
int cost;
cout<<"Enter cost of the bag :_"<<endl;
cin>>cost;
int area;
cout<<"Enter area covered by each bag in square feet "<<endl;
cin>>area;
int cost_of_fertilizer;
cost_of_fertilizer=cost/pounds;
cout<<"Cost of fertilizer per pound is = "<<cost_of_fertilizer<<endl;
int square_feet;
square_feet=pounds*area;
cout<<"Cost of fertilizing per square feet is = "<<square_feet<<endl;
}