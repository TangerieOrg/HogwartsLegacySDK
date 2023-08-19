#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant.hpp"
ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant* ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeUnitDirectionIndoorsOutdoorsInterpolant");
    return (ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant*)res;
}
