#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_PropagateTransform : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    bool bRecomputeGlobal; // 0x74
    bool bApplyToChildren; // 0x75
    bool bRecursive; // 0x76
    char pad_77[0x1];
    FCachedRigElement CachedIndex; // 0x78
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
