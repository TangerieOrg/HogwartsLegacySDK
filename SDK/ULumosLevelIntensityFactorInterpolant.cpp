#include "ULumosDefaultValueInterpolant.hpp"
#include "ULumosLevelIntensityFactorInterpolant.hpp"
ULumosLevelIntensityFactorInterpolant* ULumosLevelIntensityFactorInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosLevelIntensityFactorInterpolant");
    return (ULumosLevelIntensityFactorInterpolant*)res;
}
