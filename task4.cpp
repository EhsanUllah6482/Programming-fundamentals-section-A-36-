#include<iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );
void printmaze();
void playermove(int x,int y);

main(){

system("cls");
printmaze();
int x=6;
int y=6;
while(true){
playermove( x,y);
if(x<20){
x=x+1;
	}
if(x==20){
gotoxy(x-1,y);
cout<<" ";
x=6;
	}
}

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