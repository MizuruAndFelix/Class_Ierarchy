#pragma once
#include "figure.h"
#include <string>
#include <iostream>
#include "rectangle.h"

class parallelogram : public rectangle
{
public:
    parallelogram(int aside_, int bside_, int cside_, int dside_, int acorner_, int bcorner_, int ccorner_, int dcorner_)
        :rectangle(aside_, bside_, cside_, dside_, acorner_, bcorner_, ccorner_, dcorner_)
    {
        rectangle::name = "ןאנאככוכמדנאלל";
    }
};