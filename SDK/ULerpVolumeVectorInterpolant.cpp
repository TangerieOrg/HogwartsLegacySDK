#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeVectorInterpolant.hpp"
ULerpVolumeVectorInterpolant* ULerpVolumeVectorInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeVectorInterpolant");
    return (ULerpVolumeVectorInterpolant*)res;
}
