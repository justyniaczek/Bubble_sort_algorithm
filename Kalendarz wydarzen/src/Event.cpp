#include "Event.h"
#include <iostream>
using namespace std;

void Event::load(){
       cout<<endl<<"Nazwa wydarzenia: ";
        cin>> name;
        cout<< endl<<"Dzien wydarzenia: ";
        cin>> day;
        cout<< endl<<"miesiac wydarzenia: ";
        cin>> month;
        cout<< endl<<"rok wydarzenia: ";
        cin>> year;
        cout<< endl<<"hour wydarzenia: ";
        cin>> hour;
        cout<< endl<<"minuty wydarzenia: ";
        cin>> minutes;
}

void Event::show(){
cout<< name<<endl<<day<< "."<<month<<"."<<year<<endl<<hour<<":"<<minutes<<endl;
}

Event::Event(string n, int d, int mies,int rok, int godz, int minu){
name=n;
day=d;
month=mies;
year=rok;
hour=godz;
minutes=minu;
}

Event::~Event()
{
    cout<< "UZYCIE DESTRUKTORA"<<endl;
}

