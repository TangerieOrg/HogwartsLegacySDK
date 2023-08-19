#pragma once
#include <cstdint>
#include "EARLineTraceChannels.hpp"
#include "FTransform.hpp"
class UARTrackedGeometry;
#pragma pack(push, 1)
struct FARTraceResult {
    float DistanceFromCamera; // 0x0
    EARLineTraceChannels TraceChannel; // 0x4
    char pad_5[0xb];
    FTransform LocalTransform; // 0x10
    UARTrackedGeometry* TrackedGeometry; // 0x40
    char pad_48[0x18];
}; // Size: 0x60
#pragma pack(pop)
