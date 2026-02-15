#import <iostream>
#import <string>
#include "machine.h"


int main()
{
    dozerData d;
    d.machineName = "Dozer-1";

    machine dozer(d);

    std::cout << std::get<dozerData>(dozer.meta).machineName;
}