#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UAkComponent;
class UStaticMeshComponent;
class ASpellTool;
class AActor;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class ABP_PuzzleCube_Levioso_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UAkComponent* Ak_ambient_sound; // 0x2b8
    UStaticMeshComponent* SM_Brazier_SpellCubes_Incendio_Interior; // 0x2c0
    UStaticMeshComponent* StaticMesh; // 0x2c8
    static ABP_PuzzleCube_Levioso_C* StaticClass();
    bool AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity);
    bool DisallowAccio();
    bool DisallowDepulso();
    bool DisallowDescendo();
    bool DisallowFlipendo();
    bool DisallowLevioso();
    bool DisallowWingardium();
    bool ExpulsoStart(AActor* Instigator, FVector Location);
    bool FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects);
    bool WingardiumStart(ASpellTool* SpellTool, AActor* Instigator);
    void OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium);
    void OnAccioFailed();
    void OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnDepulsoFailed();
    void OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnFlipendoFailed();
    void OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnLeviosoFailed(bool InitiatedByPlayer);
    void OnWingardiumEnd(AActor* Instigator);
    void OnWingardiumFailed();
    void OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets);
    void ReceiveBeginPlay();
    void OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_PuzzleCube_Levioso(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2d0
#pragma pack(pop)
