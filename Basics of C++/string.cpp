#include <iostream>

//Negyzet or teglalap

using namespace std;

int main()
{
string vnev;
string knev;
string tnev;
string k;

cout <<"vezeteknevet kerem hihi:"<<endl;
cout <<" "<<endl;
cin>>vnev;
cout <<" "<<endl;
cout <<" "<<endl;

cout <<"keresztnev:"<<endl;
cout <<" "<<endl;

cin>>knev;
cout <<" "<<endl;
cout <<" "<<endl;

cout <<"monogramja:"<<endl;

cout <<" "<<endl;
cout <<" "<<endl;

cout <<vnev[0]<<"." <<knev[0]<<".";
cout <<"teljes nev:";

//teljes nev betui

tnev=vnev+" "+knev;
cout <<tnev;
cout <<"teljes neve betui:" <<tnev.length();

//nev betu kereses

cout <<"kerem a keresett karaktert:";
cin>>k;
if (tnev.find(k)<tnev.length())
cout <<"Van benne ez a betu";
else
    cout <<"Nincs benne";

    return 0;
}
