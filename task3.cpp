#include <iostream>
using namespace std;
void add(int num1, int num2);
void multiply(int num1, int num2);
void division(int num1, int num2);
void subtract(int num1, int num2);
main()
{
    int firstnumer, numbersecond;
    cout << "enter first number";
    cin >> firstnumer;
    cout << "enter 2nd number";
    cin >> numbersecond;
    char choice;
    cin >> choice;
    if (choice == '+')
    {
        add(firstnumer, numbersecond);
    }
    if (choice == '*')
    {
        multiply(firstnumer, numbersecond);
    }
    if (choice == '/')
    {
        division(firstnumer, numbersecond);
    }
    if (choice == '-')
    {
        subtract(firstnumer, numbersecond);
    }
}
void add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    cout << "the sum is " << sum;
}
void multiply(int num1, int num2)
{
    int multiply;
    multiply = num1 * num2;
    cout << "the multiply is " << multiply;
}
void division(int num1, int num2)
{
    float division;
    division = num1 / num2;
    cout << "the division is " << division;
}
void subtract(int num1, int num2)
{
    int subtract;
    subtract = num1 - num2;
    cout << "the subtract is " << subtract;
}