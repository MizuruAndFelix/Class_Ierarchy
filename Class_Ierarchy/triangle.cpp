#pragma once
#include "figure.h"
#include "triangle.h"
#include <string>
#include <iostream>

void triangle::printSides()
{
    cout << "�������: " << " a = " << aside << " b = " << bside << " c = " << cside << endl;
}
void triangle::printCorners()
{
    cout << "����: " << " A = " << acorner << " B = " << bcorner << " C = " << ccorner << endl;
}
void triangle::check()
{
    if (aside == bside && aside == cside && acorner == bcorner && acorner == ccorner)
    {
        cout << "����������\n";
    }
    else
    {
        cout << "������������\n";
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
    name = "�����������";
    sides = 3;
    //�����������
}
