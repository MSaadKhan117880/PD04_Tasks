#include<iostream>
#include<windows.h>

using namespace std;

void playerMove(int , int);
void gotoxy (int, int);
void printMaze();

int main()              
{
int x = 3;
int y = 2;
system("cls");
printMaze();
	while(y<9)
	{
            playerMove(x,y);
            if(y < 10)
            {
                 y = y + 1;
            }
            if(y == 10)
	    {
               gotoxy(x,y-1);
               cout<<" ";
               y = 2;
            }
	}
return 0;
}

void printMaze()
{
cout<<"###########################"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"###########################"<<endl;
}


void gotoxy (int x, int y)
    {
         COORD coordinates;    
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);       
    }

void playerMove(int x, int y)
{
gotoxy(x,y-1);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}