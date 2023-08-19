#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FVolumeCenterlineSettings.hpp"
class ULerpVolumeInterpolant;
#pragma pack(push, 1)
class ALerpVolume : public AVolume {
public:
    char pad_280[0x8];
    TArray<ULerpVolumeInterpolant*> Interpolants; // 0x288
    FVolumeCenterlineSettings Shape; // 0x298
    char pad_2a4[0x4];
    FBlendDomain BlendDomain; // 0x2a8
    float Priority; // 0x2e0
    float BlendRadius; // 0x2e4
    float BlendWeight; // 0x2e8
    uint8_t bUnbounded : 1; // 0x2ec
    uint8_t bEnabled : 1; // 0x2ec
    uint8_t pad_bitfield_2ec_2 : 6;
    char pad_2ed[0x3];
    static ALerpVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x2f0
#pragma pack(pop)
