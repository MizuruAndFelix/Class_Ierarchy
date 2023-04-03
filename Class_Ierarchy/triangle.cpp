#pragma once
#include "figure.h"
#include "triangle.h"
#include <string>
#include <iostream>

void triangle::printSides()
{
    cout << "Стороны: " << " a = " << aside << " b = " << bside << " c = " << cside << endl;
}
void triangle::printCorners()
{
    cout << "Углы: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner << endl;
}
void triangle::check()
{
    if (aside == bside && aside == cside && acorner == bcorner && acorner == ccorner)
    {
        cout << "Правильная\n";
    }
    else
    {
        cout << "Неправильная\n";
    }
}
triangle::triangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_):
aside(aside_),
bside(bside_),
cside(cside_),
acorner(acorner_),
bcorner(bcorner_),
ccorner(ccorner_)
{
    name = "Треугольник";
    sides = 3;
    //конструктор
}
