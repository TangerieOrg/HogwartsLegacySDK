#include "ULerpVolumeDefaultInterpolant.hpp"
#include "ULerpVolumeTagInterpolantBase.hpp"
ULerpVolumeDefaultInterpolant* ULerpVolumeDefaultInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDefaultInterpolant");
    return (ULerpVolumeDefaultInterpolant*)res;
}
