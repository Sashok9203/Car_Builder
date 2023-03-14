#pragma once
#include "AutoTechnologi.h"

class Conveyor
{
private:
	AutoTechnologi* tech;
	void clearTech() { delete tech; }
public:
	Conveyor(AutoTechnologi* tech):tech(tech) { };
	~Conveyor() { clearTech(); }
	void setAutoTachnologi(AutoTechnologi* tech) { this->tech = tech; };
	Car* getResult() { return tech->getCar(); }
	void Build();
};

