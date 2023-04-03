#pragma once
#include "figure.h"
#include <string>
#include <iostream>
class rectangle : public figure
{ // ==========================================база 4угольника
private:
    int aside = 0;
    int bside = 0;
    int cside = 0;
    int dside = 0;
    int acorner = 0;
    int bcorner = 0;
    int ccorner = 0;
    int dcorner = 0;
public:
    rectangle(int aside_, int bside_, int cside_, int dside_, int acorner_, int bcorner_, int ccorner_, int dcorner_);
    void printSides()override;
    void printCorners()override;
    void check()override;
        
};