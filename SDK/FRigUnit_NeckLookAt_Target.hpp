#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_Target {
    float weight; // 0x0
    FVector TargetLocation; // 0x4
    FName Space; // 0x10
    float MaxYaw; // 0x18
    float MinPitch; // 0x1c
    float MaxPitch; // 0x20
}; // Size: 0x24
#pragma pack(pop)
