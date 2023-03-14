#pragma once
#include <string>
#include <iostream>
enum  CarType
{
	MiniAuto,
	SportCar,
	SUV
};
class Car
{
private:
	CarType type;
	std::string body;
	std::string engine;
	std::string wheels;
	std::string color;
	std::string salon;
public:
	Car() :body("Nbody"), engine("NoEngine"), wheels("NoWheels"), color("NoColor"), salon("NoSalon"),type(MiniAuto) {}
	void setBody(const std::string body) { this->body = body; }
	void setEngine(const std::string engine) { this->engine = engine; }
	void setWheels(const std::string wheels) { this->engine = wheels; }
	void setColor(const std::string color) { this->engine = color; }
	void setSalon(const std::string salon) { this->engine = salon; }
	void setType(CarType type) { this->type = type; }
	void Show();
};