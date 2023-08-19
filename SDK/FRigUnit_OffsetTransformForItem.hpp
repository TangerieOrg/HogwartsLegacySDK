#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    char pad_74[0xc];
    FTransform OffsetTransform; // 0x80
    float weight; // 0xb0
    bool bPropagateToChildren; // 0xb4
    char pad_b5[0x3];
    FCachedRigElement CachedIndex; // 0xb8
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
