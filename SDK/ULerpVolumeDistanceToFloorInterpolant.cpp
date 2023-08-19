#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#include "ULerpVolumeDistanceToFloorInterpolant.hpp"
ULerpVolumeDistanceToFloorInterpolant* ULerpVolumeDistanceToFloorInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceToFloorInterpolant");
    return (ULerpVolumeDistanceToFloorInterpolant*)res;
}
