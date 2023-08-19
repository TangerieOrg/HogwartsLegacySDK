#include "ECreatureFlightState.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_SetDesiredFlightState.hpp"
UBTTask_Creature_SetDesiredFlightState* UBTTask_Creature_SetDesiredFlightState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_SetDesiredFlightState");
    return (UBTTask_Creature_SetDesiredFlightState*)res;
}
