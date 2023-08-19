#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureForageRange.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureForageRange* UAIDataProvider_CreatureForageRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureForageRange");
    return (UAIDataProvider_CreatureForageRange*)res;
}
