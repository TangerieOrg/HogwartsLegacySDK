#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureNewHerdLocationRange.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureNewHerdLocationRange* UAIDataProvider_CreatureNewHerdLocationRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureNewHerdLocationRange");
    return (UAIDataProvider_CreatureNewHerdLocationRange*)res;
}
