#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLandscapePointData {
    FVector PointLocation; // 0x0
    FVector TangentLocation; // 0xc
    float Width; // 0x18
    char pad_1c[0x4];
    TArray<FName> Tags; // 0x20
}; // Size: 0x30
#pragma pack(pop)
