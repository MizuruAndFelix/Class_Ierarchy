#include <fstream>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;
#include "figure.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "classisoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "rectangle.h"
#include "rightCorner.h"
#include "square.h"
#include "parallelogram.h"
#include "Header.h"

void print_info(figure& f)
{
    cout << f.getName() << ": " << endl;
    f.check();
    f.printSidesQuantity();
    f.printSides();
    f.printCorners();

    cout << endl;
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251); //перевод на русский
    SetConsoleOutputCP(1251);

    triangle t1(10, 20, 30, 50, 60, 70);
    print_info(t1);
    rightTriangle t2(10, 20, 30, 50, 60);
    print_info(t2);    
    isoscelesTriangle t3(10, 20, 10, 50, 60, 50);
    print_info(t3);
    equilateralTriangle t4(30, 30, 30, 60, 60, 60);
    print_info(t4);
    rectangle r1(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(r1);
    rightCorner r2(10, 20, 10, 20);//не работает
    print_info(r2);
    square r3(20, 20, 20, 20);//не работает
    print_info(r3);
    parallelogram r4(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(r4);
    rhomb r5(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(r5);

}
