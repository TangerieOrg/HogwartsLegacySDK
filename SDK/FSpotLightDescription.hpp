#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSpotLightDescription {
    float InnerConeAngle; // 0x0
    float OuterConeAngle; // 0x4
    bool bUseInverseSquaredFalloff; // 0x8
    char pad_9[0x3];
    float LightFalloffExponent; // 0xc
    float SourceRadius; // 0x10
    float SoftSourceRadius; // 0x14
    float SourceLength; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
