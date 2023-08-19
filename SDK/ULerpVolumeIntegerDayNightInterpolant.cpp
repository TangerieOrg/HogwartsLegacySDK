#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeIntegerDayNightInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeIntegerDayNightInterpolant* ULerpVolumeIntegerDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeIntegerDayNightInterpolant");
    return (ULerpVolumeIntegerDayNightInterpolant*)res;
}
