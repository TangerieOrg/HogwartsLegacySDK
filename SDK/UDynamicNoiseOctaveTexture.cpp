#include "FOctaveNoiseParams.hpp"
#include "UDynamicNoiseOctaveTexture.hpp"
#include "UDynamicNoiseTextureColorBase.hpp"
UDynamicNoiseOctaveTexture* UDynamicNoiseOctaveTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/PerlinNoise.DynamicNoiseOctaveTexture");
    return (UDynamicNoiseOctaveTexture*)res;
}
