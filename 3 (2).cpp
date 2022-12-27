#include <iostream>
using namespace std;
void calculatedbill(string day, int amount);
int main()
{
	string day;
	int amount;
	cout << "enter the day ";
	cin >> day;
	cout << "enter your amount ";
	cin >> amount;
	calculatedbill( day, amount);
	return 0;
}
void calculatedbill(string day, int amount)
{
	if (day == "sunday")
	{
		float discount = amount * (10.0 / 100.0);
		float totalamount = total - discount;
		cout << "your amount after discount is " << totalamount;
	}
}
