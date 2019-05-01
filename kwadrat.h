#ifndef KWADRAT_H
#define KWADRAT_H
#include "figura.h"

class Kwadrat : public Figura
{
    float dlugoscBoku;
public:
    Kwadrat(float nowaDlugoscBoku);
    float pole();
};

#endif // KWADRAT_H
