#pragma once
#include <cstdint>
#include "ETeleportType.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRootMotionMovementParams {
    bool bHasRootMotion; // 0x0
    char pad_1[0x3];
    float BlendWeight; // 0x4
    float RotationBlendWeight; // 0x8
    ETeleportType TeleportType; // 0xc
    char pad_d[0x3];
    FTransform RootMotionTransform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
