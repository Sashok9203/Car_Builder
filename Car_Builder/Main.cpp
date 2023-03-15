#include "Conveyor.h"
#include "MiniAutoTechnologi.h"
#include "SportCarTechnologi.h"
#include "SUVTechnologi.h"

int main()
{
    AutoTechnologi* AT = new MiniAutoTechnologi();
    Conveyor conveyor(AT);
    conveyor.Build();
    Car* car = conveyor.getResult();
    car->Show();
    delete car;
    delete AT;

    AT = new SportCarTechnologi();
    conveyor.setAutoTachnologi(AT);
    conveyor.Build();
    conveyor.getResult();
    car = conveyor.getResult();
    car->Show();
    delete car;
    delete AT;

    AT = new SUVTechnologi();
    conveyor.setAutoTachnologi(AT);
    conveyor.Build();
    conveyor.getResult();
    car = conveyor.getResult();
    car->Show();
    delete car;
    delete AT;

}


