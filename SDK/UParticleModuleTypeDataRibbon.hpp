#pragma once
#include <cstdint>
#include "ETrailsRenderAxisOption.hpp"
#include "UParticleModuleTypeDataBase.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase {
public:
    int32_t MaxTessellationBetweenParticles; // 0x30
    int32_t SheetsPerTrail; // 0x34
    int32_t MaxTrailCount; // 0x38
    int32_t MaxParticleInTrailCount; // 0x3c
    int32_t NumRibbonVerts; // 0x40
    bool ConnectAdjecentRibbons; // 0x44
    char pad_45[0x3];
    UStaticMesh* Mesh; // 0x48
    char pad_50[0x40];
    uint8_t bDeadTrailsOnDeactivate : 1; // 0x90
    uint8_t bDeadTrailsOnSourceLoss : 1; // 0x90
    uint8_t bClipSourceSegement : 1; // 0x90
    uint8_t bEnablePreviousTangentRecalculation : 1; // 0x90
    uint8_t bTangentRecalculationEveryFrame : 1; // 0x90
    uint8_t bSpawnInitialParticle : 1; // 0x90
    uint8_t pad_bitfield_90_6 : 2;
    char pad_91[0x3];
    ETrailsRenderAxisOption RenderAxis; // 0x94
    char pad_95[0x3];
    float TangentSpawningScalar; // 0x98
    uint8_t bRenderGeometry : 1; // 0x9c
    uint8_t bRenderSpawnPoints : 1; // 0x9c
    uint8_t bRenderTangents : 1; // 0x9c
    uint8_t bRenderTessellation : 1; // 0x9c
    uint8_t pad_bitfield_9c_4 : 4;
    char pad_9d[0x3];
    float TilingDistance; // 0xa0
    float DistanceTessellationStepSize; // 0xa4
    uint8_t bEnableTangentDiffInterpScale : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    char pad_a9[0x3];
    float TangentTessellationScalar; // 0xac
    static UParticleModuleTypeDataRibbon* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
