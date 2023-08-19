#pragma once
#include <cstdint>
#include "ERigElementType.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase {
    FRigElementKey Parent; // 0x8
    bool bIncludeParent; // 0x14
    bool bRecursive; // 0x15
    ERigElementType TypeToSearch; // 0x16
    char pad_17[0x1];
    FRigElementKeyCollection Collection; // 0x18
    FRigElementKeyCollection CachedCollection; // 0x28
    int32_t CachedHierarchyHash; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
