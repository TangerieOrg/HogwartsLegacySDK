#include "UOptionActorFeedingStationContentionConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorFeedingStationContentionConsideration* UOptionActorFeedingStationContentionConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorFeedingStationContentionConsideration");
    return (UOptionActorFeedingStationContentionConsideration*)res;
}
