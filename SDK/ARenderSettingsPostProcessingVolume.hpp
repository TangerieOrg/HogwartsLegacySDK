#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#pragma pack(push, 1)
class ARenderSettingsPostProcessingVolume : public AVolume {
public:
    char pad_280[0x8];
    FBlendDomain BlendDomain; // 0x288
    float Priority; // 0x2c0
    float BlendRadius; // 0x2c4
    float BlendWeight; // 0x2c8
    uint8_t bUnbounded : 1; // 0x2cc
    uint8_t bEnabled : 1; // 0x2cc
    uint8_t pad_bitfield_2cc_2 : 6;
    char pad_2cd[0x3];
    FPostProcessSettings EnginePostProcessSettings; // 0x2d0
    static ARenderSettingsPostProcessingVolume* StaticClass();
    void Update();
    void SetPriority(float NewPriority);
}; // Size: 0x8c0
#pragma pack(pop)
