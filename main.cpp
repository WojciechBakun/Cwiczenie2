#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void gotoxy( int x, int y )
  {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int main()
{
    int x=40, y=1, wiersze=10, gwiazdki=1;
    cout<<"Podaj liczbe wierszy trojkata: ";
    cin>>wiersze;

    gotoxy(x,y);

    for(int i=0; i<wiersze; i++){
        gotoxy(x,y);
        for(int i = 0; i < gwiazdki; i++)
        {
            cout<<"*";
        }
        gwiazdki=gwiazdki+2;
        x--;
        y++;
    }
}
