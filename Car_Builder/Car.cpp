#include "Car.h"

void Car::Show()
{
	std::cout << " --------- " << type << " ----------" << std::endl;
	std::cout << "   Body   : " << body << std::endl;
	std::cout << "   Engine : " << engine << std::endl;
	std::cout << "   Wheels : " << wheels << std::endl;
	std::cout << "   Color  : " << color << std::endl;
	std::cout << "   Salon  : " << salon << std::endl;
}
