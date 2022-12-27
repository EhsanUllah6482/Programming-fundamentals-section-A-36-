#include <iostream>
using namespace std;
void add(int number1, int number2);
void subtract(int number1, int number2);
void multiply(int number1, int number2);
void division(int number1, int number2);
int main()
{
    int number11, number22;
    cout << "enter number one:-";
    cin >> number11;
    cout << "enter number one:-";
    cin >> number22;
    add(number11, number22);
    cout << endl;
    subtract(number11, number22);
    cout << endl;
    multiply(number11, number22);
    cout << endl;
    division(number11, number22);
    cout << endl;
    return 0;
}
void add(int number1, int number2)
{
    int sum;
    sum = number1 + number2;
    cout << "the sum of " << number1 << " and " << number2 << "is :_" << sum;
    cout << endl;
}
void subtract(int number1, int number2)
{
    int subtract;
    subtract = number1 - number2;
    cout << "the sum of " << number1 << " and " << number2 << "is :_" << subtract;
    cout << endl;
}
void multiply(int number1, int number2)
{
    int multiply;
    multiply = number1 * number2;
    cout << "the sum of " << number1 << " and " << number2 << "is :_" << multiply;
    cout << endl;
}
void division(int number1, int number2)
{
    int division;
    division = number1 / number2;
    cout << "the sum of " << number1 << " and " << number2 << "is :_" << division;
    cout << endl;
}