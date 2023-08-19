#include "UOptionActorInteractionTypeConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorInteractionTypeConsideration* UOptionActorInteractionTypeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorInteractionTypeConsideration");
    return (UOptionActorInteractionTypeConsideration*)res;
}
