#ifndef RYSUNEK_H
#define RYSUNEK_H
#include "figura.h"
#include "kwadrat.h"
#include "kolo.h"

class Rysunek
{
public:
    Figura *figura[100];
    int ileFigur;
public:
    Rysunek();
    void operator+=(Figura* nowaFigura);
    Figura* operator[](int n);
};

#endif // RYSUNEK_H
