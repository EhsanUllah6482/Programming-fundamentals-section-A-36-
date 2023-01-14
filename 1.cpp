#include <iostream>
using namespace std;
int main()
{
    string temp, humidity;
    cin >> temp;
    cin >> humidity;
    if (temp == "warm" && humidity == "dry")
    {
        cout << "play tennis\t";
    }
    if (temp == "warm" && humidity == "humid")
    {
        cout << "swim\t";
    }
    if (temp == "cold" && humidity == "dry")
    {
        cout << "play basketball";
    }
    if (temp == "cold" && humidity == "humid")
    {
        cout << "watch tv";
    }
    return 0;
}