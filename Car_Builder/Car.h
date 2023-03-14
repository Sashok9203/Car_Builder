#pragma once
#include <string>
#include <iostream>


class Car
{
private:
	std::string type;
	std::string body;
	std::string engine;
	std::string wheels;
	std::string color;
	std::string salon;
public:
	Car() :body(" Nbody"), engine(" NoEngine"), wheels(" NoWheels"), color(" NoColor"), salon(" NoSalon"), type("NoType") {}
	void setBody(const std::string& body) { this->body = body; }
	void setEngine(const std::string& engine) { this->engine = engine; }
	void setWheels(const std::string& wheels) { this->wheels = wheels; }
	void setColor(const std::string& color) { this->color = color; }
	void setSalon(const std::string& salon) { this->salon = salon; }
	void setType(const std::string& type) { this->type = type; }
	void Show();
};