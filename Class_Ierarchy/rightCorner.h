#pragma once
#include "figure.h"
#include <string>
#include <iostream>
#include "rectangle.h"

class rightCorner : public rectangle
{
public:
    rightCorner(int aside_, int bside_, int cside_, int dside_)
        :rectangle(aside_, bside_, cside_, dside_, 90, 90, 90, 90)
    {
        rectangle::name = "прямоугольник";
    }
};