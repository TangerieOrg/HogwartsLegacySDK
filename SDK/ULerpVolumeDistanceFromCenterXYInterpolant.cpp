#include "ULerpVolumeDistanceFromCenterXYInterpolant.hpp"
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
ULerpVolumeDistanceFromCenterXYInterpolant* ULerpVolumeDistanceFromCenterXYInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceFromCenterXYInterpolant");
    return (ULerpVolumeDistanceFromCenterXYInterpolant*)res;
}
