#include "ULerpVolumeDistanceFromWallInterpolant.hpp"
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
ULerpVolumeDistanceFromWallInterpolant* ULerpVolumeDistanceFromWallInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceFromWallInterpolant");
    return (ULerpVolumeDistanceFromWallInterpolant*)res;
}
