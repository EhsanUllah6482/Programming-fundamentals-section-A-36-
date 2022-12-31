#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
system("cls");
cout<<"test";
gotoxy(10,5);
cout<<"my name is ehsan ullah";
}
void gotoxy(int x,int y){

COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}