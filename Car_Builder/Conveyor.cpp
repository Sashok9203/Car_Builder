#include "Conveyor.h"

void Conveyor::Build()
{
	tech->createCar();
	tech->BuildBody();
	tech->InstalEngine();
	tech->InstalWheels();
	tech->Paint();
	tech->PrepareSalone();
}
