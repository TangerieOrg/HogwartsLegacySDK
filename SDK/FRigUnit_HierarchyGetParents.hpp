#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_HierarchyBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase {
    FRigElementKey Child; // 0x8
    bool bIncludeChild; // 0x14
    bool bReverse; // 0x15
    char pad_16[0x2];
    FRigElementKeyCollection Parents; // 0x18
    FCachedRigElement CachedChild; // 0x28
    char pad_3c[0x4];
    FRigElementKeyCollection CachedParents; // 0x40
}; // Size: 0x50
#pragma pack(pop)
