#include "ULerpVolumeFinalLastValidTagInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalLastValidTagInterpolant* ULerpVolumeFinalLastValidTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalLastValidTagInterpolant");
    return (ULerpVolumeFinalLastValidTagInterpolant*)res;
}
