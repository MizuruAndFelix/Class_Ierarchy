#pragma once
#include <string>
#include <iostream>
using namespace std;

class figure
{
protected:
    string name = "Фигура";
    int sides = 0;
public:
    string getName();
    virtual void printSides(){}
    virtual void printCorners(){}
    virtual void check(){}
    void printSidesQuantity();
};