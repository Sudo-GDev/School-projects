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



cout << "Generating 20 random numbers, and then printing min, max, average values"<<endl;
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

//Sorting

sort (sz,sz+20);

//Minimum value

cout <<"Minimum value - ";
cout << sz[0] << " "<<endl;

//Maximum value

reverse (sz,sz+20);

cout <<"Maximum value - ";
cout << sz[0] << " "<<endl;

//Average value

float ossz;

cout <<"Average value - ";
for (int i = 0; i <20; i++)

ossz=ossz+sz[i];

cout << ossz/20 <<endl;

    return 0;
}
