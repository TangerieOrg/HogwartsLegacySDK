#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_KeepOnGround : public UFXUpdate_Tick {
public:
    float MaxDistance; // 0x80
    float InterpolationWeight; // 0x84
    bool bPlayIfNoGround; // 0x88
    bool bOrientToGround; // 0x89
    bool bReApplyAdjustments; // 0x8a
    char pad_8b[0x5];
    static UFXUpdate_KeepOnGround* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
