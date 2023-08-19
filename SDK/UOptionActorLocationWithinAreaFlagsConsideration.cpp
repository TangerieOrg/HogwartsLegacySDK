#include "EAreaUsageFlagSelection.hpp"
#include "FOdcFlags.hpp"
#include "UOptionActorLocationWithinAreaFlagsConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorLocationWithinAreaFlagsConsideration* UOptionActorLocationWithinAreaFlagsConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorLocationWithinAreaFlagsConsideration");
    return (UOptionActorLocationWithinAreaFlagsConsideration*)res;
}
