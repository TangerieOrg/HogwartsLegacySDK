#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable {
    FVector A; // 0x68
    FVector B; // 0x74
    FLinearColor Color; // 0x80
    float Thickness; // 0x90
    FName Space; // 0x94
    char pad_9c[0x4];
    FTransform WorldOffset; // 0xa0
    bool bEnabled; // 0xd0
    char pad_d1[0xf];
}; // Size: 0xe0
#pragma pack(pop)
