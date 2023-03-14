#pragma once
#include "Car.h"
class AutoTechnologi
{
private:
	Car* car = nullptr;
private:
	void createCar() { car = new Car(); }
	Car* getCar() { return car; }
	virtual void BuildBody() = 0;
	virtual void InstalEngine() = 0;
	virtual void InstalWheels() = 0;
	virtual void Paint() = 0;
	virtual void PrepareSalone() = 0;
};

