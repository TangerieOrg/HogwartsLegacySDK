#pragma once
#include <cstdint>
#include "EAdditiveBodyState\Type.hpp"
#include "EAttackState\Type.hpp"
#include "EBasicMobilityMode\Type.hpp"
#include "ECombatAdditivePriority\Type.hpp"
#include "ECombatAdditiveState\Type.hpp"
#include "EDodgeState\Type.hpp"
#include "EFullBodyState\Type.hpp"
#include "EHarvestState\Type.hpp"
#include "EHeadTrackingPriority\Type.hpp"
#include "EHeadTrackingState\Type.hpp"
#include "ELeftArmPriority\Type.hpp"
#include "ELeftArmState\Type.hpp"
#include "EMobilityState\Type.hpp"
#include "EOpenDoorAnimState\Type.hpp"
#include "EParryState\Type.hpp"
#include "EPartialBodyState\Type.hpp"
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "ESBlockedByWallAnimState\Type.hpp"
#include "EStationMode\Type.hpp"
#include "EStationState\Type.hpp"
#include "FEnemy_ParryTimeToImpactData.hpp"
#include "FInventoryResult.hpp"
#include "FRotator.hpp"
#include "FTargetedByMunition.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAmbulatory_AnimInstance.hpp"
class UClass;
class APickupTool;
class AActor;
#pragma pack(push, 1)
class UBiped_AnimInstance : public UAmbulatory_AnimInstance {
public:
    char pad_5e0[0x8];
    ESBlockedByWallAnimState::Type BlockedByWallState; // 0x5e8
    EOpenDoorAnimState::Type OpenDoorState; // 0x5e9
    EAttackState::Type AttackState; // 0x5ea
    EParryState::Type ParryState; // 0x5eb
    EParryState::Type ParryStateNext; // 0x5ec
    EDodgeState::Type DodgeState; // 0x5ed
    EStationState::Type StationState; // 0x5ee
    EStationMode::Type StationMode; // 0x5ef
    EFullBodyState::Type FullBodyState; // 0x5f0
    EFullBodyState::Type FullBodyStateLast; // 0x5f1
    EMobilityState::Type MobilityTypeState; // 0x5f2
    EMobilityState::Type MobilityTypeStateLast; // 0x5f3
    EHarvestState::Type HarvestState; // 0x5f4
    EPartialBodyState::Type PartialBodyState; // 0x5f5
    char pad_5f6[0xa2];
    int32_t LeftArmActiveCinematicCount; // 0x698
    int32_t RightArmActiveCinematicCount; // 0x69c
    char pad_6a0[0xa0];
    EAdditiveBodyState::Type AdditiveBodyState; // 0x740
    char pad_741[0x7];
    UClass* CombatAdditiveAbility; // 0x748
    bool IsInAir; // 0x750
    bool IsCrouching; // 0x751
    bool InLockOnMode; // 0x752
    char pad_753[0x1];
    float AmpedPercent; // 0x754
    float InitialJumpAngle; // 0x758
    char pad_75c[0x4];
    APickupTool* PickupTool; // 0x760
    float PickupToolHeight; // 0x768
    float PutdownToolHeight; // 0x76c
    bool HoldingBucket; // 0x770
    bool IsMultiHarvestPlot; // 0x771
    char pad_772[0x2];
    int32_t UseAimOffset; // 0x774
    float AimOffsetYaw; // 0x778
    float AimOffsetPitch; // 0x77c
    float LastAimOffsetYaw; // 0x780
    bool IsEquippingWand; // 0x784
    bool IsWandEquipped; // 0x785
    bool DoFullBodySpellIfInIdle; // 0x786
    bool IsWandReady; // 0x787
    bool bAdditiveTurnLeanActive; // 0x788
    char pad_789[0x3];
    float AdditiveLeanAngle; // 0x78c
    FInventoryResult InventoryResult; // 0x790
    FName FlooName; // 0x818
    bool IsFlooUIFinished; // 0x820
    bool IsFlooUICancelled; // 0x821
    bool IsAdvanced; // 0x822
    bool LoadFinished; // 0x823
    bool TeleportFinished; // 0x824
    bool BackAwayFromLedge; // 0x825
    bool PlayBlockedByWallAnim; // 0x826
    char pad_827[0x1];
    FRotator LeftFootRotation; // 0x828
    FRotator RightFootRotation; // 0x834
    float LeftEffectorLoc; // 0x840
    float RightEffectorLoc; // 0x844
    FVector LeftJointLoc; // 0x848
    FVector RightJointLoc; // 0x854
    float HipsOffset; // 0x860
    FVector GroundAcceleration; // 0x864
    FVector2D AdditiveReact; // 0x870
    FEnemy_ParryTimeToImpactData ParryImpactData; // 0x878
    FTargetedByMunition ProtegoTargetedByMuntion; // 0x8a8
    char pad_8d8[0x10];
    bool IsHoldingAttack; // 0x8e8
    bool IsAbortingParry; // 0x8e9
    bool IsAbortingAnim; // 0x8ea
    bool bIsAnticipatingAttack; // 0x8eb
    float AnticipationAngle; // 0x8ec
    float ThrowDistance; // 0x8f0
    float AngleToDesiredDirection; // 0x8f4
    bool bFromLightDirectional; // 0x8f8
    char pad_8f9[0x3];
    float IdleTimeStamp; // 0x8fc
    float CustomRootMotionMultiplier; // 0x900
    char pad_904[0x34];
    TArray<AActor*> AttackingActorStack; // 0x938
    char pad_948[0x38];
    static UBiped_AnimInstance* StaticClass();
    void StartSettingCinematicRightArmState(ERightArmState::Type InState, bool bBroadcastChange);
    void StartSettingCinematicLeftArmState(ELeftArmState::Type InState, bool bBroadcastChange);
    void SetWandEquipped(bool WandEquipped);
    void SetUseAimOffset(bool InUseAimOffset);
    void SetStationState(EStationState::Type& InState);
    void SetStationMode(EStationMode::Type& InMode);
    void SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange);
    void SetPickupTool(APickupTool* InPickupTool);
    void SetPartialBodyState(EPartialBodyState::Type& InState);
    void SetParryStateNext(EParryState::Type& InState);
    void SetParryState(EParryState::Type& InState);
    void SetMobilityStateLast(EMobilityState::Type& InState);
    void SetMobilityState(EMobilityState::Type& InState);
    void SetLeftArmState(ELeftArmState::Type InState, ELeftArmPriority::Type InPriority, bool bBroadcastChange);
    void SetIsHoldingAttack(bool InHoldingAttack);
    void SetInventoryResult(FInventoryResult InInventoryResult);
    void SetHeadTrackingState(EHeadTrackingState::Type InState, EHeadTrackingPriority::Type InPriority, bool bBroadcastChange);
    void SetHarvestState(EHarvestState::Type& InState);
    void SetFullBodyStateLast(EFullBodyState::Type& InState);
    void SetFullBodyState(EFullBodyState::Type& InState);
    void SetDodgeState(EDodgeState::Type& InState);
    void SetCombatAdditiveState(ECombatAdditiveState::Type InState, ECombatAdditivePriority::Type InPriority, bool bBroadcastChange);
    void SetAttackState(EAttackState::Type& InState);
    void SetAmpedPercent(float InAmpedPercent);
    void SetAdditiveBodyState(EAdditiveBodyState::Type& InState);
    void SetAbortAnim(bool InAbortAnim);
    void Set_DoFullBodySpellIfInIdle(bool bInDoFullBodySpellIfInIdle);
    void Set_AimOffsetYaw(float& InYaw);
    void Set_AimOffsetPitch(float& InPitch);
    void PushNewBasicMobilityMode(int32_t UniqueIDOverride, int32_t& UniqueId, EBasicMobilityMode::Type Mode);
    void PopBasicMobilityMode(int32_t UniqueId);
    void OnLeftArmStateChanged(ELeftArmState::Type InLeftArmState);
    void OnCombatAdditiveStateChanged(ECombatAdditiveState::Type InCombatAdditiveState);
    void GetStationState(EStationState::Type& OutState);
    void GetStationMode(EStationMode::Type& OutMode);
    ERightArmState::Type GetRightArmState(ERightArmPriority::Type InPriority);
    APickupTool* GetPickupTool();
    void GetPartialBodyState(EPartialBodyState::Type& OutState);
    void GetParryStateNext(EParryState::Type& OutState);
    void GetParryState(EParryState::Type& OutState);
    int32_t GetNumberOfAttackingActors();
    void GetMobilityStateLast(EMobilityState::Type& OutState);
    void GetMobilityState(EMobilityState::Type& OutState);
    ELeftArmState::Type GetLeftArmState();
    FInventoryResult GetInventoryResult();
    EHeadTrackingState::Type GetHeadTrackingState();
    void GetHarvestState(EHarvestState::Type& OutState);
    void GetFullBodyStateLast(EFullBodyState::Type& OutState);
    void GetFullBodyState(EFullBodyState::Type& OutState);
    AActor* GetFirstAttackingActorInStack();
    AActor* GetFirstAttackingActor();
    void GetDodgeState(EDodgeState::Type& OutState);
    EBasicMobilityMode::Type GetDefaultBasicMobilityMode();
    EBasicMobilityMode::Type GetCurrentBasicMobilityMode();
    void GetAttackState(EAttackState::Type& OutState);
    void GetAdditiveBodyState(EAdditiveBodyState::Type& OutState);
    bool GetAbortAnim();
    void Get_AimOffsetYaw(float& OutYaw);
    void Get_AimOffsetPitch(float& OutPitch);
    void FullyResetBasicMobilityMode();
    void FinishSettingCinematicRightArmState(bool bBroadcastChange);
    void FinishSettingCinematicLeftArmState(bool bBroadcastChange);
    void ComputeAditiveReactDirection(AActor* InVictim, FVector& InTraceDirection);
}; // Size: 0x980
#pragma pack(pop)
