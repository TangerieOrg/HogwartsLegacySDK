#pragma once
#include <cstdint>
#include "EAdditiveBodyState\Type.hpp"
#include "EAttackState\Type.hpp"
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
#include "EParryState\Type.hpp"
#include "EPartialBodyState\Type.hpp"
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "EStationState\Type.hpp"
#include "FInventoryResult.hpp"
#include "UInterface.hpp"
class APickupTool;
class AActor;
struct FVector;
#pragma pack(push, 1)
class UBiped_AnimInstance_Interface : public UInterface {
public:
    static UBiped_AnimInstance_Interface* StaticClass();
    void SetWandEquipped(bool WandEquipped);
    void SetUseAimOffset(bool InUseAimOffset);
    void SetStationState(EStationState::Type& InState);
    void SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange);
    void SetRelaxWand(bool bInFlag);
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
    void SetFireOnce(bool InFireOnce);
    void SetDodgeState(EDodgeState::Type& InState);
    void SetCombatAdditiveState(ECombatAdditiveState::Type InState, ECombatAdditivePriority::Type InPriority, bool bBroadcastChange);
    void SetChannelSpellFlourish(bool InFlag);
    void SetAttackState(EAttackState::Type& InState);
    void SetAmpedPercent(float InAmpedPercent);
    void SetAdditiveBodyState(EAdditiveBodyState::Type& InState);
    void SetAbortAnim(bool InAbortAnim);
    void Set_DoFullBodySpellIfInIdle(bool bInDoFullBodySpellIfInIdle);
    void Set_AimOffsetYaw(float& InYaw);
    void Set_AimOffsetPitch(float& InPitch);
    void GetStationState(EStationState::Type& OutState);
    ERightArmState::Type GetRightArmState(ERightArmPriority::Type InPriority);
    APickupTool* GetPickupTool();
    void GetPartialBodyState(EPartialBodyState::Type& OutState);
    void GetParryStateNext(EParryState::Type& OutState);
    void GetParryState(EParryState::Type& OutState);
    void GetMobilityStateLast(EMobilityState::Type& OutState);
    void GetMobilityState(EMobilityState::Type& OutState);
    ELeftArmState::Type GetLeftArmState();
    FInventoryResult GetInventoryResult();
    EHeadTrackingState::Type GetHeadTrackingState();
    void GetHarvestState(EHarvestState::Type& OutState);
    void GetFullBodyStateLast(EFullBodyState::Type& OutState);
    void GetFullBodyState(EFullBodyState::Type& OutState);
    void GetDodgeState(EDodgeState::Type& OutState);
    void GetAttackState(EAttackState::Type& OutState);
    void GetAdditiveBodyState(EAdditiveBodyState::Type& OutState);
    bool GetAbortAnim();
    void Get_AimOffsetYaw(float& OutYaw);
    void Get_AimOffsetPitch(float& OutPitch);
    void ComputeAditiveReactDirection(AActor* InVictim, FVector& InTraceDirection);
    void ClearAttackState();
}; // Size: 0x28
#pragma pack(pop)
