#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeTagIndoorsOutdoorsInterpolant.hpp"
ULerpVolumeTagIndoorsOutdoorsInterpolant* ULerpVolumeTagIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeTagIndoorsOutdoorsInterpolant");
    return (ULerpVolumeTagIndoorsOutdoorsInterpolant*)res;
}
