#include "UOptionActorLastInteractionTimeConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorLastInteractionTimeConsideration* UOptionActorLastInteractionTimeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorLastInteractionTimeConsideration");
    return (UOptionActorLastInteractionTimeConsideration*)res;
}
