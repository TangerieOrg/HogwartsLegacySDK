#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLightmassPrimitiveSettings.hpp"
#include "FStaticMeshComponentLODInfo.hpp"
#include "FStreamingTextureBuildInfo.hpp"
#include "UMeshComponent.hpp"
class UStaticMesh;
struct FVector;
#pragma pack(push, 1)
class UStaticMeshComponent : public UMeshComponent {
public:
    int32_t MinLOD; // 0x4b0
    int32_t SubDivisionStepSize; // 0x4b4
    UStaticMesh* StaticMesh; // 0x4b8
    FColor WireframeColorOverride; // 0x4c0
    uint8_t bEvaluateWorldPositionOffset : 1; // 0x4c4
    uint8_t bUsedForWater : 1; // 0x4c4
    uint8_t bOverrideWireframeColor : 1; // 0x4c4
    uint8_t bOverrideMinLOD : 1; // 0x4c4
    uint8_t bOverrideNavigationExport : 1; // 0x4c4
    uint8_t bForceNavigationObstacle : 1; // 0x4c4
    uint8_t bDisallowMeshPaintPerInstance : 1; // 0x4c4
    uint8_t bIgnoreInstanceForTextureStreaming : 1; // 0x4c4
    uint8_t bOverrideLightMapRes : 1; // 0x4c5
    uint8_t bCastDistanceFieldIndirectShadow : 1; // 0x4c5
    uint8_t bOverrideDistanceFieldSelfShadowBias : 1; // 0x4c5
    uint8_t bUseSubDivisions : 1; // 0x4c5
    uint8_t bUseDefaultCollision : 1; // 0x4c5
    uint8_t bReverseCulling : 1; // 0x4c5
    uint8_t pad_bitfield_4c5_6 : 2;
    char pad_4c6[0x2];
    int32_t OverriddenLightMapRes; // 0x4c8
    float DistanceFieldIndirectShadowMinVisibility; // 0x4cc
    float DistanceFieldSelfShadowBias; // 0x4d0
    float StreamingDistanceMultiplier; // 0x4d4
    TArray<FStaticMeshComponentLODInfo> LODData; // 0x4d8
    TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4e8
    FLightmassPrimitiveSettings LightmassSettings; // 0x4f8
    static UStaticMeshComponent* StaticClass();
    bool SetStaticMesh(UStaticMesh* NewMesh);
    void SetReverseCulling(bool ReverseCulling);
    void SetForcedLodModel(int32_t NewForcedLodModel);
    void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue);
    void SetDistanceFieldSelfShadowBias(float NewValue);
    void OnRep_StaticMesh(UStaticMesh* OldStaticMesh);
    void GetLocalBounds(FVector& Min, FVector& Max);
}; // Size: 0x510
#pragma pack(pop)
