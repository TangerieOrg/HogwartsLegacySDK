#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFullLevelNameInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeFullLevelNameInterpolant* ULerpVolumeFullLevelNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFullLevelNameInterpolant");
    return (ULerpVolumeFullLevelNameInterpolant*)res;
}
