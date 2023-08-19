#include "ULerpVolumeInterpolant.hpp"
#include "UObject.hpp"
ULerpVolumeInterpolant* ULerpVolumeInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeInterpolant");
    return (ULerpVolumeInterpolant*)res;
}
