#pragma once
#include "figure.h"
#include "triangle.h"
#include <string>
#include <iostream>

class rightTriangle : public triangle
{
public:
    rightTriangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_)
        :triangle(aside_, bside_, cside_, acorner_, bcorner_, 90)
    {
        triangle::name = "Прямоугольный треугольник";
    }
};
