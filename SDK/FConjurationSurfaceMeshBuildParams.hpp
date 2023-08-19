#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FConjurationSurfaceMeshBuildParams {
    float MaxAngle; // 0x0
    float MaxClimb; // 0x4
    float Radius; // 0x8
    float BorderSize; // 0xc
    float MinArea; // 0x10
}; // Size: 0x14
#pragma pack(pop)
