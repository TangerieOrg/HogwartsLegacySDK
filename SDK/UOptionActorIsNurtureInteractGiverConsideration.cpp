#include "UOptionActorIsNurtureInteractGiverConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsNurtureInteractGiverConsideration* UOptionActorIsNurtureInteractGiverConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsNurtureInteractGiverConsideration");
    return (UOptionActorIsNurtureInteractGiverConsideration*)res;
}
