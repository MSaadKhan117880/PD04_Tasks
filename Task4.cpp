#include<iostream>
#include<windows.h>

using namespace std;

void playerMove(int , int);
void gotoxy (int, int);
void printMaze();

int main()              
{
int x = 3;
int y = 3;
system("cls");
printMaze();
	while(true)
	{
            playerMove(x,y);
            if(x < 23)
            {
                 x = x + 1;
            }
            if(x == 23)
	    {
               gotoxy(x-1,y);
               cout<<" ";
               x = 3;
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
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}