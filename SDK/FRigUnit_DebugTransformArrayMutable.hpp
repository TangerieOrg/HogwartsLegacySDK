#pragma once
#include <cstdint>
#include "ERigUnitDebugTransformMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FRigUnit_DebugTransformArrayMutable_WorkData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable {
    TArray<FTransform> Transforms; // 0x68
    ERigUnitDebugTransformMode Mode; // 0x78
    char pad_79[0x3];
    FLinearColor Color; // 0x7c
    float Thickness; // 0x8c
    float Scale; // 0x90
    FName Space; // 0x94
    char pad_9c[0x4];
    FTransform WorldOffset; // 0xa0
    bool bEnabled; // 0xd0
    char pad_d1[0x7];
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8
    char pad_e8[0x8];
}; // Size: 0xf0
#pragma pack(pop)
