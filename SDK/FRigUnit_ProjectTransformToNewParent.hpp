#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit {
    FRigElementKey Child; // 0x8
    bool bChildInitial; // 0x14
    char pad_15[0x3];
    FRigElementKey OldParent; // 0x18
    bool bOldParentInitial; // 0x24
    char pad_25[0x3];
    FRigElementKey NewParent; // 0x28
    bool bNewParentInitial; // 0x34
    char pad_35[0xb];
    FTransform Transform; // 0x40
    FCachedRigElement CachedChild; // 0x70
    FCachedRigElement CachedOldParent; // 0x84
    FCachedRigElement CachedNewParent; // 0x98
    char pad_ac[0x4];
}; // Size: 0xb0
#pragma pack(pop)
