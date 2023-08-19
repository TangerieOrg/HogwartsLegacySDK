#include "ECreatureNurtureInteractRange.hpp"
#include "UOptionActorWithinNurtureInteractRangeConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorWithinNurtureInteractRangeConsideration* UOptionActorWithinNurtureInteractRangeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorWithinNurtureInteractRangeConsideration");
    return (UOptionActorWithinNurtureInteractRangeConsideration*)res;
}
