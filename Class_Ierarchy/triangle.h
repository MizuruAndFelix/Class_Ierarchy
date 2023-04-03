#pragma once
#include "figure.h"
#include <string>
#include <iostream>

class triangle : public figure
{ // ==========================================база 3угольника
private:
    int aside = 0;
    int bside = 0;
    int cside = 0;

    int acorner = 0;
    int bcorner = 0;
    int ccorner = 0;

public:
    triangle(int aside_, int bside_, int cside_, int acorner_, int bcorner_, int ccorner_);
    void printSides()override;
    void printCorners()override;
    void check()override;
};