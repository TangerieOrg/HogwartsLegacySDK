#include "FBlackboardKeySelector.hpp"
#include "FOdcFlags.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FindClosestNavmeshLocation.hpp"
UBTTask_Creature_FindClosestNavmeshLocation* UBTTask_Creature_FindClosestNavmeshLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FindClosestNavmeshLocation");
    return (UBTTask_Creature_FindClosestNavmeshLocation*)res;
}
