#include "UAIDataProvider_CreatureRunApproachRadius.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureRunApproachRadius* UAIDataProvider_CreatureRunApproachRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureRunApproachRadius");
    return (UAIDataProvider_CreatureRunApproachRadius*)res;
}
