#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    float SecondsAgo; // 0x40
    int32_t BufferSize; // 0x44
    float TimeRange; // 0x48
    char pad_4c[0x4];
    FTransform Result; // 0x50
    TArray<FTransform> Buffer; // 0x80
    TArray<float> DeltaTimes; // 0x90
    int32_t LastInsertIndex; // 0xa0
    int32_t UpperBound; // 0xa4
    char pad_a8[0x8];
}; // Size: 0xb0
#pragma pack(pop)
