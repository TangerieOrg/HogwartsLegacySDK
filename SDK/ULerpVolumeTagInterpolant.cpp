#include "ULerpVolumeTagInterpolant.hpp"
#include "ULerpVolumeTagInterpolantBase.hpp"
ULerpVolumeTagInterpolant* ULerpVolumeTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeTagInterpolant");
    return (ULerpVolumeTagInterpolant*)res;
}
