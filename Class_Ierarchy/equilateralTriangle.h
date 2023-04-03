#pragma once
#include "figure.h"
#include "triangle.h"
#include <string>
#include <iostream>
class equilateralTriangle : public triangle
{
public:
    equilateralTriangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_)
        :triangle(aside_, bside_, cside_, 60, 60, 60)
    {
        triangle::name = "Равносторонний треугольник";
    }
};