#include "ULerpVolumeDistanceFromCenterInterpolant.hpp"
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
ULerpVolumeDistanceFromCenterInterpolant* ULerpVolumeDistanceFromCenterInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceFromCenterInterpolant");
    return (ULerpVolumeDistanceFromCenterInterpolant*)res;
}
