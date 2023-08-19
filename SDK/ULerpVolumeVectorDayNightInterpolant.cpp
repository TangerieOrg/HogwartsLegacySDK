#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeVectorDayNightInterpolant.hpp"
ULerpVolumeVectorDayNightInterpolant* ULerpVolumeVectorDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeVectorDayNightInterpolant");
    return (ULerpVolumeVectorDayNightInterpolant*)res;
}
