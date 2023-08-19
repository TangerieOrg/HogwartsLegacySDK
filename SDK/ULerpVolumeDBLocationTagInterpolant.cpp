#include "ULerpVolumeDBLocationTagInterpolant.hpp"
#include "ULerpVolumeDynamicTagInterpolant.hpp"
ULerpVolumeDBLocationTagInterpolant* ULerpVolumeDBLocationTagInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LerpVolumeDBLocationTagInterpolant");
    return (ULerpVolumeDBLocationTagInterpolant*)res;
}
