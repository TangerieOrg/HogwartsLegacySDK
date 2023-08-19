#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeScalarIndoorsOutdoorsInterpolant.hpp"
ULerpVolumeScalarIndoorsOutdoorsInterpolant* ULerpVolumeScalarIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeScalarIndoorsOutdoorsInterpolant");
    return (ULerpVolumeScalarIndoorsOutdoorsInterpolant*)res;
}
