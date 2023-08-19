#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableWeatherFog : public UGlobalLightingBlendableBase {
public:
    FExpHeightFogParameters FogParameters; // 0x28
    bool bUseEye; // 0x200
    bool bValid; // 0x201
    char pad_202[0x6];
    static UGlobalLightingBlendableWeatherFog* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
