#include "ULerpVolumeDynamicTagInterpolant.hpp"
#include "ULerpVolumeNameTagInterpolant.hpp"
ULerpVolumeNameTagInterpolant* ULerpVolumeNameTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeNameTagInterpolant");
    return (ULerpVolumeNameTagInterpolant*)res;
}
