#include "UOptionActorIsBuffedConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsBuffedConsideration* UOptionActorIsBuffedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsBuffedConsideration");
    return (UOptionActorIsBuffedConsideration*)res;
}
