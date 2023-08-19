#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalLastTagInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalLastTagInterpolant* ULerpVolumeFinalLastTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalLastTagInterpolant");
    return (ULerpVolumeFinalLastTagInterpolant*)res;
}
