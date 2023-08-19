#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RandomizeForageBehaviorLoops.hpp"
UBTTask_Creature_RandomizeForageBehaviorLoops* UBTTask_Creature_RandomizeForageBehaviorLoops::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RandomizeForageBehaviorLoops");
    return (UBTTask_Creature_RandomizeForageBehaviorLoops*)res;
}
