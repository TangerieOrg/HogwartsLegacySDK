#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeColorInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeColorInterpolant* ULerpVolumeColorInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeColorInterpolant");
    return (ULerpVolumeColorInterpolant*)res;
}
