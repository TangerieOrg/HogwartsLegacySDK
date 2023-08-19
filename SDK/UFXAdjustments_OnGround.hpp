#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_OnGround : public UFXAdjustments {
public:
    float TraceDistance; // 0x28
    float TraceRadius; // 0x2c
    bool bPlayIfNoGround; // 0x30
    bool bUseGroundTarget; // 0x31
    bool bUseGroundPosition; // 0x32
    bool bUseGoundNormalOrientation; // 0x33
    char pad_34[0x4];
    static UFXAdjustments_OnGround* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
