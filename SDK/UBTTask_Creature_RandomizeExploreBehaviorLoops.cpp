#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RandomizeExploreBehaviorLoops.hpp"
UBTTask_Creature_RandomizeExploreBehaviorLoops* UBTTask_Creature_RandomizeExploreBehaviorLoops::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RandomizeExploreBehaviorLoops");
    return (UBTTask_Creature_RandomizeExploreBehaviorLoops*)res;
}
