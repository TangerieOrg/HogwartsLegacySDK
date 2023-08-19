#pragma once
#include <cstdint>
#include "UMultiFX2_BeamTargetBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_BeamGroundBelow : public UMultiFX2_BeamTargetBase {
public:
    float MaxDistance; // 0x28
    bool bPlayIfNoGround; // 0x2c
    char pad_2d[0x3];
    static UMultiFX2_BeamGroundBelow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
