#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void clear(int x,int y,char previous);
void clear1(int x,int y,char previous1);
void showpacman(int x,int y);
void showghost(int x,int y);
void showghost1(int x1,int y1);
char getCharAtxy(short int x,short int y);
main()
{
    int gx = 1;
    int gy = 1;
    int gx1 = 5;
    int gy1 = 5;
    string direction = "right";
    char previouschar = ' ';
    char previouschar1 = ' ';
    system("cls");
    printmaze();
    showghost(gx,gy);
    showghost1(gx1,gy1);
    while(true)
    {
        Sleep(100);
        if(direction == "right")
        {
            char nextlocation = getCharAtxy(gx+1,gy);
            if(nextlocation == '%')
            {
                direction = "left";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx,gy,previouschar);
                gx = gx + 1;
                previouschar = nextlocation;
                showghost(gx,gy);
            }
        }
        if(direction == "left")
        {
            char nextlocation = getCharAtxy(gx-1,gy);
            if(nextlocation == '%')
            {
                direction = "right";
            }
            else if(nextlocation == ' ' || nextlocation == '.')
            {
                clear(gx,gy,previouschar);
                gx = gx - 1;
                previouschar = nextlocation;
                showghost(gx,gy);
            }
        }
        if(direction == "right")
        {
            char nextlocation1 = getCharAtxy(gx1+1,gy1);
            if(nextlocation1 == '%')
            {
                direction = "left";
            }
            else if(nextlocation1 == ' ' || nextlocation1 == '.')
            {
                clear(gx1,gy1,previouschar1);
                gx1 = gx1 + 1;
                previouschar1 = nextlocation1;
                showghost1(gx1,gy1);
            }
        }
        if(direction == "left")
        {
            char nextlocation1 = getCharAtxy(gx1-1,gy1);
            if(nextlocation1 == '%')
            {
                direction = "right";
            }
            else if(nextlocation1 == ' ' || nextlocation1 == '.')
            {
                clear(gx1,gy1,previouschar1);
                gx1 = gx1 - 1;
                previouschar1 = nextlocation1;
                showghost1(gx1,gy1);
            }
        }
    }
}
void printmaze()
{
        cout << "#######################################" << endl;
        cout << "#                            %  .     #" << endl;
        cout << "#          %                          #" << endl;
        cout << "#                                     #" << endl;
        cout << "#    .                 %              #" << endl;
        cout << "#                                     #" << endl;
        cout << "#         %                        .  #" << endl;
        cout << "#######################################" << endl;
}
void gotoxy(int x,int y)
    {
        COORD coordinates;
        coordinates.X = x;
        coordinates.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }
void clear(int x,int y,char previous)
    {
        gotoxy(x,y);
        cout << previous;
    }
 void clear1(int x,int y,char previous1)
    {
        gotoxy(x,y);
        cout << previous1;
    }
void showghost(int x,int y)
{
    gotoxy(x,y);
    cout <<"G";
}
void showghost1(int x1,int y1)
{
    gotoxy(x1,y1);
    cout <<"G";
}
char getCharAtxy(short int x,short int y)
{
        CHAR_INFO ci;
        COORD xy = {0,0};
        SMALL_RECT rect = {x,y,x,y};
        COORD coordBufSize;
        coordBufSize.X = 1;
        coordBufSize.Y = 1;
       return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}