#include "ULerpVolumeIntegerInterpolant.hpp"
#include "ULerpVolumeRelativeIntegerInterpolant.hpp"
ULerpVolumeRelativeIntegerInterpolant* ULerpVolumeRelativeIntegerInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeRelativeIntegerInterpolant");
    return (ULerpVolumeRelativeIntegerInterpolant*)res;
}
