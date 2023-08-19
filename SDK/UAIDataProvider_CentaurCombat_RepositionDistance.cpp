#include "UAIDataProvider_CentaurCombat_RepositionDistance.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CentaurCombat_RepositionDistance* UAIDataProvider_CentaurCombat_RepositionDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CentaurCombat_RepositionDistance");
    return (UAIDataProvider_CentaurCombat_RepositionDistance*)res;
}
