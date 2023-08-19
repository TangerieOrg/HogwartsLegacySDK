#include "ULerpVolumeDiretionToWallInterpolant.hpp"
#include "ULerpVolumeDynamicUnitDirectionInterpolant.hpp"
ULerpVolumeDiretionToWallInterpolant* ULerpVolumeDiretionToWallInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDiretionToWallInterpolant");
    return (ULerpVolumeDiretionToWallInterpolant*)res;
}
