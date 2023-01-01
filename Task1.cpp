#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy (int, int);
void printMaze();

int main()              
{
system("cls");
cout<<"Test";
gotoxy(15,15);
cout<<"My name is M.Saad Khan";

return 0;
}




void gotoxy (int x, int y)
    {
         COORD coordinates;    
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);       
    }