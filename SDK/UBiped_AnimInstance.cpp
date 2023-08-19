#include "AActor.hpp"
#include "APickupTool.hpp"
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
#include "UBiped_AnimInstance.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void UBiped_AnimInstance::FullyResetBasicMobilityMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.FullyResetBasicMobilityMode"));
    struct Params_FullyResetBasicMobilityMode {
    }; // Size: 0x0
    Params_FullyResetBasicMobilityMode params{};
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetRightArmState"));
    struct Params_SetRightArmState {
        ERightArmState::Type InState; // 0x0
        ERightArmPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetRightArmState params{};
    params.InState = (ERightArmState::Type)InState;
    params.InPriority = (ERightArmPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
UBiped_AnimInstance* UBiped_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_AnimInstance");
    return (UBiped_AnimInstance*)res;
}
void UBiped_AnimInstance::StartSettingCinematicRightArmState(ERightArmState::Type InState, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.StartSettingCinematicRightArmState"));
    struct Params_StartSettingCinematicRightArmState {
        ERightArmState::Type InState; // 0x0
        bool bBroadcastChange; // 0x1
    }; // Size: 0x2
    Params_StartSettingCinematicRightArmState params{};
    params.InState = (ERightArmState::Type)InState;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetUseAimOffset(bool InUseAimOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetUseAimOffset"));
    struct Params_SetUseAimOffset {
        bool InUseAimOffset; // 0x0
    }; // Size: 0x1
    Params_SetUseAimOffset params{};
    params.InUseAimOffset = (bool)InUseAimOffset;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetInventoryResult(FInventoryResult InInventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetInventoryResult"));
    struct Params_SetInventoryResult {
        FInventoryResult InInventoryResult; // 0x0
    }; // Size: 0x88
    Params_SetInventoryResult params{};
    params.InInventoryResult = (FInventoryResult)InInventoryResult;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetWandEquipped(bool WandEquipped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetWandEquipped"));
    struct Params_SetWandEquipped {
        bool WandEquipped; // 0x0
    }; // Size: 0x1
    Params_SetWandEquipped params{};
    params.WandEquipped = (bool)WandEquipped;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::StartSettingCinematicLeftArmState(ELeftArmState::Type InState, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.StartSettingCinematicLeftArmState"));
    struct Params_StartSettingCinematicLeftArmState {
        ELeftArmState::Type InState; // 0x0
        bool bBroadcastChange; // 0x1
    }; // Size: 0x2
    Params_StartSettingCinematicLeftArmState params{};
    params.InState = (ELeftArmState::Type)InState;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
bool UBiped_AnimInstance::GetAbortAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetAbortAnim"));
    struct Params_GetAbortAnim {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAbortAnim params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_AnimInstance::GetAttackState(EAttackState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetAttackState"));
    struct Params_GetAttackState {
        EAttackState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAttackState params{};
    params.OutState = (EAttackState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::SetStationState(EStationState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetStationState"));
    struct Params_SetStationState {
        EStationState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetStationState params{};
    params.InState = (EStationState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::GetPartialBodyState(EPartialBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetPartialBodyState"));
    struct Params_GetPartialBodyState {
        EPartialBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetPartialBodyState params{};
    params.OutState = (EPartialBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::SetParryState(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetParryState"));
    struct Params_SetParryState {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryState params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetStationMode(EStationMode::Type& InMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetStationMode"));
    struct Params_SetStationMode {
        EStationMode::Type InMode; // 0x0
    }; // Size: 0x1
    Params_SetStationMode params{};
    params.InMode = (EStationMode::Type)InMode;
    ProcessEvent(func, &params);
    InMode = params.InMode;
}
void UBiped_AnimInstance::SetPickupTool(APickupTool* InPickupTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetPickupTool"));
    struct Params_SetPickupTool {
        APickupTool* InPickupTool; // 0x0
    }; // Size: 0x8
    Params_SetPickupTool params{};
    params.InPickupTool = (APickupTool*)InPickupTool;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetPartialBodyState(EPartialBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetPartialBodyState"));
    struct Params_SetPartialBodyState {
        EPartialBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetPartialBodyState params{};
    params.InState = (EPartialBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetParryStateNext(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetParryStateNext"));
    struct Params_SetParryStateNext {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryStateNext params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetMobilityStateLast(EMobilityState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetMobilityStateLast"));
    struct Params_SetMobilityStateLast {
        EMobilityState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityStateLast params{};
    params.InState = (EMobilityState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::ComputeAditiveReactDirection(AActor* InVictim, FVector& InTraceDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.ComputeAditiveReactDirection"));
    struct Params_ComputeAditiveReactDirection {
        AActor* InVictim; // 0x0
        FVector InTraceDirection; // 0x8
    }; // Size: 0x14
    Params_ComputeAditiveReactDirection params{};
    params.InVictim = (AActor*)InVictim;
    params.InTraceDirection = (FVector)InTraceDirection;
    ProcessEvent(func, &params);
    InTraceDirection = params.InTraceDirection;
}
void UBiped_AnimInstance::SetMobilityState(EMobilityState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetMobilityState"));
    struct Params_SetMobilityState {
        EMobilityState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityState params{};
    params.InState = (EMobilityState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetLeftArmState(ELeftArmState::Type InState, ELeftArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetLeftArmState"));
    struct Params_SetLeftArmState {
        ELeftArmState::Type InState; // 0x0
        ELeftArmPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetLeftArmState params{};
    params.InState = (ELeftArmState::Type)InState;
    params.InPriority = (ELeftArmPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
ERightArmState::Type UBiped_AnimInstance::GetRightArmState(ERightArmPriority::Type InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetRightArmState"));
    struct Params_GetRightArmState {
        ERightArmPriority::Type InPriority; // 0x0
        ERightArmState::Type ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetRightArmState params{};
    params.InPriority = (ERightArmPriority::Type)InPriority;
    ProcessEvent(func, &params);
    return (ERightArmState::Type)params.ReturnValue;
}
void UBiped_AnimInstance::SetIsHoldingAttack(bool InHoldingAttack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetIsHoldingAttack"));
    struct Params_SetIsHoldingAttack {
        bool InHoldingAttack; // 0x0
    }; // Size: 0x1
    Params_SetIsHoldingAttack params{};
    params.InHoldingAttack = (bool)InHoldingAttack;
    ProcessEvent(func, &params);
}
ELeftArmState::Type UBiped_AnimInstance::GetLeftArmState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetLeftArmState"));
    struct Params_GetLeftArmState {
        ELeftArmState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLeftArmState params{};
    ProcessEvent(func, &params);
    return (ELeftArmState::Type)params.ReturnValue;
}
void UBiped_AnimInstance::SetAttackState(EAttackState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetAttackState"));
    struct Params_SetAttackState {
        EAttackState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAttackState params{};
    params.InState = (EAttackState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetHeadTrackingState(EHeadTrackingState::Type InState, EHeadTrackingPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetHeadTrackingState"));
    struct Params_SetHeadTrackingState {
        EHeadTrackingState::Type InState; // 0x0
        EHeadTrackingPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetHeadTrackingState params{};
    params.InState = (EHeadTrackingState::Type)InState;
    params.InPriority = (EHeadTrackingPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::SetHarvestState(EHarvestState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetHarvestState"));
    struct Params_SetHarvestState {
        EHarvestState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetHarvestState params{};
    params.InState = (EHarvestState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::GetFullBodyState(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetFullBodyState"));
    struct Params_GetFullBodyState {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyState params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
EHeadTrackingState::Type UBiped_AnimInstance::GetHeadTrackingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetHeadTrackingState"));
    struct Params_GetHeadTrackingState {
        EHeadTrackingState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHeadTrackingState params{};
    ProcessEvent(func, &params);
    return (EHeadTrackingState::Type)params.ReturnValue;
}
void UBiped_AnimInstance::SetFullBodyStateLast(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetFullBodyStateLast"));
    struct Params_SetFullBodyStateLast {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyStateLast params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::PushNewBasicMobilityMode(int32_t UniqueIDOverride, int32_t& UniqueId, EBasicMobilityMode::Type Mode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.PushNewBasicMobilityMode"));
    struct Params_PushNewBasicMobilityMode {
        int32_t UniqueIDOverride; // 0x0
        int32_t UniqueId; // 0x4
        EBasicMobilityMode::Type Mode; // 0x8
    }; // Size: 0x9
    Params_PushNewBasicMobilityMode params{};
    params.UniqueIDOverride = (int32_t)UniqueIDOverride;
    params.UniqueId = (int32_t)UniqueId;
    params.Mode = (EBasicMobilityMode::Type)Mode;
    ProcessEvent(func, &params);
    UniqueId = params.UniqueId;
}
void UBiped_AnimInstance::SetFullBodyState(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetFullBodyState"));
    struct Params_SetFullBodyState {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyState params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
AActor* UBiped_AnimInstance::GetFirstAttackingActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetFirstAttackingActor"));
    struct Params_GetFirstAttackingActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFirstAttackingActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UBiped_AnimInstance::SetDodgeState(EDodgeState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetDodgeState"));
    struct Params_SetDodgeState {
        EDodgeState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetDodgeState params{};
    params.InState = (EDodgeState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::GetStationMode(EStationMode::Type& OutMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetStationMode"));
    struct Params_GetStationMode {
        EStationMode::Type OutMode; // 0x0
    }; // Size: 0x1
    Params_GetStationMode params{};
    params.OutMode = (EStationMode::Type)OutMode;
    ProcessEvent(func, &params);
    OutMode = params.OutMode;
}
void UBiped_AnimInstance::SetCombatAdditiveState(ECombatAdditiveState::Type InState, ECombatAdditivePriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetCombatAdditiveState"));
    struct Params_SetCombatAdditiveState {
        ECombatAdditiveState::Type InState; // 0x0
        ECombatAdditivePriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetCombatAdditiveState params{};
    params.InState = (ECombatAdditiveState::Type)InState;
    params.InPriority = (ECombatAdditivePriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
int32_t UBiped_AnimInstance::GetNumberOfAttackingActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetNumberOfAttackingActors"));
    struct Params_GetNumberOfAttackingActors {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfAttackingActors params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UBiped_AnimInstance::SetAmpedPercent(float InAmpedPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetAmpedPercent"));
    struct Params_SetAmpedPercent {
        float InAmpedPercent; // 0x0
    }; // Size: 0x4
    Params_SetAmpedPercent params{};
    params.InAmpedPercent = (float)InAmpedPercent;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::GetMobilityStateLast(EMobilityState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetMobilityStateLast"));
    struct Params_GetMobilityStateLast {
        EMobilityState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityStateLast params{};
    params.OutState = (EMobilityState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::SetAdditiveBodyState(EAdditiveBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetAdditiveBodyState"));
    struct Params_SetAdditiveBodyState {
        EAdditiveBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAdditiveBodyState params{};
    params.InState = (EAdditiveBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance::SetAbortAnim(bool InAbortAnim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.SetAbortAnim"));
    struct Params_SetAbortAnim {
        bool InAbortAnim; // 0x0
    }; // Size: 0x1
    Params_SetAbortAnim params{};
    params.InAbortAnim = (bool)InAbortAnim;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::GetDodgeState(EDodgeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetDodgeState"));
    struct Params_GetDodgeState {
        EDodgeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetDodgeState params{};
    params.OutState = (EDodgeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::Set_DoFullBodySpellIfInIdle(bool bInDoFullBodySpellIfInIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.Set_DoFullBodySpellIfInIdle"));
    struct Params_Set_DoFullBodySpellIfInIdle {
        bool bInDoFullBodySpellIfInIdle; // 0x0
    }; // Size: 0x1
    Params_Set_DoFullBodySpellIfInIdle params{};
    params.bInDoFullBodySpellIfInIdle = (bool)bInDoFullBodySpellIfInIdle;
    ProcessEvent(func, &params);
}
APickupTool* UBiped_AnimInstance::GetPickupTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetPickupTool"));
    struct Params_GetPickupTool {
        APickupTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPickupTool params{};
    ProcessEvent(func, &params);
    return (APickupTool*)params.ReturnValue;
}
void UBiped_AnimInstance::Set_AimOffsetYaw(float& InYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.Set_AimOffsetYaw"));
    struct Params_Set_AimOffsetYaw {
        float InYaw; // 0x0
    }; // Size: 0x4
    Params_Set_AimOffsetYaw params{};
    params.InYaw = (float)InYaw;
    ProcessEvent(func, &params);
    InYaw = params.InYaw;
}
void UBiped_AnimInstance::Set_AimOffsetPitch(float& InPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.Set_AimOffsetPitch"));
    struct Params_Set_AimOffsetPitch {
        float InPitch; // 0x0
    }; // Size: 0x4
    Params_Set_AimOffsetPitch params{};
    params.InPitch = (float)InPitch;
    ProcessEvent(func, &params);
    InPitch = params.InPitch;
}
FInventoryResult UBiped_AnimInstance::GetInventoryResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    ProcessEvent(func, &params);
    return (FInventoryResult)params.ReturnValue;
}
void UBiped_AnimInstance::PopBasicMobilityMode(int32_t UniqueId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.PopBasicMobilityMode"));
    struct Params_PopBasicMobilityMode {
        int32_t UniqueId; // 0x0
    }; // Size: 0x4
    Params_PopBasicMobilityMode params{};
    params.UniqueId = (int32_t)UniqueId;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::OnLeftArmStateChanged(ELeftArmState::Type InLeftArmState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.OnLeftArmStateChanged"));
    struct Params_OnLeftArmStateChanged {
        ELeftArmState::Type InLeftArmState; // 0x0
    }; // Size: 0x1
    Params_OnLeftArmStateChanged params{};
    params.InLeftArmState = (ELeftArmState::Type)InLeftArmState;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::OnCombatAdditiveStateChanged(ECombatAdditiveState::Type InCombatAdditiveState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.OnCombatAdditiveStateChanged"));
    struct Params_OnCombatAdditiveStateChanged {
        ECombatAdditiveState::Type InCombatAdditiveState; // 0x0
    }; // Size: 0x1
    Params_OnCombatAdditiveStateChanged params{};
    params.InCombatAdditiveState = (ECombatAdditiveState::Type)InCombatAdditiveState;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::GetStationState(EStationState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetStationState"));
    struct Params_GetStationState {
        EStationState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetStationState params{};
    params.OutState = (EStationState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::GetParryStateNext(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetParryStateNext"));
    struct Params_GetParryStateNext {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryStateNext params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::GetParryState(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetParryState"));
    struct Params_GetParryState {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryState params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::GetMobilityState(EMobilityState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetMobilityState"));
    struct Params_GetMobilityState {
        EMobilityState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityState params{};
    params.OutState = (EMobilityState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
EBasicMobilityMode::Type UBiped_AnimInstance::GetDefaultBasicMobilityMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetDefaultBasicMobilityMode"));
    struct Params_GetDefaultBasicMobilityMode {
        EBasicMobilityMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultBasicMobilityMode params{};
    ProcessEvent(func, &params);
    return (EBasicMobilityMode::Type)params.ReturnValue;
}
void UBiped_AnimInstance::GetHarvestState(EHarvestState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetHarvestState"));
    struct Params_GetHarvestState {
        EHarvestState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetHarvestState params{};
    params.OutState = (EHarvestState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::GetFullBodyStateLast(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetFullBodyStateLast"));
    struct Params_GetFullBodyStateLast {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyStateLast params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
AActor* UBiped_AnimInstance::GetFirstAttackingActorInStack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetFirstAttackingActorInStack"));
    struct Params_GetFirstAttackingActorInStack {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFirstAttackingActorInStack params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
EBasicMobilityMode::Type UBiped_AnimInstance::GetCurrentBasicMobilityMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetCurrentBasicMobilityMode"));
    struct Params_GetCurrentBasicMobilityMode {
        EBasicMobilityMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentBasicMobilityMode params{};
    ProcessEvent(func, &params);
    return (EBasicMobilityMode::Type)params.ReturnValue;
}
void UBiped_AnimInstance::GetAdditiveBodyState(EAdditiveBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.GetAdditiveBodyState"));
    struct Params_GetAdditiveBodyState {
        EAdditiveBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAdditiveBodyState params{};
    params.OutState = (EAdditiveBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance::Get_AimOffsetYaw(float& OutYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.Get_AimOffsetYaw"));
    struct Params_Get_AimOffsetYaw {
        float OutYaw; // 0x0
    }; // Size: 0x4
    Params_Get_AimOffsetYaw params{};
    params.OutYaw = (float)OutYaw;
    ProcessEvent(func, &params);
    OutYaw = params.OutYaw;
}
void UBiped_AnimInstance::Get_AimOffsetPitch(float& OutPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.Get_AimOffsetPitch"));
    struct Params_Get_AimOffsetPitch {
        float OutPitch; // 0x0
    }; // Size: 0x4
    Params_Get_AimOffsetPitch params{};
    params.OutPitch = (float)OutPitch;
    ProcessEvent(func, &params);
    OutPitch = params.OutPitch;
}
void UBiped_AnimInstance::FinishSettingCinematicRightArmState(bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.FinishSettingCinematicRightArmState"));
    struct Params_FinishSettingCinematicRightArmState {
        bool bBroadcastChange; // 0x0
    }; // Size: 0x1
    Params_FinishSettingCinematicRightArmState params{};
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance::FinishSettingCinematicLeftArmState(bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance.FinishSettingCinematicLeftArmState"));
    struct Params_FinishSettingCinematicLeftArmState {
        bool bBroadcastChange; // 0x0
    }; // Size: 0x1
    Params_FinishSettingCinematicLeftArmState params{};
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
