#include "UQualifierConsideration.hpp"
#include "USelfActorWaterDepthConsideration.hpp"
USelfActorWaterDepthConsideration* USelfActorWaterDepthConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorWaterDepthConsideration");
    return (USelfActorWaterDepthConsideration*)res;
}
