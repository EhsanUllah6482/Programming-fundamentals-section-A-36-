#include <iostream>
using namespace std;
void addition(int a, int b);
main()
{

    int number1, number2;
    cout << "enter number one ";
    cin >> number1;
    cout << "enter number second ";
    cin >> number2;
    addition(number1, number2);
}
void addition(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "the sum is " << sum;
}