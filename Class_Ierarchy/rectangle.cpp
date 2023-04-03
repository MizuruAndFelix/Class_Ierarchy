#pragma once
#include "figure.h"
#include <string>
#include <iostream>
#include "rectangle.h"

void rectangle::printSides()
{
    cout << "Стороны: " << " a = " << aside << " b = " << bside << " c = " << cside << " d = " << dside << endl;
}
void rectangle::printCorners()
{
    cout << "Углы: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner << " D = " << dcorner << endl;
}
void rectangle::check()
{
    if (aside == bside && aside == cside && aside == dside && acorner == bcorner && acorner == ccorner && acorner == dcorner)
    {
        cout << "Правильная\n";
    }
    else
    {
        cout << "Неправильная\n";
    }
}
rectangle::rectangle(int aside_, int bside_, int cside_, int dside_, int acorner_, int bcorner_, int ccorner_, int dcorner_):
    aside(aside_),
    bside(bside_),
    cside(cside_),
    dside(dside_),
    acorner(acorner_),
    bcorner(bcorner_),
    ccorner(ccorner_),
    dcorner(dcorner_)
{
    name = "четырехугольник";
    sides = 4;
}

