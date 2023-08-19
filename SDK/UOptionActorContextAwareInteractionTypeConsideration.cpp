#include "UOptionActorContextAwareInteractionTypeConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorContextAwareInteractionTypeConsideration* UOptionActorContextAwareInteractionTypeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorContextAwareInteractionTypeConsideration");
    return (UOptionActorContextAwareInteractionTypeConsideration*)res;
}
