#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UClass;
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UMaterialInterface;
class AActor;
class USceneComponent;
class USkinFXComponent;
#pragma pack(push, 1)
class AFinisherSpellTool : public AChannelingSpellTool {
public:
    float InitialWorldTimeDilation; // 0x960
    float InitialPlayerTimeDilation; // 0x964
    float FinishWorldTimeDilation; // 0x968
    char pad_96c[0x4];
    UClass* HitAOEMunitionActor; // 0x970
    FGameplayTagContainer HitAOEMunitionTagContainer; // 0x978
    UInteractionArchitectAsset* HitAOEMunitionDataAsset; // 0x998
    TArray<UMultiFX2_Base*> HitFX2; // 0x9a0
    bool DestroyTargetOnDeath; // 0x9b0
    char pad_9b1[0x7];
    UClass* AOEMunitionActor; // 0x9b8
    FGameplayTagContainer AOEMunitionTagContainer; // 0x9c0
    UInteractionArchitectAsset* AOEMunitionDataAsset; // 0x9e0
    TArray<UMultiFX2_Base*> DeathFX2; // 0x9e8
    UMaterialInterface* DeathDecalMaterial; // 0x9f8
    FVector DeathDecalSize; // 0xa00
    float DeathDecalLifeSpan; // 0xa0c
    float DeathDecalFadeTime; // 0xa10
    char pad_a14[0x4];
    UClass* DeathDecal3D; // 0xa18
    bool DeathDecal3DRandomOrientation; // 0xa20
    bool DeathDecalOnlyOnGround; // 0xa21
    char pad_a22[0x6];
    TArray<UMultiFX2_Base*> GroundFX2; // 0xa28
    char pad_a38[0x1c8];
    AActor* TargetActor; // 0xc00
    USceneComponent* TargetComponent; // 0xc08
    char pad_c10[0x18];
    static AFinisherSpellTool* StaticClass();
    void SpellStarted(AActor* WandWielder);
    void OnFinisherHit(AActor* Target);
    void OnFinisherEnd(AActor* Target);
    void OnFinisherDeath(AActor* Target);
    USkinFXComponent* GetSkinFxComponent();
    void FinisherFail();
}; // Size: 0xc28
#pragma pack(pop)
