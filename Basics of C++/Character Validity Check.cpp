#include <iostream>
#include <algorithm>
#include <windows.h>
//Feladat: Egy tombot kell letrehozni char tipusban amely 10 elemu, a kodba vegyuk fel a kezdoertekeket.
//2 kepernyore az elemeket kiirni
//rendezzuk a tomb elemeit
//ismet irjuk ki a tomb elemeit
//kerjunk be billentyuzetrol egy karaktert, dontsuk el hogy benne van e a tombbe


using namespace std;

int main()
{

//Tomb letrehozasa + elemek kiirasa

char t[10]={'x','w','f','d','e','b','c','q','a','o'};
int i;

cout <<"A tomb elemei: "<<endl;
cout <<" "<<endl;
for (int i=0; i<10; i++)
{
    system("Color 1A");
    cout <<t[i]<<" ";
}

cout <<" "<<endl;
cout <<" "<<endl;

//rendezes

sort(t,t+10);
cout <<"Rendezett tomb elemei: "<<endl;
cout <<" "<<endl;
for (int i=0; i<10; i++)
{
    system("Color 1A");
    cout <<t[i]<<" ";
}

cout <<" "<<endl;
cout <<" "<<endl;

//karakter eldontese

string sz;

cout <<"Character validity check"<<endl;
cout <<">_ ";
cin >>sz;

 if (sz.find(t[i]) != string::npos )
    {
        cout<<"Yes, string contains the character - "<< t << endl;
    }
    else
    {
        cout<<"No, string do not contains the character - "<< t << endl;
    }

    return 0;
}

//end of code here
