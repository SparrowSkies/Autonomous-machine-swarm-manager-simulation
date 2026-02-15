

#ifndef AUTONUMOS_MACHINE_SWARM_MANAGER_NUMBER_H
#define AUTONUMOS_MACHINE_SWARM_MANAGER_NUMBER_H
#import <vector>
#import <string>


struct numberStruct
{
    bool negative = false;
    long long whole;
    long long decimal;
};

struct namedNumber
{
    std::string NAME;
    bool negative = false;
    long long whole;
    long long decimal;
};

void addNumber(namedNumber& numToChange, namedNumber addNum)
{
    numToChange.whole = numToChange.whole + addNum.whole;
    numToChange.decimal = numToChange.decimal + addNum.decimal;
}



#endif //AUTONUMOS_MACHINE_SWARM_MANAGER_NUMBER_H




