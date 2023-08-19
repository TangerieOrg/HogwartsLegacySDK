#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RandomizeIdleBehaviorLoops.hpp"
UBTTask_Creature_RandomizeIdleBehaviorLoops* UBTTask_Creature_RandomizeIdleBehaviorLoops::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RandomizeIdleBehaviorLoops");
    return (UBTTask_Creature_RandomizeIdleBehaviorLoops*)res;
}
