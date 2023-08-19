#include "UOptionActorBonusForPreferedParentConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorBonusForPreferedParentConsideration* UOptionActorBonusForPreferedParentConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorBonusForPreferedParentConsideration");
    return (UOptionActorBonusForPreferedParentConsideration*)res;
}
