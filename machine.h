#include <vector>
#include <string>
#include <variant>


enum class MachineRole
{
    Dozer,
    Charger
};

struct namedNumber
{
    std::string NAME;
    double numb;
};

struct machinePosition
{
    double X;
    double Y;
    double Z;
};

struct machineForwardDirection
{
    double X;
    double Z;
};

struct dozerData
{
    std::string machineName;
    namedNumber dataSensors[0];
    machinePosition pos;
    machineForwardDirection dir;
};

struct chargerData
{
    std::string machineName;
    namedNumber dataSensors[0];
    machinePosition pos;
    machineForwardDirection dir;
};

class machine
{
public:

    MachineRole MR;
    std::variant<dozerData, chargerData> meta;

    machine(const dozerData& d) : meta(d) {}

    machine(const chargerData& c) : meta(c) {}

    ~machine() {}
};

