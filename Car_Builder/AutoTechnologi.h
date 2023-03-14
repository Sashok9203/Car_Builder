#pragma once
#include "Car.h"
enum  CarType
{
	MiniAuto,
	SportCar,
	SUV
};
class AutoTechnologi
{
protected:
	Car* car = nullptr;
	CarType type;
public:
	AutoTechnologi(CarType type) :type(type) {}
	void createCar() { car = new Car(); car->setType(type); }
	Car* getCar() { return car; }
	virtual void BuildBody() = 0;
	virtual void InstalEngine() = 0;
	virtual void InstalWheels() = 0;
	virtual void Paint() = 0;
	virtual void PrepareSalone() = 0;
};

