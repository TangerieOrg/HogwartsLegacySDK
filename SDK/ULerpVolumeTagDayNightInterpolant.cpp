#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeTagDayNightInterpolant.hpp"
ULerpVolumeTagDayNightInterpolant* ULerpVolumeTagDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeTagDayNightInterpolant");
    return (ULerpVolumeTagDayNightInterpolant*)res;
}
