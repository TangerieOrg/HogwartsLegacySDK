#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeScalarDayNightInterpolant.hpp"
ULerpVolumeScalarDayNightInterpolant* ULerpVolumeScalarDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeScalarDayNightInterpolant");
    return (ULerpVolumeScalarDayNightInterpolant*)res;
}
