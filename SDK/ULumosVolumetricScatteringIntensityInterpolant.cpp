#include "ULumosDefaultValueInterpolant.hpp"
#include "ULumosVolumetricScatteringIntensityInterpolant.hpp"
ULumosVolumetricScatteringIntensityInterpolant* ULumosVolumetricScatteringIntensityInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosVolumetricScatteringIntensityInterpolant");
    return (ULumosVolumetricScatteringIntensityInterpolant*)res;
}
