#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_EnableFlyingMovement.hpp"
UBTTask_Creature_EnableFlyingMovement* UBTTask_Creature_EnableFlyingMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_EnableFlyingMovement");
    return (UBTTask_Creature_EnableFlyingMovement*)res;
}
