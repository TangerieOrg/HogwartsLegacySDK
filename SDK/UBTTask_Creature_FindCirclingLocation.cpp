#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FindCirclingLocation.hpp"
UBTTask_Creature_FindCirclingLocation* UBTTask_Creature_FindCirclingLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FindCirclingLocation");
    return (UBTTask_Creature_FindCirclingLocation*)res;
}
