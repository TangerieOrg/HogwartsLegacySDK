#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeUnitDirectionDayNightInterpolant.hpp"
ULerpVolumeUnitDirectionDayNightInterpolant* ULerpVolumeUnitDirectionDayNightInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeUnitDirectionDayNightInterpolant");
    return (ULerpVolumeUnitDirectionDayNightInterpolant*)res;
}
