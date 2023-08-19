#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FetchActorFromCreature.hpp"
UBTTask_Creature_FetchActorFromCreature* UBTTask_Creature_FetchActorFromCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FetchActorFromCreature");
    return (UBTTask_Creature_FetchActorFromCreature*)res;
}
