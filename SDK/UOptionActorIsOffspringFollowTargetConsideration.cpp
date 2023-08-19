#include "UOptionActorIsOffspringFollowTargetConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsOffspringFollowTargetConsideration* UOptionActorIsOffspringFollowTargetConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsOffspringFollowTargetConsideration");
    return (UOptionActorIsOffspringFollowTargetConsideration*)res;
}
