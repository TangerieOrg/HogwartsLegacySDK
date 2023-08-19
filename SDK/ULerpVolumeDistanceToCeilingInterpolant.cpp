#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#include "ULerpVolumeDistanceToCeilingInterpolant.hpp"
ULerpVolumeDistanceToCeilingInterpolant* ULerpVolumeDistanceToCeilingInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDistanceToCeilingInterpolant");
    return (ULerpVolumeDistanceToCeilingInterpolant*)res;
}
