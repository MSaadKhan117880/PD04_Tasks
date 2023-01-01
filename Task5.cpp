#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int,int);

int main()
{
  int x=50;
  int y=20;
  system("cls");
  gotoxy(x,y);
  cout<<"Muhammad Saad Khan";
  
  return 0;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}