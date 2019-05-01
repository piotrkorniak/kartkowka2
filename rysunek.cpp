#include "rysunek.h"

Rysunek::Rysunek()
{
    ileFigur=0;
}

void Rysunek::operator+=(Figura* nowaFigura)
{
    figura[ileFigur]=nowaFigura;
    ileFigur++;
}
Figura* Rysunek::operator[](int n)
{
    return figura[n];
}
