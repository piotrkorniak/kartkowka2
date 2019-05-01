#ifndef KOLO_H
#define KOLO_H
#include "figura.h"

class Kolo : public Figura
{
    float promien;
public:
    Kolo(float nowyPromien);
    float pole();
};

#endif // KOLO_H
