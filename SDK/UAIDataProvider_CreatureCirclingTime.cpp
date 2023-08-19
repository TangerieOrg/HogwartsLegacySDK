#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureCirclingTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureCirclingTime* UAIDataProvider_CreatureCirclingTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureCirclingTime");
    return (UAIDataProvider_CreatureCirclingTime*)res;
}
