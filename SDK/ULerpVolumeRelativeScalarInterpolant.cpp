#include "ULerpVolumeRelativeScalarInterpolant.hpp"
#include "ULerpVolumeScalarInterpolant.hpp"
ULerpVolumeRelativeScalarInterpolant* ULerpVolumeRelativeScalarInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeRelativeScalarInterpolant");
    return (ULerpVolumeRelativeScalarInterpolant*)res;
}
