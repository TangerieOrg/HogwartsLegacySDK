#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_Takeoff.hpp"
UBTTask_Creature_Takeoff* UBTTask_Creature_Takeoff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_Takeoff");
    return (UBTTask_Creature_Takeoff*)res;
}
