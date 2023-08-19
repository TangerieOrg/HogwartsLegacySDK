#pragma once
#include <cstdint>
#include "EViewTargetBlendFunction.hpp"
#pragma pack(push, 1)
struct FViewTargetTransitionParams {
    float BlendTime; // 0x0
    EViewTargetBlendFunction BlendFunction; // 0x4
    char pad_5[0x3];
    float BlendExp; // 0x8
    uint8_t bLockOutgoing : 1; // 0xc
    uint8_t pad_bitfield_c_1 : 7;
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
