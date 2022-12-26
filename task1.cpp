#include <iostream>
using namespace std;

void displaydetail(string s, int m, char a, float ag);

main()
{
	string name;
	cout << "Enter your name ";
	cin >> name;
	int marks;
	cout << "Enter your marks ";
	cin >> marks;
	char section;
	cout << "Enter your section ";
	cin >> section;
	float aggregate;
	cout << "Enter your arregate ";
	cin >> aggregate;
	displaydetail(name, marks, section, aggregate);
	cout << endl
		 << endl;
}
void displaydetail(string s, int m, char a, float ag)
{
	cout << "your name is " << s;
	cout << endl;
	cout << "your marks are " << m;
	cout << endl;
	cout << "your section is " << a;
	cout << endl;
	cout << "your aggregate is " << ag;
}