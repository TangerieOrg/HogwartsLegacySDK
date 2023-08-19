#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_HierarchyBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase {
    FRigElementKey Parent; // 0x8
    bool bIncludeParent; // 0x14
    bool bRecursive; // 0x15
    char pad_16[0x2];
    FRigElementKeyCollection Children; // 0x18
    FCachedRigElement CachedParent; // 0x28
    char pad_3c[0x4];
    FRigElementKeyCollection CachedChildren; // 0x40
}; // Size: 0x50
#pragma pack(pop)
