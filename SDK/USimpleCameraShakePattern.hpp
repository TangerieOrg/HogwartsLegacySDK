#pragma once
#include <cstdint>
#include "UCameraShakePattern.hpp"
#pragma pack(push, 1)
class USimpleCameraShakePattern : public UCameraShakePattern {
public:
    float Duration; // 0x28
    float BlendInTime; // 0x2c
    float BlendOutTime; // 0x30
    char pad_34[0x4];
    static USimpleCameraShakePattern* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
