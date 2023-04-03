#include "figure.h"
#include <string>
#include <iostream>

void figure::printSidesQuantity()
{
	std::cout << "Количество сторон: " << sides << std::endl;
}
string figure::getName()
{
	return name;
}