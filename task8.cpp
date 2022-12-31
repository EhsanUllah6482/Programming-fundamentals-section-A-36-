#include <iostream>
using namespace std;
void isequal(int a, int b);
main()
{
int number1,number2;
cout<<"enter number one";
cin>>number1;
cout<<"enter number two";
cin>>number2;
isequal(number1,number2);
}
void isequal(int a, int b)
{
if(a==b)
	{
cout<<"true";
	}
if(a!=b)
	{
cout<<"false";
	}
}