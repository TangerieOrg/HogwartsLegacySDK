#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULumosDefaultValueInterpolant.hpp"
ULumosDefaultValueInterpolant* ULumosDefaultValueInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosDefaultValueInterpolant");
    return (ULumosDefaultValueInterpolant*)res;
}
