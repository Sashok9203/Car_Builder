#pragma once
#include "AutoTechnologi.h"
class SUVTechnologi : public AutoTechnologi
{
public:
	SUVTechnologi() :AutoTechnologi("SUV") {}
	void BuildBody() override;
	void InstalEngine() override;
	void InstalWheels() override;
	void Paint() override;
	void PrepareSalone() override;
};

