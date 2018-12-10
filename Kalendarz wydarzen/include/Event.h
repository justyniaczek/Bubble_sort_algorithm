#include <iostream>
using namespace std;
///SPIS ATRYBUTOW I METOD
class Event
{
    int day,month,year;
    int hour, minutes;
    string name;
    public:
    Event(string, int, int, int, int, int);
    ~Event();
    void load();
    void show();
};

