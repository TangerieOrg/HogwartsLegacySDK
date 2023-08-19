#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase {
    FVector Value; // 0x8
    float SecondsAgo; // 0x14
    int32_t BufferSize; // 0x18
    float TimeRange; // 0x1c
    FVector Result; // 0x20
    char pad_2c[0x4];
    TArray<FVector> Buffer; // 0x30
    TArray<float> DeltaTimes; // 0x40
    int32_t LastInsertIndex; // 0x50
    int32_t UpperBound; // 0x54
}; // Size: 0x58
#pragma pack(pop)
