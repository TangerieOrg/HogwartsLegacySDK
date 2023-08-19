#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable {
    FRigElementKey Subject; // 0x68
    int32_t ParentIndex; // 0x74
    FRigElementKeyCollection Parents; // 0x78
    char pad_88[0x8];
    FTransform InitialGlobalTransform; // 0x90
    float weight; // 0xc0
    char pad_c4[0xc];
    FTransform Transform; // 0xd0
    bool Switched; // 0x100
    char pad_101[0x3];
    FCachedRigElement CachedSubject; // 0x104
    FCachedRigElement CachedParent; // 0x118
    char pad_12c[0x4];
    FTransform RelativeOffset; // 0x130
}; // Size: 0x160
#pragma pack(pop)
