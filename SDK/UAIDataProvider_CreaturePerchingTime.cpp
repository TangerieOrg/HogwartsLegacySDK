#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreaturePerchingTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreaturePerchingTime* UAIDataProvider_CreaturePerchingTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreaturePerchingTime");
    return (UAIDataProvider_CreaturePerchingTime*)res;
}
