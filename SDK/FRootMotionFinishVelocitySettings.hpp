#pragma once
#include <cstdint>
#include "ERootMotionFinishVelocityMode.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRootMotionFinishVelocitySettings {
    ERootMotionFinishVelocityMode Mode; // 0x0
    char pad_1[0x3];
    FVector SetVelocity; // 0x4
    float ClampVelocity; // 0x10
}; // Size: 0x14
#pragma pack(pop)
