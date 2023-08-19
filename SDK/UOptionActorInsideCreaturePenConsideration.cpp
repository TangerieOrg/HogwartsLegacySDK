#include "UOptionActorInsideCreaturePenConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorInsideCreaturePenConsideration* UOptionActorInsideCreaturePenConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorInsideCreaturePenConsideration");
    return (UOptionActorInsideCreaturePenConsideration*)res;
}
