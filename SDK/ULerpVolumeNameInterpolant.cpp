#include "ULerpVolumeNameInterpolant.hpp"
#include "ULerpVolumeTagInterpolantBase.hpp"
ULerpVolumeNameInterpolant* ULerpVolumeNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeNameInterpolant");
    return (ULerpVolumeNameInterpolant*)res;
}
