#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#pragma pack(push, 1)
class ADEPRECATED_WeatherLocalWindVolume : public AVolume {
public:
    char pad_280[0x8];
    FBlendDomain BlendDomain; // 0x288
    float Priority; // 0x2c0
    float BlendRadius; // 0x2c4
    float BlendWeight; // 0x2c8
    bool bEnabled; // 0x2cc
    bool bUnbounded; // 0x2cd
    char pad_2ce[0x2];
    static ADEPRECATED_WeatherLocalWindVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x2d0
#pragma pack(pop)
