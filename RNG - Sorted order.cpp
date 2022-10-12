#include <iostream>
#include <algorithm>
#include <windows.h>
#include <time.h>   //Véletlen szám generátorhoz kell


/*
Egész véletlen szám generálás [A,B] intervallum között.
Szabály: sz=rand()%(B-A+1)+A;
         sz=rand()%(B+1);  [1;B]

Pl.: [-20,25]   sz=rand()%(25-(-20)+1)+(-20);
Pl.: [5,30]     sz=rand()%( 26 )+ 5 ;                     (30-5+1)=26 */



using namespace std;

int main()
{

//RNG Generator

cout << "Generating 20 random numbers, and then sorting them out"<<endl;
cout <<" "<<endl;

    srand(time(NULL));  //RNG Alaphelyzetbe tétele
    int sz[20];
    for (int i = 0; i <20; i++)
    {
        system("Color 1A");
        sz[i] = rand() % (51) +50;
        cout << sz[i] << " ";
    }

    cout <<" "<<endl;
    cout <<" "<<endl;

//Sorting the RNG Generated numbers

cout << "RNG Numbers in order"<<endl;
cout <<" "<<endl;

sort (sz,sz+20);
for (int i = 0; i <20; i++)
    {
        system("Color 1A");
        cout << sz[i] << " ";
    }


    return 0;
}
