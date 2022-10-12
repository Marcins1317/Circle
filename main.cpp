#include <iostream>
#include <math.h>

using namespace std;


class Punkt
{
    float x,y;
    string nazwa;

    public:
        void wyswietl()
        {
        cout << nazwa << "(" << x << "," << y << ")" << endl;
        }
    Punkt(string n="S", float a=0, float b=0)
    {
    nazwa =n;
    x=a;
    y=b;
    }

};

    class Kolo :public Punkt //klasa kolo dziedziczy z klasy pkt
{
    float r;
    string nazwa;

    public:
    void wyswietl()
    {
    cout << "Kolo o nazwie: " << nazwa << endl;
    cout << "Srodek Kola: " << endl;
    Punkt::wyswietl();
    cout << "Promie: " << r << endl;
    cout << "Pole Kola: " << M_PI*r*r << endl;
    }
    Kolo (string  nk="kolko", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
    nazwa =nk;
    r=pr;

    }

};
int main()
{
  Kolo k1;
  k1.wyswietl();
}
