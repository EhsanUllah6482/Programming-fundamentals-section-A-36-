#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter your name :_" << endl;
    cin >> name;
    int number1;
    cout << "Enter marks of first subject :_ " << endl;
    cin >> number1;
    int number2;
    cout << "Enter marks of second subject :_" << endl;
    cin >> number2;
    int number3;
    cout << "Enter marks of third subject :_" << endl;
    cin >> number3;
    int number4;
    cout << "Enter marks of fourth subject :_" << endl;
    cin >> number4;
    int number5;
    cout << "Enter marks of fifth subject :_" << endl;
    cin >> number5;
    int add;
    int multiply;
    float division;
    add = number1 + number2 + number3 + number4 + number5;
    division = add / 500.0;
    float percentage;
    percentage = division * 100;
    cout << "Your percentage for five subjects is " << percentage;
}