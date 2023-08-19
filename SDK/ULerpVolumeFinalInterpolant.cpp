#include "ULerpVolumeFinalInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeFinalInterpolant* ULerpVolumeFinalInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalInterpolant");
    return (ULerpVolumeFinalInterpolant*)res;
}
