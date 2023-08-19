#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable {
    TArray<FVector> Points; // 0x68
    FLinearColor Color; // 0x78
    float Thickness; // 0x88
    FName Space; // 0x8c
    char pad_94[0xc];
    FTransform WorldOffset; // 0xa0
    bool bEnabled; // 0xd0
    char pad_d1[0xf];
}; // Size: 0xe0
#pragma pack(pop)
