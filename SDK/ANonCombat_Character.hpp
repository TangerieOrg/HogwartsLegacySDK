#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
#include "FGameplayTag.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
class UNPC_ReactionComponent;
class USocialAgentPathFollowerComponent;
class UCustomizableCharacterComponent;
class UObject;
class UCognitionStimuliSourceComponent;
class UAblReactionData;
class UInteractionArchitectAsset;
class UClass;
class UAblReactionComponent;
class UCapsuleComponent;
#pragma pack(push, 1)
class ANonCombat_Character : public ABase_Character {
public:
    FGameplayTag GroupTag; // 0x1660
    USocialAgentPathFollowerComponent* SocialAgentComponent; // 0x1668
    UCustomizableCharacterComponent* CCComponent; // 0x1670
    UCognitionStimuliSourceComponent* CogSourceComp; // 0x1678
    UNPC_ReactionComponent* NPCReactionComponent; // 0x1680
    bool bAllowDBInstanceRedirect; // 0x1688
    bool bCreateScheduledEntity; // 0x1689
    bool bIsAScheduledEntity; // 0x168a
    char pad_168b[0x5];
    FString DefaultWorldID; // 0x1690
    char pad_16a0[0x148];
    UInteractionArchitectAsset* DefaultMunition; // 0x17e8
    FVariantMapHandle NPCVariantMapHandle; // 0x17f0
    char pad_17f4[0x4];
    UClass* IdleAbility; // 0x17f8
    UClass* MoveStartAbility; // 0x1800
    UClass* MoveAbility; // 0x1808
    UClass* PivotAbility; // 0x1810
    UClass* StairAbility; // 0x1818
    UClass* MoveStopAbility; // 0x1820
    char pad_1828[0x8];
    static ANonCombat_Character* StaticClass();
    void UnregisterForInteractionSense(UObject* InObject);
    void Suspend(UObject* i_caller);
    void StopCustomAbility();
    void StopAndIdle(UObject* i_caller);
    void StartChildSpawnFX(FTransform inSpawnLoc);
    void Resume(UObject* i_caller);
    void Release(UObject* i_caller);
    void RegisterForInteractionSense(UObject* InObject);
    void PlayCustomAbility(UClass* InAbility, bool bPreventReactions);
    void OnStationOnFinishedExit();
    void OnStationOnFinishedEnter();
    void OnReactionQueued(UAblReactionData* InReactionData, UAblReactionComponent* InReactionComponent);
    void OnReactionEnd(UAblReactionData* InReactionData, UAblReactionComponent* InReactionComponent);
    void OnChildSpawnFX(FTransform inSpawnLoc);
    bool IsSuspended();
    bool IsScheduledEntity();
    bool IsReleased();
    bool IsFrozen();
    bool IsAlive();
    void HandleRagdollImpact(UObject* i_caller);
    UCapsuleComponent* GetNpcCapsuleComponent();
    FVector GetImpactLocation();
    FVector GetImpactDirection();
    void Freeze(UObject* i_caller);
    void ForceScheduledEntityState();
    void ForceProtego(bool inProtegoOnOff);
    void EnableCallout(UObject* i_caller);
    void DisableCallout(UObject* i_caller);
    void ApplySpawnFX();
    void ApplyReplicaFX();
}; // Size: 0x1830
#pragma pack(pop)
