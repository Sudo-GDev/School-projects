#include <iostream>
#include <algorithm>
#include <time.h>
#include <windows.h>        //veletlen szam generalashoz kell



using namespace std;

int main()
{
    srand(time(NULL)); //veletlen szam generator alaphelyzetbe állítása
//egyesz veletten szam generalas [A,B] intervalluk kozott.
//szabaly: sz=rand()%(B-A+1)+A;
//pl.: [-20,25] sz=rand()%(25-(-20)+1)+(-20);
//[5,30] sz=rand()%(30-5+1)+5
system ( "color 0A");

int sz[10]={600,410,420,223,934,1035,434,534,543,402};
int maximum=0;
int szam=0;
int maximum2=0;
int maximum3=0;
int szam2=0;
int szam3=0;


for(int i=0;i<10;i++)
{
    system("Color 1A");
    cout<<sz[i]<< " ";
}
for(int i=1;i<10;i++)
{
    if(sz[i]>maximum)
    {
        maximum=sz[i];
        szam=i+1;
    }
}
cout<< endl;
cout<< "\n "<< "1. helyezett: "<<szam<< "."<< "versenyzo:"<<maximum<< "cm ";

for(int i=1;i<10;i++)
{
    if(sz[i]>maximum2 and sz[i]!=maximum)
    {
        maximum2=sz[i];
        szam2=i+1;
    }
}
cout<< "\n "<< "2. helyezett: "<<szam2<< "."<< "versenyzo:"<<maximum2<< "cm ";

for(int i=1;i<10;i++)
{
    if(sz[i]>maximum3 and sz[i]!=maximum2 and sz[i]!=maximum)
    {
        maximum3=sz[i];
        szam3=i+1;
    }
}

cout<< "\n "<< "3. helyezett: "<<szam3 <<"."<< "versenyzo:"<<maximum3<< "cm ";
cout<< "\n\n\n";


    return 0;
}

