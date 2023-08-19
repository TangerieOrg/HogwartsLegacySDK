#include "UOptionActorIsFlyingConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsFlyingConsideration* UOptionActorIsFlyingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsFlyingConsideration");
    return (UOptionActorIsFlyingConsideration*)res;
}
