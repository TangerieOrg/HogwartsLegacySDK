#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureExploreRange.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureExploreRange* UAIDataProvider_CreatureExploreRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureExploreRange");
    return (UAIDataProvider_CreatureExploreRange*)res;
}
