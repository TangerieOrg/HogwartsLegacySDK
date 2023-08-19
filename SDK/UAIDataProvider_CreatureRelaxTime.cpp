#include "ECreatureDataProviderValueRangeType.hpp"
#include "ECreatureStance.hpp"
#include "UAIDataProvider_CreatureRelaxTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureRelaxTime* UAIDataProvider_CreatureRelaxTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureRelaxTime");
    return (UAIDataProvider_CreatureRelaxTime*)res;
}
