#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureForageLookAroundTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureForageLookAroundTime* UAIDataProvider_CreatureForageLookAroundTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureForageLookAroundTime");
    return (UAIDataProvider_CreatureForageLookAroundTime*)res;
}
