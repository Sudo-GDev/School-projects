#include <iostream>
#include <algorithm>

//joe

using namespace std;

int main()
{

    //szamok kiirasa

    int t[12]={-5,-2,-1,0,2,3,4,5,6,7,8,9};
    cout <<"a tomb elemei: "<< endl;
    for (int i=0; i<12; i++)
    {
        cout <<t[i]<<" ";
    }

    //Paros szamok

    int talalt=0;
    for (int i=0; i<12; i++)
    {
        if (t[i]%2==0)
        talalt=1;
    }

    //paros vagy paratlan

    if (talalt==1)cout <<"Van benne paros szam";
    else cout <<"Nincs benne paros szam";

    return 0;
}
