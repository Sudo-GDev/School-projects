
#include <iostream>

//Negyzet or teglalap

using namespace std;

int main()
{
    cout << "Kerem a negyszog oldalait" << endl;
    int a;
    int b;
    cout << "a:"; cin>>a;
    cout << "b:"; cin>>b;
    if (a==b){cout<<"Ez egy negyzet";} else {cout<<"Ez egy teglalap!";}
    if (a<1)
    {
        cout<<"Nem szerkeztheto negyszog";}
        return 0;
    if (b<1)
    {
        cout<<"Nem szerkeztheto negyszog";}
        return 0;

    cout<<"\nTerulete:"<<a*b;
    cout<<"\n\n";

    return 0;
}
