#include "Conveyor.h"
#include "MiniAutoTechnologi.h"
#include "SportCarTechnologi.h"
#include "SUVTechnologi.h"

int main()
{
    Conveyor onveyor(new MiniAutoTechnologi());
    onveyor.Build();
    Car* car = onveyor.getResult();
    car->Show();
    delete car;

    onveyor.setAutoTachnologi(new SportCarTechnologi());
    onveyor.Build();
    onveyor.getResult();
    car = onveyor.getResult();
    car->Show();
    delete car;

    onveyor.setAutoTachnologi(new SUVTechnologi());
    onveyor.Build();
    onveyor.getResult();
    car = onveyor.getResult();
    car->Show();
    delete car;

}


