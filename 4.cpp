#include <iostream>
using namespace std;
int main()
{
    char servicecode;
    cout << "enter your service code...";
    cin >> servicecode;
    int minutes;
    int charges;
    cout << "enter number of minutes you used...";
    cin >> minutes;

    if (servicecode == 'r' || servicecode == 'R')
    {
        if (minutes <= 50.0)
        {
            cout << "no charges";
        }
        if (minutes > 50)
        {
            float minus = minutes - 50.0;
            // cout << minus;
            float over = (minus * 0.20) + 10.0;
            cout << "your charges are..." << over;
        }
    }
    if (servicecode == 'p' || servicecode == 'P')
    {
        char day, night;
        cout << "enter day or night service...";
        cin >> day;
        if (day == 'd')
        {
            if (minutes <= 75)
            {
                int premium = 25;
                cout << "your charges are " << premium;
            }
            if (minutes > 75)
            {
                int minus = minutes - 75;
                float over = (minus * 0.10) + 25.0;
                cout << "your charges are..." << over;
            }
        }
        if (day == 'n')
        {
            if (minutes <= 100)
            {
                int premium = 25;
                cout << "your charges are  " << premium;
            }
            if (minutes > 100)
            {
                int minus = minutes - 100;
                float over = (minus * 0.05) + 25.0;
                cout << "your charges are..." << over;
            }
        }
    }
    else
    {
        cout << "errror";
    }
    return 0;
}