#include <iostream>
#include <time.h>       //véletlenszám generáláshoz kell
#include <algorithm>
using namespace std;

int main()
{

	srand(time(NULL)); //véletlenszám generátor alaphelyzetbe
	int sz[50];
	cout<<"Veletlenszamok generalasa:\n";
	int db=0;
	for (int i = 0; i < 50; i++)
	{
		sz[i] = rand()%(6)+1;
        cout << sz[i] << " ";
	}
    int s[7]={};
    float osszesen=0;
    for (int i = 0; i < 50; i++)
	{
	    s[sz[i]]++;
	    osszesen+=sz[i];
	}
    int maximum=0;
    int minimum=s[1];
    int dobasmax;
    int dobasmin;
    for (int i = 1; i < 7; i++)
	{
	   if(s[i]>maximum)
       {
           maximum=s[i];
           dobasmax=i;
       }
       if(s[i]<minimum)
       {
           minimum=s[i];
           dobasmin=i;
       }
	}
    cout<<"\nA legtobbszor dobott szam: ";
    cout<<dobasmax;
    cout<<"\nDarabszam: "<<maximum;
    cout<<"\nA legkevesebbszer dobott szam: "<<dobasmin;
    cout<<"\nDarabszam: "<<minimum;
    cout<<"\nA dobasok atlaga: "<<osszesen/50;
	cout << "\n\n\n";

	return 0;
}
