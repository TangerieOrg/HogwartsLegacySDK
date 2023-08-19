#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
#include "EAdditiveBodyState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EDynamicForceFeedbackAction\Type.hpp"
#include "EFullBodyState\Type.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "EParryState\Type.hpp"
#include "EPartialBodyState\Type.hpp"
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "EStairsState\Type.hpp"
#include "ETargetID\Type.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETargetType\Type.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FInventoryResult.hpp"
#include "FSpellLoadOutData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UToolSetComponent;
class UFacialComponent;
class UBlackboardComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UContextFilterComponent;
class AActor;
class UBipedStateComponent;
class UBTCustomComponent;
class UAnimationComponent;
class URPGAbilityComponent;
class UClass;
class UPrimitiveComponent;
class USpellToolRecord;
class APickupTool;
class ASpellTool;
class AMunitionType_Base;
class ATool;
struct FHitResult;
class AWandTool;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABiped_Character : public ABase_Character {
public:
    char pad_1660[0x8];
    UToolSetComponent* ToolSetComponent; // 0x1668
    UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x1670
    UBTCustomComponent* BehaviorComp_Primary; // 0x1678
    UBTCustomComponent* BehaviorComp_Secondary; // 0x1680
    UBlackboardComponent* BlackboardComp; // 0x1688
    UBipedStateComponent* ObjectStateComponent; // 0x1690
    UContextFilterComponent* ContextFilterComponent; // 0x1698
    URPGAbilityComponent* RPGAbilityComponent; // 0x16a0
    UFacialComponent* FacialComponent; // 0x16a8
    UAnimationComponent* AnimationComponent; // 0x16b0
    float MAX_HEIGHT_FOR_CLIMB; // 0x16b8
    float MAX_HEIGHT_FOR_HANG; // 0x16bc
    float MAX_HEIGHT_FOR_JUMPWAIST; // 0x16c0
    char pad_16c4[0x4];
    AActor* ledgeActor; // 0x16c8
    float CrouchCapsuleHalfHeight; // 0x16d0
    float CrouchCapsuleRadius; // 0x16d4
    float CrouchStartCapsuleBlendDuration; // 0x16d8
    float CrouchEndCapsuleBlendDuration; // 0x16dc
    EParryState::Type ParryState; // 0x16e0
    char pad_16e1[0xa7];
    FSpellLoadOutData SpellLoadOutData; // 0x1788
    int32_t SpellCastHandle; // 0x17b8
    char pad_17bc[0x4];
    FGameplayProperty_Float DoubleItemAbilityDurationChanceModifier; // 0x17c0
    FGameplayProperty_Float RefreshAllCooldownChanceModifier; // 0x1850
    bool bIgnoreFallDamage; // 0x18e0
    char pad_18e1[0x3];
    float MaxAirHeight; // 0x18e4
    float LastGroundHeight; // 0x18e8
    char pad_18ec[0x4];
    UClass* m_studentActorClassM; // 0x18f0
    UClass* m_studentActorClassF; // 0x18f8
    char pad_1900[0x170];
    static ABiped_Character* StaticClass();
    void ZeroKinematicIntegratorLinearVelocity();
    void ZeroKinematicIntegratorAngularVelocity();
    void UnEquipWand();
    void StartCrouching(UObject* Provider, ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier);
    void StairsStateHasChanged(EStairsState::Type InLastStairsState, EStairsState::Type InNewStairsState);
    void SetTargetDirection(FVector i_targetDirection);
    void SetTargetDestination(FVector i_targetDestination);
    void SetTargetComponent(UPrimitiveComponent* i_pTargetComponent);
    void SetTargetBoneName(FName i_targetBoneName);
    void SetSpellCastHandle(int32_t InSpellCastHandle);
    void SetSpell(int32_t Group, int32_t Index, USpellToolRecord* Spell);
    void SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange);
    void SetRayCastActor(AActor* i_pRayCastActor);
    void SetPickupTool(APickupTool* InPickupTool);
    void SetPartialBodyState(EPartialBodyState::Type& InState);
    void SetParryState(EParryState::Type& InState);
    void SetFullBodyStateLast(EFullBodyState::Type& InState);
    void SetFullBodyState(EFullBodyState::Type& InState);
    void SetFinisherOptimalRatio(float OptimalRatio, EDynamicForceFeedbackAction::Type FeedbackAction);
    void SetFinisher(int32_t Index, USpellToolRecord* Spell);
    void SetCombatReadyMode(bool Flag);
    void SetAdditiveBodyState(EAdditiveBodyState::Type& InState);
    FName ParkourJump(FName DefaultNode);
    void OnSpellCast__DelegateSignature(AActor* Target, FVector Location, ASpellTool* Spell, FName SpellType, AMunitionType_Base* Munition);
    void OnProtegoStart__DelegateSignature();
    void OnProtegoEnd__DelegateSignature();
    void OnProtegoDeflected__DelegateSignature(ASpellTool* Spell);
    void OnLumosStart__DelegateSignature();
    void OnLumosEnd__DelegateSignature();
    void OnHoverDroneControlModeChanged(EHoverDroneControlMode::Type NewMode);
    void OnEquippedChanged(ATool* ActivatedTool, ATool* DeactivatedTool);
    void OnDisillusionmentStart__DelegateSignature();
    void OnDisillusionmentEnd__DelegateSignature();
    void OnAccioStart__DelegateSignature(AActor* Target, FVector Location);
    void OnAccioEnd__DelegateSignature(AActor* Target);
    void Landed(FHitResult& Hit);
    bool IsWandEquipped();
    bool IsDead();
    bool IsCurrentLedgeAnOverhang();
    bool IsBlockedByWall();
    AWandTool* GetWand();
    FVector GetToTargetDirection();
    FVector GetTargetDirection();
    FVector GetTargetDestination();
    UPrimitiveComponent* GetTargetComponent();
    FName GetTargetBoneName();
    bool GetSpellsByGroup(int32_t Group, TArray<USpellToolRecord*>& ToolRecordArray);
    void GetSpellCastHandle(int32_t& OutSpellCastHandle);
    USkeletalMeshComponent* GetSkeletalMesh();
    ERightArmState::Type GetRightArmState(ERightArmPriority::Type InPriority);
    AActor* GetRayCastActor();
    float GetPutdownToolHeight();
    float GetPickupToolHeight();
    APickupTool* GetPickupTool();
    void GetPartialBodyState(EPartialBodyState::Type& OutState);
    void GetParryState(EParryState::Type& OutState);
    FTransform GetOriginalLedgeTransform();
    AActor* GetLockedOnActor();
    FInventoryResult GetInventoryResult();
    AActor* GetHighlitActor();
    float GetHealth();
    void GetFullBodyStateLast(EFullBodyState::Type& OutState);
    void GetFullBodyState(EFullBodyState::Type& OutState);
    bool GetFinishers(TArray<USpellToolRecord*>& ToolRecordArray);
    FName GetCharacterID();
    AActor* GetBestLockOnActor();
    AActor* GetBestAutoTargetActor();
    FVector GetAutoTargetUpDirection();
    FVector GetAutoTargetFocusDirection();
    void GetAdditiveBodyState(EAdditiveBodyState::Type& OutState);
    void FinishCrouching(UObject* Provider);
    void FacingTargetsListIsNowEmpty(ETargetType::Type LastTargetType, ETargetID::Type LastTargetID);
    void FacingNotifyOfNewBestTarget(ETargetType::Type NewTargetType, ETargetID::Type NewTargetID);
    void EquipWand();
    void EnablePawnInteraction(bool bEnable);
    bool DetectFallIntoWater();
    bool DetectDiveIntoWater();
    void ComputeAttack(AActor*& TargetActor);
    float ComputeAngleToDesiredDirection();
    void ClimbLedgeStart();
    void ClimbLedgeEnd();
    void CleanUpFinisherSpell();
    bool CanLandOnLedge();
    void CancelCurrentSpell(bool RemoveDisillusionment);
    void CalculateLedgePullUpState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType);
    void CalculateClimbingLedgeState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType);
    bool AdjustHealth(float change, bool bDontKill);
}; // Size: 0x1a70
#pragma pack(pop)
