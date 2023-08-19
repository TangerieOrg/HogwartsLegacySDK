#include "FLerpVolumesIntegerName.hpp"
#include "ULerpVolumeIntegerIndoorsOutdoorsInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeIntegerIndoorsOutdoorsInterpolant* ULerpVolumeIntegerIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeIntegerIndoorsOutdoorsInterpolant");
    return (ULerpVolumeIntegerIndoorsOutdoorsInterpolant*)res;
}
