#import <iostream>
#import <string>
#include "machine.h"
#include "number.h"

int main()
{
    machine newMachine;
    namedNumber newNumber;
    newNumber.NAME = "testSensor";
    newNumber.negative = true;
    newNumber.whole = 20000000002;
    newMachine.dataSensors.push_back(newNumber);

    for (int i = 0; i < newMachine.dataSensors.size(); i++)
    {
        namedNumber target = newMachine.dataSensors[i];
        if (target.NAME == "testSensor")
        {
            std::cout << target.whole;
        }
    }
}