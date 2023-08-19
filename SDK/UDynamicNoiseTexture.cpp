#include "FNoiseParams2D.hpp"
#include "UDynamicNoiseTexture.hpp"
#include "UDynamicNoiseTextureColorBase.hpp"
UDynamicNoiseTexture* UDynamicNoiseTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseTexture");
    return (UDynamicNoiseTexture*)res;
}
