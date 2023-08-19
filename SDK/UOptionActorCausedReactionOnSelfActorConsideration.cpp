#include "UOptionActorCausedReactionOnSelfActorConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorCausedReactionOnSelfActorConsideration* UOptionActorCausedReactionOnSelfActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorCausedReactionOnSelfActorConsideration");
    return (UOptionActorCausedReactionOnSelfActorConsideration*)res;
}
