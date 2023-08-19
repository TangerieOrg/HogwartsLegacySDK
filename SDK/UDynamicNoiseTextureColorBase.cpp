#include "UCurveLinearColor.hpp"
#include "UDynamicNoiseTextureBase.hpp"
#include "UDynamicNoiseTextureColorBase.hpp"
UDynamicNoiseTextureColorBase* UDynamicNoiseTextureColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseTextureColorBase");
    return (UDynamicNoiseTextureColorBase*)res;
}
