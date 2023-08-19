#pragma once
#include <cstdint>
#include "EClusterConnectionTypeEnum.hpp"
#include "FGeometryCollectionEmbeddedExemplar.hpp"
#include "FGeometryCollectionSizeSpecificData.hpp"
#include "FGuid.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UGeometryCollection : public UObject {
public:
    bool EnableClustering; // 0x28
    char pad_29[0x3];
    int32_t ClusterGroupIndex; // 0x2c
    int32_t MaxClusterLevel; // 0x30
    char pad_34[0x4];
    TArray<float> DamageThreshold; // 0x38
    EClusterConnectionTypeEnum ClusterConnectionType; // 0x48
    char pad_49[0x7];
    TArray<UMaterialInterface*> Materials; // 0x50
    TArray<FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0x60
    bool bUseFullPrecisionUVs; // 0x70
    bool bMassAsDensity; // 0x71
    char pad_72[0x2];
    float Mass; // 0x74
    float MinimumMassClamp; // 0x78
    bool bUpdateMaterialFadeAmount; // 0x7c
    bool bRemoveOnMaxSleep; // 0x7d
    bool bShrinkOnMaxSleep; // 0x7e
    char pad_7f[0x1];
    FVector2D MaximumSleepTime; // 0x80
    FVector2D RemovalDuration; // 0x88
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x90
    bool EnableRemovePiecesOnFracture; // 0xa0
    char pad_a1[0x7];
    TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0xa8
    FGuid PersistentGuid; // 0xb8
    FGuid StateGuid; // 0xc8
    int32_t BoneSelectedMaterialIndex; // 0xd8
    char pad_dc[0x14];
    static UGeometryCollection* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
