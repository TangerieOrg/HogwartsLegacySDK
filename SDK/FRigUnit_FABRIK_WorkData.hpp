#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FFABRIKChainLink.hpp"
#pragma pack(push, 1)
struct FRigUnit_FABRIK_WorkData {
    TArray<FFABRIKChainLink> Chain; // 0x0
    TArray<FCachedRigElement> CachedItems; // 0x10
    FCachedRigElement CachedEffector; // 0x20
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
