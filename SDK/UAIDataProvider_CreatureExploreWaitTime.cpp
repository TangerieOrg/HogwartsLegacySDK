#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureExploreWaitTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureExploreWaitTime* UAIDataProvider_CreatureExploreWaitTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureExploreWaitTime");
    return (UAIDataProvider_CreatureExploreWaitTime*)res;
}
