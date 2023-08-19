#pragma once
#include <cstdint>
#include "EMeshFeatureImportance\Type.hpp"
#include "EStaticMeshReductionTerimationCriterion.hpp"
#include "FPerPlatformInt.hpp"
#pragma pack(push, 1)
struct FMeshReductionSettings {
    float PercentTriangles; // 0x0
    float PercentVertices; // 0x4
    float MaxDeviation; // 0x8
    FPerPlatformInt ScreenSizeInPixels; // 0xc
    float PixelError; // 0x10
    float WeldingThreshold; // 0x14
    float HardAngleThreshold; // 0x18
    int32_t BaseLODModel; // 0x1c
    EMeshFeatureImportance::Type SilhouetteImportance; // 0x20
    EMeshFeatureImportance::Type TextureImportance; // 0x21
    EMeshFeatureImportance::Type ShadingImportance; // 0x22
    uint8_t bRecalculateNormals : 1; // 0x23
    uint8_t bGenerateUniqueLightmapUVs : 1; // 0x23
    uint8_t bKeepSymmetry : 1; // 0x23
    uint8_t bVisibilityAided : 1; // 0x23
    uint8_t bCullOccluded : 1; // 0x23
    uint8_t pad_bitfield_23_5 : 3;
    EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x24
    EMeshFeatureImportance::Type VisibilityAggressiveness; // 0x25
    EMeshFeatureImportance::Type VertexColorImportance; // 0x26
    char pad_27[0x1];
}; // Size: 0x28
#pragma pack(pop)
