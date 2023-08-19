#pragma once
#include <cstdint>
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting {
public:
    int32_t TileCount; // 0x48
    float TextureSharpnessBias; // 0x4c
    float OverlapRatio; // 0x50
    bool bOverrideSubSurfaceScattering; // 0x54
    char pad_55[0x3];
    int32_t BurleySampleCount; // 0x58
    char pad_5c[0x4];
    static UMoviePipelineHighResSetting* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
