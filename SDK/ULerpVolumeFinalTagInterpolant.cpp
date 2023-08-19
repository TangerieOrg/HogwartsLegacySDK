#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeFinalInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalTagInterpolant* ULerpVolumeFinalTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalTagInterpolant");
    return (ULerpVolumeFinalTagInterpolant*)res;
}
