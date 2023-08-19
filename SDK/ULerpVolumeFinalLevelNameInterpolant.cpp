#include "ULerpVolumeFinalLevelNameInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalLevelNameInterpolant* ULerpVolumeFinalLevelNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalLevelNameInterpolant");
    return (ULerpVolumeFinalLevelNameInterpolant*)res;
}
