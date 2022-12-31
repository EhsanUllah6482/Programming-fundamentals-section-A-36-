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
int y=2;
while(true){
playermove( x,y);
if(y<8){
y=y+1;
	}
if(y==8){
gotoxy(x,y-1);
cout<<" ";
y=7;
	}
}

}
void playermove(int x,int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(1000);

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