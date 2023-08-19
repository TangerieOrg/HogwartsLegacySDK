#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
ULerpVolumeLevelNameInterpolantBase* ULerpVolumeLevelNameInterpolantBase::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeLevelNameInterpolantBase");
    return (ULerpVolumeLevelNameInterpolantBase*)res;
}
