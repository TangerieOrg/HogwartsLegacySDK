#include "ULerpVolumeDynamicTagInterpolant.hpp"
#include "ULerpVolumeMapLocationTagInterpolant.hpp"
ULerpVolumeMapLocationTagInterpolant* ULerpVolumeMapLocationTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LerpVolumeMapLocationTagInterpolant");
    return (ULerpVolumeMapLocationTagInterpolant*)res;
}
