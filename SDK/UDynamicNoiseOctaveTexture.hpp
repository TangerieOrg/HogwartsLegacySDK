#pragma once
#include <cstdint>
#include "FOctaveNoiseParams.hpp"
#include "UDynamicNoiseTextureColorBase.hpp"
#pragma pack(push, 1)
class UDynamicNoiseOctaveTexture : public UDynamicNoiseTextureColorBase {
public:
    FOctaveNoiseParams NoiseParams; // 0x60
    float TimeFactor; // 0x7c
    static UDynamicNoiseOctaveTexture* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
