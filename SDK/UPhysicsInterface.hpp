#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class ASpellTool;
class AActor;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UPhysicsInterface : public UInterface {
public:
    static UPhysicsInterface* StaticClass();
    bool WingardiumStart(ASpellTool* SpellTool, AActor* Instigator);
    void OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets);
    void OnWingardiumFailed();
    void OnWingardiumEnd(AActor* Instigator);
    void OnLeviosoFailed(bool InitiatedByPlayer);
    void OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer);
    void OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnFlipendoFailed();
    void OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnDepulsoFailed();
    void OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnAccioFailed();
    void OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium);
    bool LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects);
    bool LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool ExpulsoStart(AActor* Instigator, FVector Location);
    bool DisallowWingardium();
    bool DisallowLevioso();
    bool DisallowFlipendo();
    bool DisallowDescendo();
    bool DisallowDepulso();
    bool DisallowAccio();
    bool DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity);
    bool DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
}; // Size: 0x28
#pragma pack(pop)
