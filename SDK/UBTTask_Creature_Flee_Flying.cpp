#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_Flee_Flying.hpp"
UBTTask_Creature_Flee_Flying* UBTTask_Creature_Flee_Flying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_Flee_Flying");
    return (UBTTask_Creature_Flee_Flying*)res;
}
