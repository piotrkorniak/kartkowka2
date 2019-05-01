//Napisz klasę Figura, zawierającą czysto wirtualną metodę float pole().
//Napisz klasy Kwadrat oraz Kolo, dziedziczące publicznie po Figura. Obie klasy powinny
//zawierać prywatne pole opisujące ich rozmiar (dla kwadratu będzie to długość boku, dla koła
//promień). Pola powinny być inicjalizowane w konstruktorach klas (rozmiar będzie przekazywany
//jako argument konstruktora).
//W klasach Kwadrat oraz Kolo zdefiniuj metodę pole() tak, aby obliczała i zwracała pole
//odpowiedniej figury.
//Napisz klasę Rysunek, zawierającą tablicę wskaźników na obiekty klasy Figura (może mieć stały
//rozmiar). Klasa powinna zawierać także licznik przechowywanych figur (na starcie jest to zero).
//W klasie Rysunek:
//– zdefiniuj operator +=, pozwalający dodawać obiekty figur (wskaźniki) do tablicy (kolejne
//figury powinny trafiać na kolejne wolne miejsca)
//– zdefiniuj operator tablicowy, zwracający wskaźnik na figurę o zadanym indeksie w tablicy
//Wszystkie klasy powinny zostać zaimplementowane z podziałem na pliki nagłówkowe i źródłowe.

#include <iostream>

#include "figura.h"
#include "kolo.h"
#include "kwadrat.h"
#include "rysunek.h"

using namespace std;

int main()
{
    Figura *figuraKwa;
    Figura *figuraKol;
    Kwadrat kwadrat(100);
    Kolo kolo(10);
    figuraKwa = &kwadrat;
    figuraKol = &kolo;
    Rysunek rysunek;
    rysunek+=(figuraKol);
    rysunek+=(figuraKwa);
    rysunek+=(new Kwadrat(9));
    rysunek+=(new Kolo(12));
    cout << rysunek[0]->pole()<<endl;
    cout << rysunek[1]->pole()<<endl;
    cout << rysunek[2]->pole()<<endl;
    cout << rysunek[3]->pole()<<endl;
    return 0;
}
