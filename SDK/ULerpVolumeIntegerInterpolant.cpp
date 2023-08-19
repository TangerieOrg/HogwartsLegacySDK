#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeIntegerInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeIntegerInterpolant* ULerpVolumeIntegerInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeIntegerInterpolant");
    return (ULerpVolumeIntegerInterpolant*)res;
}
