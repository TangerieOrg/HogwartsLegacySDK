#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "SkeletalMeshOptimizationImportance.hpp"
#include "SkeletalMeshOptimizationType.hpp"
#include "SkeletalMeshTerminationCriterion.hpp"
#pragma pack(push, 1)
struct FSkeletalMeshOptimizationSettings {
    SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0
    char pad_1[0x3];
    float NumOfTrianglesPercentage; // 0x4
    float NumOfVertPercentage; // 0x8
    uint32_t MaxNumOfTriangles; // 0xc
    uint32_t MaxNumOfVerts; // 0x10
    float MaxDeviationPercentage; // 0x14
    FPerPlatformInt ScreenSizeInPixels; // 0x18
    SkeletalMeshOptimizationType ReductionMethod; // 0x1c
    SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x1d
    SkeletalMeshOptimizationImportance TextureImportance; // 0x1e
    SkeletalMeshOptimizationImportance ShadingImportance; // 0x1f
    SkeletalMeshOptimizationImportance SkinningImportance; // 0x20
    FPerPlatformBool bRemapMorphTargets; // 0x21
    uint8_t bRecalcNormals : 1; // 0x22
    uint8_t pad_bitfield_22_1 : 7;
    char pad_23[0x1];
    float WeldingThreshold; // 0x24
    float NormalsThreshold; // 0x28
    int32_t MaxBonesPerVertex; // 0x2c
    uint8_t bEnforceBoneBoundaries : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    float VolumeImportance; // 0x34
    uint8_t bLockEdges : 1; // 0x38
    uint8_t bLockColorBounaries : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x3];
    int32_t BaseLOD; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
