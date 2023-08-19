#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#pragma pack(push, 1)
class ARenderSettingsEmissiveAdapatationVolumeBase : public AVolume {
public:
    char pad_280[0x10];
    FBlendDomain BlendDomain; // 0x290
    float Priority; // 0x2c8
    float BlendRadius; // 0x2cc
    float BlendWeight; // 0x2d0
    uint8_t bUnbounded : 1; // 0x2d4
    uint8_t bEnabled : 1; // 0x2d4
    uint8_t pad_bitfield_2d4_2 : 6;
    char pad_2d5[0x3];
    static ARenderSettingsEmissiveAdapatationVolumeBase* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x2d8
#pragma pack(pop)
