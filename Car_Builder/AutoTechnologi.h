#pragma once
#include "Car.h"

class AutoTechnologi
{
protected:
	Car* car ;
	std::string type;
public:
	AutoTechnologi(const std::string type) :type(type),car(nullptr) {}
	void createCar() { car = new Car(); car->setType(type); }
	Car* getCar() { return car; }
	virtual void BuildBody() = 0;
	virtual void InstalEngine() = 0;
	virtual void InstalWheels() = 0;
	virtual void Paint() = 0;
	virtual void PrepareSalone() = 0;
};

