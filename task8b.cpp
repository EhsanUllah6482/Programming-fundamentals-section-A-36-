/*With the help of a modulus operator, write a program that takes a 4-digit number from the
user and sums individual digits.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any four digit number ";
    cin >> n;
    int store1;
    store1 = n % 10;
    // cout << store1; // 4
    // cout << endl;
    int store2;
    store2 = n / 10; // 123
    // cout << store2;
    // cout << endl;
    int store3;
    store3 = store2 % 10;
    // cout << store3; // 3
    // cout << endl;
    int store4 = store2 / 10;
    // cout << store4 << endl; // 12
    int store5;
    store5 = store4 % 10;
    // cout << store5 << endl; // 2
    int store6 = store4 / 10;
    // cout << store6 << endl; // 1
    int store7 = store6 % 10;
    // cout << store7 << endl; // 1
    int sum = store1 + store3 + store5 + store7;
    cout << "The sum of entered four numbers is " << sum;
    return 0;
}