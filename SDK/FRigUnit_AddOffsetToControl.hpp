#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_AddOffsetToControl_BoneOffset.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_AddOffsetToControl : public FRigUnitMutable {
    FName Control; // 0x68
    TArray<FRigUnit_AddOffsetToControl_BoneOffset> BoneOffsets; // 0x70
    FRuntimeFloatCurve HeightWeightCurve; // 0x80
    FRuntimeFloatCurve HeightMappingCurve; // 0x108
    FTransform Transform; // 0x190
    int32_t CachedControlIndex; // 0x1c0
    char pad_1c4[0xc];
}; // Size: 0x1d0
#pragma pack(pop)
