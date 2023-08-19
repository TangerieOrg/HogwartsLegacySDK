#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FPostProcessSettings.hpp"
#pragma pack(push, 1)
class APostProcessVolume : public AVolume {
public:
    char pad_280[0x10];
    FPostProcessSettings Settings; // 0x290
    float Priority; // 0x880
    float BlendRadius; // 0x884
    float BlendWeight; // 0x888
    uint8_t bEnabled : 1; // 0x88c
    uint8_t bUnbound : 1; // 0x88c
    uint8_t pad_bitfield_88c_2 : 6;
    char pad_88d[0x3];
    static APostProcessVolume* StaticClass();
    void AddOrUpdateBlendable();
}; // Size: 0x890
#pragma pack(pop)
