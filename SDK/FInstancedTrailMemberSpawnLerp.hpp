#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FInstancedTrailMemberSpawnLerp {
    FRuntimeFloatCurve Curve; // 0x0
    FVector RotateAxis; // 0x88
    bool bRotateAxis; // 0x94
    char pad_95[0x3];
    float RotateDegrees; // 0x98
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)
