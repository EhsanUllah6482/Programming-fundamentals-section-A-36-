#include <iostream>
using namespace std;
void iseligible(int enteredage);
int main()
{
    while (true)
    {
        int age;
        cout << "enter your age";
        cin >> age;
        iseligible(age);
    }
    return 0;
}
void iseligible(int enteredage)
{
    if (enteredage >= 18)
    {
        cout << "you are eligible ";
    }
    if (enteredage < 18)
    {
        cout << "you are not eligible ";
    }
    cout << endl;
}