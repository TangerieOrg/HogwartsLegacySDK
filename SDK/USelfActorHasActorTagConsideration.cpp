#include "UQualifierConsideration.hpp"
#include "USelfActorHasActorTagConsideration.hpp"
USelfActorHasActorTagConsideration* USelfActorHasActorTagConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfActorHasActorTagConsideration");
    return (USelfActorHasActorTagConsideration*)res;
}
