#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>
#include <windows.h>
#include <cstdlib>
void przenies_kursor(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void textcolor(int a)
{
    HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, a );

}

using namespace std;
int main()
{
    textcolor(15);
    srand(time(NULL));
    int ruletka, x=30, coins=500, bet, ilosc;
    while(coins!=0)
    {
        cout<<"Twoje punkty: "<<coins<<endl;

        cout<<"[1] Czerwone"<<endl<<"[2] Zielone"<<endl<<"[3] Czarne"<<endl<<"Wybierz: ";
        cin>>bet;
        cout<<"Ilosc punktow: ";
        cin>>ilosc;
        for(int i=0;i<20;i++)
        {
            ruletka=rand()%100;
            przenies_kursor(20, 5);
            Sleep(100+i*i);
            if(i%2==1)
            {
                textcolor(8);
                cout<<"Czarne            ";
            }
                else
                {

                 textcolor(12);
                cout<<"Czerwone        ";}

        }
        przenies_kursor(20, 5);
        ruletka=rand()%50;
        if(ruletka==25)
            {
                textcolor(3);
                cout<<"Zielone";
            }

        if(ruletka%2==1)
            {
                textcolor(8);
                cout<<"Czarne";
            }
                else
                  {

                   textcolor(12);
                cout<<"Czerwone";}
        if(ruletka==25 && bet==2)
        {
            coins=coins-ilosc+(ilosc*14);


        }else
        {
        if(bet==1 && ruletka%2==0)
        {
            coins=coins+ilosc;
        }else
        {
            if(bet==3 && ruletka%2==1)
                coins=coins+ilosc;
            else
                coins=coins-ilosc;
        }

        }
        getch();
textcolor(15);
system( "cls" );
}cout<<endl<<endl<<"RIP"<<endl;
}
