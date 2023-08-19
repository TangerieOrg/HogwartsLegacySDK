#include "UOptionActorIsPerchedConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPerchedConsideration* UOptionActorIsPerchedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPerchedConsideration");
    return (UOptionActorIsPerchedConsideration*)res;
}
