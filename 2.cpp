#include <iostream>
using namespace std;
void iseven(int a);
int main()
{
	while(true)
		{
			int n;
			cin>>n;
			iseven(n);
		}
    return 0;
}
void iseven(int a)
{

	if(a%2==0)
		{
			cout<<"the number is even";
		}
	if(a%2!=0)
		{
			cout<<"the number is odd";
		}
} 