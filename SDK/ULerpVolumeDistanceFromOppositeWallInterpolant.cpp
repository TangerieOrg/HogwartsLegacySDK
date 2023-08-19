#include "ULerpVolumeDistanceFromOppositeWallInterpolant.hpp"
#include "ULerpVolumeDistanceFromWallInterpolant.hpp"
ULerpVolumeDistanceFromOppositeWallInterpolant* ULerpVolumeDistanceFromOppositeWallInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceFromOppositeWallInterpolant");
    return (ULerpVolumeDistanceFromOppositeWallInterpolant*)res;
}
