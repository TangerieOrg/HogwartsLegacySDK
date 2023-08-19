#include "ECreatureMovementSpeed.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_Flee.hpp"
UBTTask_Creature_Flee* UBTTask_Creature_Flee::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_Flee");
    return (UBTTask_Creature_Flee*)res;
}
