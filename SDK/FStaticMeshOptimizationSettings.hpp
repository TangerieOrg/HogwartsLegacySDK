#pragma once
#include <cstdint>
#include "EOptimizationType.hpp"
#pragma pack(push, 1)
struct FStaticMeshOptimizationSettings {
    EOptimizationType ReductionMethod; // 0x0
    char pad_1[0x3];
    float NumOfTrianglesPercentage; // 0x4
    float MaxDeviationPercentage; // 0x8
    float WeldingThreshold; // 0xc
    bool bRecalcNormals; // 0x10
    char pad_11[0x3];
    float NormalsThreshold; // 0x14
    uint8_t SilhouetteImportance; // 0x18
    uint8_t TextureImportance; // 0x19
    uint8_t ShadingImportance; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
