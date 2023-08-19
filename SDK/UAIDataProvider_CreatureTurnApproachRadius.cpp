#include "UAIDataProvider_CreatureTurnApproachRadius.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureTurnApproachRadius* UAIDataProvider_CreatureTurnApproachRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureTurnApproachRadius");
    return (UAIDataProvider_CreatureTurnApproachRadius*)res;
}
