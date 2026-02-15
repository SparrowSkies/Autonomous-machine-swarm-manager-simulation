#import <iostream>
#import <string>
#include "machine.h"
#include "number.h"

int main()
{
    machine newMachine;
    namedNumber newNumber;
    newNumber.NAME = "testSensor";
    newNumber.numb = -0.223;
    newMachine.dataSensors.push_back(newNumber);

    for (int i = 0; i < newMachine.dataSensors.size(); i++)
    {
        namedNumber target = newMachine.dataSensors[i];
        if (target.NAME == "testSensor")
        {
            numberStruct newNumber1
            {
                10.23444
            };

            std::cout << target.numb << " " << target.numb + newNumber1.numb;
        }
    }
}