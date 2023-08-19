#include "UOptionActorSightDistanceConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorSightDistanceConsideration* UOptionActorSightDistanceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorSightDistanceConsideration");
    return (UOptionActorSightDistanceConsideration*)res;
}
