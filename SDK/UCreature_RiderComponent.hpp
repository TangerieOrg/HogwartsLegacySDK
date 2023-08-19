#pragma once
#include <cstdint>
#include "EMountMovementState.hpp"
#include "FGameplayTagContainer.hpp"
#include "FIKPoseFixupDefinition.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UActorComponent.hpp"
class UClass;
class UAnimationArchitectAsset;
class UCreature_MountComponent;
class UAblReactionComponent;
class UAblReactionData;
class ACreature_Character;
class ACreatureMountHandler;
#pragma pack(push, 1)
class UCreature_RiderComponent : public UActorComponent {
public:
    UClass* HeadTurnAbility; // 0xc8
    FName HeadTurnAbilityChannelName; // 0xd0
    UClass* FlyAdditiveAbility; // 0xd8
    FName FlyAdditiveAbilityChannelName; // 0xe0
    char pad_e8[0x50];
    FGameplayTagContainer RiderAnimationSetTagContainer; // 0x138
    UAnimationArchitectAsset* RiderAnimationSetArchitectAsset; // 0x158
    FGameplayTagContainer MountTypeAnimationArchitectTags; // 0x160
    char pad_180[0x50];
    TArray<UClass*> CreatureReactionAbilitesForRiderKnockdown; // 0x1d0
    FGameplayTagContainer RiderKnockdownMunitionTags; // 0x1e0
    UClass* InitialGroundAbility; // 0x200
    UClass* InitialFlyingAbility; // 0x208
    bool bUseHandIK; // 0x210
    char pad_211[0xf];
    FIKPoseFixupDefinition IKPoseFixupDefinitionLeftHand; // 0x220
    FIKPoseFixupDefinition IKPoseFixupDefinitionRightHand; // 0x2e0
    bool bEnableAnimationModifier; // 0x3a0
    char pad_3a1[0x3];
    FName HipsBoneName; // 0x3a4
    FName LeftThighBoneName; // 0x3ac
    FName RightThighBoneName; // 0x3b4
    char pad_3bc[0x4];
    FRuntimeFloatCurve PitchToPitchCorrectionCurve; // 0x3c0
    float PitchCorrectionSpringFrequency; // 0x448
    char pad_44c[0x54];
    static UCreature_RiderComponent* StaticClass();
    void OnMountMovementStateChanged(UCreature_MountComponent* MountComponent, EMountMovementState PrevMovementState);
    void OnCreatureReactionQueued(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent);
    void InterruptDismount();
    ACreatureMountHandler* GetMountHandler();
    ACreature_Character* GetCreatureCharacter();
    void EnableHandIK();
    void DisableHandIK();
    void DeactivateRiderComponent();
    void ActivateRiderComponent(ACreatureMountHandler* InMountHandler, bool bEnableHandIK);
}; // Size: 0x4a0
#pragma pack(pop)
