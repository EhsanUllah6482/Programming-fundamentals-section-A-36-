#include <iostream>
using namespace std;
void check(int n);
int main()
{
    while (true)
    {
        int n;
        cin >> n;

        check(n);
    }
}
void check(int n)
{
    if (n % 2 == 0)
    {
        cout << "number is even";
        cout << endl;
    }
    if (n % 2 != 0)
    {
        cout << "number is odd";
        cout << endl;
    }
}