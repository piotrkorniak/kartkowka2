#include "kwadrat.h"

Kwadrat::Kwadrat(float nowaDlugoscBoku)
{
    dlugoscBoku=nowaDlugoscBoku;
}

float Kwadrat::pole()
{
    return dlugoscBoku*dlugoscBoku;
}
