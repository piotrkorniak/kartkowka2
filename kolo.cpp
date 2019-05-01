#include "kolo.h"
#include <cmath>
Kolo::Kolo(float nowyPromien)
{
    promien=nowyPromien;
}
float Kolo::pole()
{
    return M_PI*promien*promien;
}
