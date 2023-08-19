#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPointLightDescription {
    bool bUseInverseSquaredFalloff; // 0x0
    char pad_1[0x3];
    float LightFalloffExponent; // 0x4
    float SourceRadius; // 0x8
    float SoftSourceRadius; // 0xc
    float SourceLength; // 0x10
}; // Size: 0x14
#pragma pack(pop)
