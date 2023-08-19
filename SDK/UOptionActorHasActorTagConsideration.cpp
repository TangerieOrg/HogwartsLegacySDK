#include "UOptionActorHasActorTagConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorHasActorTagConsideration* UOptionActorHasActorTagConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorHasActorTagConsideration");
    return (UOptionActorHasActorTagConsideration*)res;
}
