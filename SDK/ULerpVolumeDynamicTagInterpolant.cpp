#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeDynamicTagInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeDynamicTagInterpolant* ULerpVolumeDynamicTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDynamicTagInterpolant");
    return (ULerpVolumeDynamicTagInterpolant*)res;
}
