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

cout << "Generating 10 random numbers"<<endl;
cout <<" "<<endl;

    srand(time(NULL));  //RNG Alaphelyzetbe t�tele
    int sz;
    for (int i = 0; i <10; i++)
    {
        system("Color 1A");
        sz = rand() % (46) -20;
        cout << sz << " ";
    }

    cout <<" "<<endl;


    return 0;
}
