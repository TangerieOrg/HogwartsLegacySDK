#pragma once
#include <cstdint>
#include "ERigElementType.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase {
    FName PartialName; // 0x8
    ERigElementType TypeToSearch; // 0x10
    char pad_11[0x7];
    FRigElementKeyCollection Collection; // 0x18
    FRigElementKeyCollection CachedCollection; // 0x28
    int32_t CachedHierarchyHash; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
