#include "ULerpVolumeDiretionToCenterInterpolant.hpp"
#include "ULerpVolumeDynamicUnitDirectionInterpolant.hpp"
ULerpVolumeDiretionToCenterInterpolant* ULerpVolumeDiretionToCenterInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDiretionToCenterInterpolant");
    return (ULerpVolumeDiretionToCenterInterpolant*)res;
}
