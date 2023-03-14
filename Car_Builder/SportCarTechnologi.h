#pragma once
#include "AutoTechnologi.h"
class SportCarTechnologi : public AutoTechnologi
{
public:
	SportCarTechnologi() :AutoTechnologi("SportCar") {}
	void BuildBody() override;
	void InstalEngine() override;
	void InstalWheels() override;
	void Paint() override;
	void PrepareSalone() override;
};

