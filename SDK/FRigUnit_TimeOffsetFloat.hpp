#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase {
    float Value; // 0x8
    float SecondsAgo; // 0xc
    int32_t BufferSize; // 0x10
    float TimeRange; // 0x14
    float Result; // 0x18
    char pad_1c[0x4];
    TArray<float> Buffer; // 0x20
    TArray<float> DeltaTimes; // 0x30
    int32_t LastInsertIndex; // 0x40
    int32_t UpperBound; // 0x44
}; // Size: 0x48
#pragma pack(pop)
