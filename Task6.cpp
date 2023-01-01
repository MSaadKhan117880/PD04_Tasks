#include<iostream>
#include<windows.h>

using namespace std;

void printA();
void printW();
void printA2();
void printI();
void printS();

void gotoxy(int, int);

int main()
{
    system("cls");
    printA();
    printW();
    printA2();
    printI();
    printS();

    return 0;
}

void printA()
{
    gotoxy(0, 7);
    cout << "                  **      " << endl;
    gotoxy(0, 8);
    cout << "                **  **    " << endl;
    gotoxy(0, 9);
    cout << "               **    **   " << endl;
    gotoxy(0, 10);
    cout << "              **      **  " << endl;
    gotoxy(0, 11);
    cout << "              ** **** **  " << endl;
    gotoxy(0, 12);
    cout << "              **      **  " << endl;
    gotoxy(0, 13);
    cout << "              **      **  "  ;
}

void printW()
{
    gotoxy(0, 14);
    cout << "     **            ^            ** " << endl;
    gotoxy(0, 15);
    cout << "      **         ** **         **  " << endl;
    gotoxy(0, 16);
    cout << "       **       **   **       **   " << endl;
    gotoxy(0, 17);
    cout << "         **    **     **     **    " << endl;
    gotoxy(0, 18);
    cout << "          ** **         ** **      " << endl;
    gotoxy(0, 19);
    cout << "            V             V        "  ;
}

void printI()
{
    gotoxy(0, 20);
    cout << "               *********** " << endl;
    gotoxy(0, 21);
    cout << "                   ***     " << endl;
    gotoxy(0, 22);
    cout << "                   ***     " << endl;
    gotoxy(0, 23);
    cout << "                   ***     " << endl;
    gotoxy(0, 24);
    cout << "                   ***     " << endl;
    gotoxy(0, 25);
    cout << "                   ***     " << endl;
    gotoxy(0, 26);
    cout << "               *********** " ;
}

void printA2()
{
    gotoxy(0, 27);
    cout << "                  **       " << endl;
    gotoxy(0, 28);
    cout << "                **  **     " << endl;
    gotoxy(0, 29);
    cout << "               **    **    " << endl;
    gotoxy(0, 30);
    cout << "              **      **   " << endl;
    gotoxy(0, 31);
    cout << "              ** **** **   " << endl;
    gotoxy(0, 32);
    cout << "              **      **   " << endl;
    gotoxy(0, 33);
    cout << "              **      **   "  ;
}

void printS()
{
    gotoxy(0, 34);
    cout << "                *********   " << endl;
    gotoxy(0, 35);
    cout << "                ***         " << endl;
    gotoxy(0, 36);
    cout << "                  ***       " << endl;
    gotoxy(0, 37);
    cout << "                    **      " << endl;
    gotoxy(0, 38);
    cout << "                     *      " << endl;
    gotoxy(0, 39);
    cout << "              *********     " ;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}