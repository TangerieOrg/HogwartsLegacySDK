#include "UOptionActorIsFeedingStationWithFeedAvailableConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsFeedingStationWithFeedAvailableConsideration* UOptionActorIsFeedingStationWithFeedAvailableConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsFeedingStationWithFeedAvailableConsideration");
    return (UOptionActorIsFeedingStationWithFeedAvailableConsideration*)res;
}
