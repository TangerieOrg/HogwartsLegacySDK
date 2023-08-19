#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FindLandingConfiguration.hpp"
UBTTask_Creature_FindLandingConfiguration* UBTTask_Creature_FindLandingConfiguration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FindLandingConfiguration");
    return (UBTTask_Creature_FindLandingConfiguration*)res;
}
