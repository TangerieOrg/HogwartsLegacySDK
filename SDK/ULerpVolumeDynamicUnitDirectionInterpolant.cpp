#include "FLerpVolumesUnitDirectionName.hpp"
#include "ULerpVolumeDynamicUnitDirectionInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeDynamicUnitDirectionInterpolant* ULerpVolumeDynamicUnitDirectionInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeDynamicUnitDirectionInterpolant");
    return (ULerpVolumeDynamicUnitDirectionInterpolant*)res;
}
