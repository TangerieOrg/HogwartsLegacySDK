#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FCrackFillerPostProcessSettings.hpp"
#include "FVector.hpp"
class UStaticMesh;
class UClass;
class UMaterialInterface;
class UMaterialParameterCollection;
class UStaticMeshComponent;
class UPostProcessComponent;
#pragma pack(push, 1)
class ACullingHammer : public AActor {
public:
    TArray<AActor*> IgnoreLevelActors; // 0x248
    TArray<FString> IgnoreLevelActorsByName; // 0x258
    TArray<UClass*> IgnoreActorClasses; // 0x268
    TArray<UClass*> CustomVisiblePrimitiveClasses; // 0x278
    UStaticMesh* BlockerMesh; // 0x288
    UMaterialInterface* BlockerMaterial; // 0x290
    FVector WorldBoundsAdd; // 0x298
    float WorldBoundsScale; // 0x2a4
    int32_t BlockerTranslucentSortPriority; // 0x2a8
    bool bUseRadius; // 0x2ac
    bool bCreateOnBeginPlay; // 0x2ad
    bool bEnableBlockerObject; // 0x2ae
    char pad_2af[0x1];
    float ObjectBoundsScalePercent; // 0x2b0
    bool bObjectBoundsScalePercent; // 0x2b4
    char pad_2b5[0x3];
    UMaterialInterface* CrackFillerMaterial; // 0x2b8
    UMaterialParameterCollection* CrackFillerMPC; // 0x2c0
    FCrackFillerPostProcessSettings CrackFillerSettings; // 0x2c8
    bool bEnableCrackFiller; // 0x2e4
    char pad_2e5[0x3];
    UStaticMeshComponent* BlockerComponent; // 0x2e8
    UPostProcessComponent* CrackFillerPostProcess; // 0x2f0
    static ACullingHammer* StaticClass();
    void RebuildBlocker();
    void EnableCrackFillerPostProcess(bool bEnable);
}; // Size: 0x2f8
#pragma pack(pop)
