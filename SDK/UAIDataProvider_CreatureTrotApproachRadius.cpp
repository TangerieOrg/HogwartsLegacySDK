#include "UAIDataProvider_CreatureTrotApproachRadius.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureTrotApproachRadius* UAIDataProvider_CreatureTrotApproachRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureTrotApproachRadius");
    return (UAIDataProvider_CreatureTrotApproachRadius*)res;
}
