#include<iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );
void printmaze();
void playermove(int x,int y);

main(){

system("cls");
printmaze();
int x=5;
int y=6;
playermove( x,y);
}
void playermove(int x,int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(500);

}

void printmaze()
{
cout<<"*********************"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*********************"<<endl;
}
void gotoxy(int x,int y){

COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}