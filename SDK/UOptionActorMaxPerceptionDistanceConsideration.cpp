#include "UOptionActorMaxPerceptionDistanceConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorMaxPerceptionDistanceConsideration* UOptionActorMaxPerceptionDistanceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorMaxPerceptionDistanceConsideration");
    return (UOptionActorMaxPerceptionDistanceConsideration*)res;
}
