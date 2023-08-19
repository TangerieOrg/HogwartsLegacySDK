#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_HierarchyBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase {
    FRigElementKey Item; // 0x8
    bool bIncludeItem; // 0x14
    char pad_15[0x3];
    FRigElementKeyCollection Siblings; // 0x18
    FCachedRigElement CachedItem; // 0x28
    char pad_3c[0x4];
    FRigElementKeyCollection CachedSiblings; // 0x40
}; // Size: 0x50
#pragma pack(pop)
