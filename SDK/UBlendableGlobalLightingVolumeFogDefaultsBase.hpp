#pragma once
#include <cstdint>
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UDataAsset.hpp"
class UExpHeightFogTransmuter;
#pragma pack(push, 1)
class UBlendableGlobalLightingVolumeFogDefaultsBase : public UDataAsset {
public:
    EGlobalLightingFogZMode FogZMode; // 0x30
    char pad_31[0x7];
    UExpHeightFogTransmuter* Transmuter; // 0x38
    FBlendDomain BlendDomain; // 0x40
    float Priority; // 0x78
    float BlendRadius; // 0x7c
    static UBlendableGlobalLightingVolumeFogDefaultsBase* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
