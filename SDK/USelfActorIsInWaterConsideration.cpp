#include "UQualifierConsideration.hpp"
#include "USelfActorIsInWaterConsideration.hpp"
USelfActorIsInWaterConsideration* USelfActorIsInWaterConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorIsInWaterConsideration");
    return (USelfActorIsInWaterConsideration*)res;
}
