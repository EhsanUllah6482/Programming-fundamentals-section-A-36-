#include <iostream>
using namespace std;
void maximum(int c, int d);
void minimum(int c, int d);
void isequal(int c, int d);
int main()
{

	int a, b;
	cin >> a >> b;
	int choice;
	cout << "enter choice";
	cin >> choice;
	if (choice == 1)
	{
		maximum(a, b);
	}
	if (choice == 2)
	{
		minimum(a, b);
	}
	if (choice == 3)
	{
		isequal(a, b);
	}

	return 0;
}
void maximum(int c, int d)
{
	if (c >= d)
	{
		cout << c << "is greater than " << d;
	}
}
void minimum(int c, int d)
{

	if (c <= d)
	{
		cout << c << "is less than " << d;
	}
}
void isequal(int c, int d)
{

	if (c == d)
	{
		cout << c << "is equal to " << d;
	}
}