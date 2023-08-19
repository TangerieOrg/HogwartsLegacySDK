#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FDirectionalLightDistanceFieldShadowsRelative {
    FAdjustedValueBoolean bUseRayTracedDistanceFieldShadows; // 0x0
    char pad_1[0x3];
    FAdjustedValueFloat RayStartOffsetDepthScale; // 0x4
    FAdjustedValueFloat DistanceFieldShadowDistance; // 0x24
    FAdjustedValueFloat TraceDistance; // 0x44
}; // Size: 0x64
#pragma pack(pop)
