#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RandomizeApproachRange.hpp"
UBTTask_Creature_RandomizeApproachRange* UBTTask_Creature_RandomizeApproachRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RandomizeApproachRange");
    return (UBTTask_Creature_RandomizeApproachRange*)res;
}
