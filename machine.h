#include <vector>
#include <string>
#include <variant>
#include <array>


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


class smalldozer
{
public:
    std::string machineName;
    static constexpr size_t SENSOR_COUNT = 5;
    std::array<namedNumber,SENSOR_COUNT> dataSensors
    {{
        {"bladeHeight", 0.0},
        {"bladeAngle", 0.0},
        {"rightTrackPower", 0.0},
        {"leftTrackPower", 0.0},
        {"batteryCharge", 0.0}
    }};
    enum class ActivityState { Idle, Active };
    enum class PowerState { Normal, FullyCharged, EmergencyLow };
    enum class BladeState { Up, Down };
    machinePosition pos;
    machineForwardDirection dir;
};

class charger
{
public:
    std::string machineName;
    static constexpr size_t SENSOR_COUNT = 1;
    std::array<namedNumber,SENSOR_COUNT> dataSensors
    {{
        {"powerIn", 0.0}
    }};
    enum class chargerState
    {
        Idle, Active, Offline
    };
    machinePosition pos;
    machineForwardDirection dir;
};

