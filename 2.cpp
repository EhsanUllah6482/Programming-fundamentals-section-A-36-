#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3, marks4, marks5;
    cout << "enter first subject marks... ";
    cin >> marks1;
    cout << "enter second subject marks... ";
    cin >> marks2;
    cout << "enter third subject marks... ";
    cin >> marks3;
    cout << "enter fourth subject marks... ";
    cin >> marks4;
    cout << "enter fifth subject marks... ";
    cin >> marks5;
    float add = (marks1 + marks2 + marks3 + marks4 + marks5) / 500.0 * 100.0;
    // cout << add;
    if (add >= 90)
    {
        cout << "A+";
    }
    if (add >= 80 && add < 90)
    {
        cout << "A";
    }
    if (add >= 70 && add < 80)
    {
        cout << "B+";
    }
    if (add >= 60 && add < 70)
    {
        cout << "B";
    }
    if (add >= 50 && add < 60)
    {
        cout << "C";
    }
    return 0;
}