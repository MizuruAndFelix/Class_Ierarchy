#pragma once
#include "figure.h"
#include "triangle.h"
#include <string>
#include <iostream>

class isoscelesTriangle : public triangle
{
public:
    isoscelesTriangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_)
:triangle(aside_, bside_, cside_, acorner_, bcorner_, ccorner_)
    {
 triangle::name = "Равнобедренный треугольник";
    }
};