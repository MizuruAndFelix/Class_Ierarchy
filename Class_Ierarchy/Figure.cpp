#include "figure.h"
#include <string>
#include <iostream>

void figure::printSidesQuantity()
{
	std::cout << "���������� ������: " << sides << std::endl;
}
string figure::getName()
{
	return name;
}