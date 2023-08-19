#include "UQualifierConsideration.hpp"
#include "USelfActoIsOverlappingOptionActorTrigger.hpp"
USelfActoIsOverlappingOptionActorTrigger* USelfActoIsOverlappingOptionActorTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfActoIsOverlappingOptionActorTrigger");
    return (USelfActoIsOverlappingOptionActorTrigger*)res;
}
