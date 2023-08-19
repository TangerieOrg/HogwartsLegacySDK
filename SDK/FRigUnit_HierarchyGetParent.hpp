#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_HierarchyBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase {
    FRigElementKey Child; // 0x8
    FRigElementKey Parent; // 0x14
    FCachedRigElement CachedChild; // 0x20
    FCachedRigElement CachedParent; // 0x34
}; // Size: 0x48
#pragma pack(pop)
