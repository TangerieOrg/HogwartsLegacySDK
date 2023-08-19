#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
class UGlobalLightingBlendable;
#pragma pack(push, 1)
class ABlendableGlobalLightingVolume : public AVolume {
public:
    char pad_280[0x8];
    UGlobalLightingBlendable* GlobalLightingBlendable; // 0x288
    FBlendDomain BlendDomain; // 0x290
    float Priority; // 0x2c8
    float BlendRadius; // 0x2cc
    float BlendWeight; // 0x2d0
    uint8_t bUnbounded : 1; // 0x2d4
    uint8_t bEnabled : 1; // 0x2d4
    uint8_t bCameraExpHeightFogHeight_DEPRICATED : 1; // 0x2d4
    uint8_t pad_bitfield_2d4_3 : 5;
    char pad_2d5[0x3];
    EGlobalLightingFogZMode FogZMode; // 0x2d8
    char pad_2d9[0x7];
    static ABlendableGlobalLightingVolume* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
