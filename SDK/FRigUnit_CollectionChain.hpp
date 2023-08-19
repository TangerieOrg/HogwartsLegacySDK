#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase {
    FRigElementKey FirstItem; // 0x8
    FRigElementKey LastItem; // 0x14
    bool Reverse; // 0x20
    char pad_21[0x7];
    FRigElementKeyCollection Collection; // 0x28
    FRigElementKeyCollection CachedCollection; // 0x38
    int32_t CachedHierarchyHash; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
