#pragma once
#include <cstdint>
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "USceneComponent.hpp"
class UGlobalLightingBlendable;
#pragma pack(push, 1)
class UBlendableGlobalLightingComponent : public USceneComponent {
public:
    UGlobalLightingBlendable* GlobalLightingBlendable; // 0x220
    FBlendDomain BlendDomain; // 0x228
    float Priority; // 0x260
    float BlendRadius; // 0x264
    float BlendWeight; // 0x268
    uint8_t bEnabled : 1; // 0x26c
    uint8_t bUnbounded : 1; // 0x26c
    uint8_t bCameraExpHeightFogHeight_DEPRICATED : 1; // 0x26c
    uint8_t pad_bitfield_26c_3 : 5;
    char pad_26d[0x3];
    EGlobalLightingFogZMode FogZMode; // 0x270
    char pad_271[0xf];
    static UBlendableGlobalLightingComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
