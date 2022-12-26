#include <iostream>
using namespace std;
void print(string yname);
main()
{
    string yname;
    while (true)
    {
        cout << "enter your name";
        cin >> yname;
        print(yname);
    }
} 
void print(string yname)
{
    cout << "your name is " << yname;
}
