/*Task 10(CP):
Write a program that takes 5 integers from the user and displays their sum on screen. But
You can only use two variables*/
#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "enter number one ";
    cin >> number1;
    cout << "enter number two ";
    cin >> number2;
    number2 = number1 + number2;
    cout << "enter number three ";
    cin >> number1;
    number2 = number1 + number2;
    cout << "enter number four ";
    cin >> number1;
    number2 = number1 + number2;
    cout << "enter number five ";
    cin >> number1;
    number2 = number1 + number2;
    cout << "The sum of your entered numbers is " << number2;
    return 0;
}