#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
class UExpHeightFogTransmuter;
class UGlobalLightingBlendableExpHeightFogVolume;
#pragma pack(push, 1)
class ABlendableGlobalLightingVolumeFogBase : public AVolume {
public:
    char pad_280[0x8];
    EGlobalLightingFogZMode FogZMode; // 0x288
    char pad_289[0x7];
    UExpHeightFogTransmuter* Transmuter; // 0x290
    FBlendDomain BlendDomain; // 0x298
    float Priority; // 0x2d0
    float BlendRadius; // 0x2d4
    float BlendWeight; // 0x2d8
    bool bUnbounded; // 0x2dc
    bool bEnabled; // 0x2dd
    char pad_2de[0x2];
    UGlobalLightingBlendableExpHeightFogVolume* GlobalLightingBlendable; // 0x2e0
    static ABlendableGlobalLightingVolumeFogBase* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
