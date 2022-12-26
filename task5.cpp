#include <iostream>
using namespace std;
main()
{
    int weight;
    cout << "Enter the weight you want to lose:_" << endl;
    cin >> weight;
    float days;
    days = weight * 15;
    cout << "It will take you " << days << " days to lose " << weight << "kg";
}