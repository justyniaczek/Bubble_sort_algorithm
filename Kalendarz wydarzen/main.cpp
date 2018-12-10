#include <iostream>
#include "Event.h"

using namespace std;

int main()
{   string nazwa;
    int dzien,miesiac,rok,godzina,minuta;
    cout << "Witaj w programie!" << endl;
    cout << "Wprowadz nazwe wydarzenia!" << endl;
    cin>> nazwa;
     cout << "Wprowadz dzien wydarzenia!" << endl;
     cin>> dzien;
     cout << "Wprowadz miesiac wydarzenia!" << endl;
     cin>> miesiac;
     cout << "Wprowadz rok wydarzenia!" << endl;
     cin>> rok;
     cout << "Wprowadz godzine wydarzenia!" << endl;
     cin>> godzina;
     cout << "Wprowadz minute wydarzenia!" << endl;
     cin>> minuta;

    Event wydarzenie(nazwa,dzien,miesiac,rok,godzina,minuta);
    wydarzenie.show();

    return 0;
}
