#include "FLerpVolumesColorName.hpp"
#include "FLinearColor.hpp"
#include "ULerpVolumeColorIndoorsOutdoorsInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeColorIndoorsOutdoorsInterpolant* ULerpVolumeColorIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeColorIndoorsOutdoorsInterpolant");
    return (ULerpVolumeColorIndoorsOutdoorsInterpolant*)res;
}
