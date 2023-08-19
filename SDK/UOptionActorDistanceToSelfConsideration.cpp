#include "UOptionActorDistanceToSelfConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorDistanceToSelfConsideration* UOptionActorDistanceToSelfConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorDistanceToSelfConsideration");
    return (UOptionActorDistanceToSelfConsideration*)res;
}
