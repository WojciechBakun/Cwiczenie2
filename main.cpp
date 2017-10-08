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
    int x=40, y=6, wiersze=10, gwiazdki=1, trojkat;
    cout<<"Podaj liczbe wierszy trojkata: ";
    cin>>wiersze;
    cout<<endl<<"Podaj typ trojkata \n [1] - normalny \n [2] - z odstepami \n Twoj wybor: ";
    cin>>trojkat;
    gotoxy(x,y);

    switch (trojkat){
    case 1:
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
        break;
    case 2:
        for(int i=0; i<wiersze; i++){
        gotoxy(x,y);
        for(int i = 0; i < gwiazdki; i++)
        {
            if(i%2==0){
                cout<<"*";
            } else
                cout<<" ";
        }
        gwiazdki=gwiazdki+2;
        x--;
        y++;
        }
        break;
    default:
        cout<<"Nie ma takiego wyboru, prawidlowe opcje to [1] lub [2]!";
        break;
    }
}
