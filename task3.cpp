#include<iostream>
using namespace std;
main()
{
int acceleration;
cout<<"Enter acceleration:_"<<endl;
cin>>acceleration;
int initial_velocity;
cout<<"Enter initial velocity:_"<<endl;
cin>>initial_velocity;
int time;
cout<<"Enter time:_"<<endl;
cin>>time;
float final_velocity;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"Calculated final velocity is = "<<final_velocity;
}