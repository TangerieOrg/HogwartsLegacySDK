#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit {
    FRigElementKey Child; // 0x8
    bool bChildInitial; // 0x14
    char pad_15[0x3];
    FRigElementKey Parent; // 0x18
    bool bParentInitial; // 0x24
    char pad_25[0xb];
    FTransform RelativeTransform; // 0x30
    FCachedRigElement CachedChild; // 0x60
    FCachedRigElement CachedParent; // 0x74
    char pad_88[0x8];
}; // Size: 0x90
#pragma pack(pop)
