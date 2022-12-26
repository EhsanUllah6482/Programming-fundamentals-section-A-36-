#include <iostream>
using namespace std;
int main()
{
    float vegetable_price;
    cout << "Enter vegetable price per kilogram ";
    cin >> vegetable_price;
    float fruit_price;
    cout << "Enter fruit price per kilogram ";
    cin >> fruit_price;
    int vegetables_kg;
    cout << "Enter total kilogram of vegetables ";
    cin >> vegetables_kg;
    int fruit_kg;
    cout << "Enter total kilogram of fruit ";
    cin >> fruit_kg;
    float vegetables_cost;
    vegetables_cost = vegetable_price * vegetables_kg;
    float fruit_cost;
    fruit_cost = fruit_price * fruit_kg;
    float total;
    total = (vegetables_cost + fruit_cost) / 1.94;
    cout << total;
    cout << "The total earning from the harvest is " << total;
    return 0;
}