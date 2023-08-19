#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
#include "ULerpVolumeManualLevelNameInterpolant.hpp"
ULerpVolumeManualLevelNameInterpolant* ULerpVolumeManualLevelNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeManualLevelNameInterpolant");
    return (ULerpVolumeManualLevelNameInterpolant*)res;
}
