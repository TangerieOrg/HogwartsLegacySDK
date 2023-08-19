#include "UAIDataProvider_CreatureApproachRange.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureApproachRange* UAIDataProvider_CreatureApproachRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureApproachRange");
    return (UAIDataProvider_CreatureApproachRange*)res;
}
