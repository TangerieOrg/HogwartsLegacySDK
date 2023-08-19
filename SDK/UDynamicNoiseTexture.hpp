#pragma once
#include <cstdint>
#include "FNoiseParams2D.hpp"
#include "UDynamicNoiseTextureColorBase.hpp"
#pragma pack(push, 1)
class UDynamicNoiseTexture : public UDynamicNoiseTextureColorBase {
public:
    FNoiseParams2D NoiseParams; // 0x60
    float TimeFactor; // 0x74
    static UDynamicNoiseTexture* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
