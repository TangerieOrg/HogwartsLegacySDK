#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCelestialHaloMeshParameters {
    int32_t MeshSlices; // 0x0
    float MeshInnerRadius; // 0x4
    float MeshOuterRadius; // 0x8
    bool bUVAsAngleRadius; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
