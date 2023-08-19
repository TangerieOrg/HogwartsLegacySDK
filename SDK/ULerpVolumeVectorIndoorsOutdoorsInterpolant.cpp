#include "FLerpVolumesVectorName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeVectorIndoorsOutdoorsInterpolant.hpp"
ULerpVolumeVectorIndoorsOutdoorsInterpolant* ULerpVolumeVectorIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeVectorIndoorsOutdoorsInterpolant");
    return (ULerpVolumeVectorIndoorsOutdoorsInterpolant*)res;
}
