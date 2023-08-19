#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalLastLevelNameInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalLastLevelNameInterpolant* ULerpVolumeFinalLastLevelNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalLastLevelNameInterpolant");
    return (ULerpVolumeFinalLastLevelNameInterpolant*)res;
}
