#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <fstream>
// JUSTYNA REPLIN
// PROGRAM MIERZACY CZAS SORTOWANIA BABELKOWEGO
using namespace std;
int ile;
double czas;
clock_t start, stop;
void bubble_sort(int *tab, int n){      //nazwa tablicy jest adresem jej zerowego elementu

    for(int i=1; i<n; i++){
        for(int j=n-1; j>=1; j--){
            if(tab[j]<tab[j-1]){
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}
void wypisz_losowanie( int *tab, int n){
    cout << "Wylosowane liczby to:\n"<<endl;
    for(int i=0; i<n; i++){
    cout << tab[i]<<" ";
    }
}
void wypisz_sortowanie( int *tab, int n){
    cout << "\nPodane liczby po sortowaniu:\n"<<endl;
    for(int i=0; i<n; i++){
    cout << tab[i]<<" ";
    }
}

int main()
{   int ile;
    cout << "Generator liczb losowych z zakresu do 100.000 - sortowanie babelkowe." << endl;
    cout << "Ile liczb chcesz wylosowac?" << endl;
    cin>> ile;

    int i;
    int *tablica;    //dynamiczna alokacja tablicy
    tablica=new int[ile];
    srand(time(NULL));
    for(i=0; i<ile; i++){
        tablica[i]= rand()% 100000+1;
    }
    wypisz_losowanie(tablica, ile);
    start= clock();
    bubble_sort(tablica, ile);
    stop =clock();
    wypisz_sortowanie(tablica, ile);
    czas=(stop-start) / CLOCKS_PER_SEC;
    cout<< "\n Czas sortowania to:"<< czas<< "s"<<endl;
    fstream plik;
    plik.open("wyniki.txt", ios::out | ios::app);  // ZAPIS CZASU SORTOWANIA W PLIKU TEKSTOWYM
    plik<< czas<<"s   "<< ile<< endl;
    plik.close();
    delete []tablica;
    return 0;
}
