#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase {
    FRigElementKeyCollection Items; // 0x8
    FName Old; // 0x18
    FName NEW; // 0x20
    bool RemoveInvalidItems; // 0x28
    char pad_29[0x7];
    FRigElementKeyCollection Collection; // 0x30
    FRigElementKeyCollection CachedCollection; // 0x40
    int32_t CachedHierarchyHash; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
