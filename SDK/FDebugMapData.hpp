#pragma once
#include <cstdint>
#include "FDebugMapLine.hpp"
#include "FDebugMapPoint.hpp"
#include "FVector.hpp"
class APhoenixPathActor;
#pragma pack(push, 1)
struct FDebugMapData {
    char pad_0[0x8];
    TArray<FDebugMapLine> DrawLines; // 0x8
    TArray<FDebugMapPoint> drawPoints; // 0x18
    FVector Offset; // 0x28
    float Width; // 0x34
    float Scale; // 0x38
    char pad_3c[0x4];
    TArray<APhoenixPathActor*> meshActors; // 0x40
}; // Size: 0x50
#pragma pack(pop)
