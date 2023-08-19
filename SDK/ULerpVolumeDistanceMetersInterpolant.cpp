#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeDistanceMetersInterpolant* ULerpVolumeDistanceMetersInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceMetersInterpolant");
    return (ULerpVolumeDistanceMetersInterpolant*)res;
}
