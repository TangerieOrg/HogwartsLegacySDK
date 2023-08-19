#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FClothFabricCookedData {
    uint32_t NumParticles; // 0x0
    char pad_4[0x4];
    TArray<uint32_t> PhaseIndices; // 0x8
    TArray<int32_t> PhaseTypes; // 0x18
    TArray<uint32_t> Sets; // 0x28
    TArray<float> Restvalues; // 0x38
    TArray<float> StiffnessValues; // 0x48
    TArray<uint32_t> Indices; // 0x58
    TArray<uint32_t> Anchors; // 0x68
    TArray<float> TetherLengths; // 0x78
    TArray<uint32_t> Triangles; // 0x88
}; // Size: 0x98
#pragma pack(pop)
