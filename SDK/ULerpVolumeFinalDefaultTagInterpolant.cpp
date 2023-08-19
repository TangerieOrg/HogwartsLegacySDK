#include "ULerpVolumeFinalDefaultTagInterpolant.hpp"
#include "ULerpVolumeFinalTagInterpolant.hpp"
ULerpVolumeFinalDefaultTagInterpolant* ULerpVolumeFinalDefaultTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeFinalDefaultTagInterpolant");
    return (ULerpVolumeFinalDefaultTagInterpolant*)res;
}
