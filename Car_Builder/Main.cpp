#include "Conveyor.h"
#include "MiniAutoTechnologi.h"
#include "SportCarTechnologi.h"
#include "SUVTechnologi.h"

int main()
{
    Conveyor conveyor(new MiniAutoTechnologi());
    conveyor.Build();
    Car* car = conveyor.getResult();
    car->Show();
    delete car;

    conveyor.setAutoTachnologi(new SportCarTechnologi());
    conveyor.Build();
    conveyor.getResult();
    car = conveyor.getResult();
    car->Show();
    delete car;

    conveyor.setAutoTachnologi(new SUVTechnologi());
    conveyor.Build();
    conveyor.getResult();
    car = conveyor.getResult();
    car->Show();
    delete car;

}


