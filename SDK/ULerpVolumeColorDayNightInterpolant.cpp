#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeColorDayNightInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeColorDayNightInterpolant* ULerpVolumeColorDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeColorDayNightInterpolant");
    return (ULerpVolumeColorDayNightInterpolant*)res;
}
