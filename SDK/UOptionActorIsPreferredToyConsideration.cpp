#include "UOptionActorIsPreferredToyConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPreferredToyConsideration* UOptionActorIsPreferredToyConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPreferredToyConsideration");
    return (UOptionActorIsPreferredToyConsideration*)res;
}
