#pragma once
#include <cstdint>
#include "FSolverBreakingData.hpp"
#include "FSolverCollisionData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRecordedFrame {
    TArray<FTransform> Transforms; // 0x0
    TArray<int32_t> TransformIndices; // 0x10
    TArray<int32_t> PreviousTransformIndices; // 0x20
    TArray<bool> DisabledFlags; // 0x30
    TArray<FSolverCollisionData> Collisions; // 0x40
    TArray<FSolverBreakingData> Breakings; // 0x50
    char pad_60[0x50];
    float Timestamp; // 0xb0
    char pad_b4[0x4];
}; // Size: 0xb8
#pragma pack(pop)
