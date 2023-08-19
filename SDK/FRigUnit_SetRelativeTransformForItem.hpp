#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable {
    FRigElementKey Child; // 0x68
    FRigElementKey Parent; // 0x74
    bool bParentInitial; // 0x80
    char pad_81[0xf];
    FTransform RelativeTransform; // 0x90
    float weight; // 0xc0
    bool bPropagateToChildren; // 0xc4
    char pad_c5[0x3];
    FCachedRigElement CachedChild; // 0xc8
    FCachedRigElement CachedParent; // 0xdc
}; // Size: 0xf0
#pragma pack(pop)
