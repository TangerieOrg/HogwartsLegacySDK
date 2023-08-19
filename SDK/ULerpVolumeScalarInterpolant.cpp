#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeScalarInterpolant.hpp"
ULerpVolumeScalarInterpolant* ULerpVolumeScalarInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeScalarInterpolant");
    return (ULerpVolumeScalarInterpolant*)res;
}
