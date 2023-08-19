#include "FLerpVolumesUnitDirectionName.hpp"
#include "FVector.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeUnitDirectionInterpolant.hpp"
ULerpVolumeUnitDirectionInterpolant* ULerpVolumeUnitDirectionInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeUnitDirectionInterpolant");
    return (ULerpVolumeUnitDirectionInterpolant*)res;
}
