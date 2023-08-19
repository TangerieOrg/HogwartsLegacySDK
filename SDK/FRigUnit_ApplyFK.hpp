#pragma once
#include <cstdint>
#include "EApplyTransformMode.hpp"
#include "ETransformSpaceMode.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#include "FTransformFilter.hpp"
#pragma pack(push, 1)
struct FRigUnit_ApplyFK : public FRigUnitMutable {
    FName Joint; // 0x68
    FTransform Transform; // 0x70
    FTransformFilter Filter; // 0xa0
    EApplyTransformMode ApplyTransformMode; // 0xa9
    ETransformSpaceMode ApplyTransformSpace; // 0xaa
    char pad_ab[0x5];
    FTransform BaseTransform; // 0xb0
    FName BaseJoint; // 0xe0
    char pad_e8[0x8];
}; // Size: 0xf0
#pragma pack(pop)
