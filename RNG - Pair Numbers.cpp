#include <iostream>
#include <algorithm>
#include <windows.h>
#include <time.h>   //V�letlen sz�m gener�torhoz kell


/*
Eg�sz v�letlen sz�m gener�l�s [A,B] intervallum k�z�tt.
Szab�ly: sz=rand()%(B-A+1)+A;
         sz=rand()%(B+1);  [1;B]

Pl.: [-20,25]   sz=rand()%(25-(-20)+1)+(-20);
Pl.: [5,30]     sz=rand()%( 26 )+ 5 ;                     (30-5+1)=26 */



using namespace std;

int main()
{

//RNG Generator

cout << "Generating random numbers between 50 and 100, but all numbers have to be pair numbers"<<endl;
cout <<" "<<endl;
int db=0;

    srand(time(NULL));  //RNG Alaphelyzetbe t�tele
    int sz;
    for (int i = 0; db <20; i++)
    {
        system("Color 1A");
        sz = rand() % (51) +50;
        if (sz % 2 ==0)
        {
            cout << sz << " ";
            db++;
        }

    }

    cout <<" "<<endl;


    return 0;
}
