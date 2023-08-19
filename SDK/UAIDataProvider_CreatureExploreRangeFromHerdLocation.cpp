#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureExploreRangeFromHerdLocation.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureExploreRangeFromHerdLocation* UAIDataProvider_CreatureExploreRangeFromHerdLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureExploreRangeFromHerdLocation");
    return (UAIDataProvider_CreatureExploreRangeFromHerdLocation*)res;
}
