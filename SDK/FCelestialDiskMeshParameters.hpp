#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCelestialDiskMeshParameters {
    int32_t MeshSlices; // 0x0
    float MeshRadius; // 0x4
    bool bUVAsAngleRadius; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
