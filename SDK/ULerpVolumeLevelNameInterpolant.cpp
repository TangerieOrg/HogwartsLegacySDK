#include "FLerpVolumesLevelName.hpp"
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelNameInterpolant.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
ULerpVolumeLevelNameInterpolant* ULerpVolumeLevelNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeLevelNameInterpolant");
    return (ULerpVolumeLevelNameInterpolant*)res;
}
