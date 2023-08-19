#pragma once
#include <cstdint>
#include "FCCDIKChainLink.hpp"
#include "FCachedRigElement.hpp"
#pragma pack(push, 1)
struct FRigUnit_CCDIK_WorkData {
    TArray<FCCDIKChainLink> Chain; // 0x0
    TArray<FCachedRigElement> CachedItems; // 0x10
    TArray<int32_t> RotationLimitIndex; // 0x20
    TArray<float> RotationLimitsPerItem; // 0x30
    FCachedRigElement CachedEffector; // 0x40
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
