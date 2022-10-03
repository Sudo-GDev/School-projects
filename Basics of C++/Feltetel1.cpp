#include <iostream>

using namespace std;

int main()
{
    cout << "Hello GoodTimeWithGD!" << endl;
    int sz1; int sz2;
    cout << "Kerek egy szamot";
    cin  >>sz1;
    cout << "Kerek egy masik szamot";
    cin >>sz2;
    cout << "Osszegzunk:"<<sz1+sz2;
    cout <<sz1+sz2;
    cout << "Hanyadosuk:";
    cout <<1.0*sz1/sz2;
    if(sz1>sz2)
    {cout << "Az elso szam nagyobb";}
    if(sz2>sz1)
    {cout << "A masodik szam nagyobb";}
    if(sz1=sz2)
    {cout << "A ket szam egyenlo";}
    return 0;
}
