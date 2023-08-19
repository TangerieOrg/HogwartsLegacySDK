#include "UOptionActorIsConflictTargetForSelfActorConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsConflictTargetForSelfActorConsideration* UOptionActorIsConflictTargetForSelfActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsConflictTargetForSelfActorConsideration");
    return (UOptionActorIsConflictTargetForSelfActorConsideration*)res;
}
