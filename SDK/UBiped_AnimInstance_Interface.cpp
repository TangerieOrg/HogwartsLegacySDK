#include "AActor.hpp"
#include "APickupTool.hpp"
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
#include "FVector.hpp"
#include "UBiped_AnimInstance_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBiped_AnimInstance_Interface* UBiped_AnimInstance_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_AnimInstance_Interface");
    return (UBiped_AnimInstance_Interface*)res;
}
void UBiped_AnimInstance_Interface::SetRelaxWand(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetRelaxWand"));
    struct Params_SetRelaxWand {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetRelaxWand params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetAdditiveBodyState(EAdditiveBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetAdditiveBodyState"));
    struct Params_SetAdditiveBodyState {
        EAdditiveBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAdditiveBodyState params{};
    params.InState = (EAdditiveBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetWandEquipped(bool WandEquipped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetWandEquipped"));
    struct Params_SetWandEquipped {
        bool WandEquipped; // 0x0
    }; // Size: 0x1
    Params_SetWandEquipped params{};
    params.WandEquipped = (bool)WandEquipped;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetStationState(EStationState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetStationState"));
    struct Params_SetStationState {
        EStationState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetStationState params{};
    params.InState = (EStationState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::Get_AimOffsetYaw(float& OutYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.Get_AimOffsetYaw"));
    struct Params_Get_AimOffsetYaw {
        float OutYaw; // 0x0
    }; // Size: 0x4
    Params_Get_AimOffsetYaw params{};
    params.OutYaw = (float)OutYaw;
    ProcessEvent(func, &params);
    OutYaw = params.OutYaw;
}
void UBiped_AnimInstance_Interface::GetHarvestState(EHarvestState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetHarvestState"));
    struct Params_GetHarvestState {
        EHarvestState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetHarvestState params{};
    params.OutState = (EHarvestState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetStationState(EStationState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetStationState"));
    struct Params_GetStationState {
        EStationState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetStationState params{};
    params.OutState = (EStationState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::SetUseAimOffset(bool InUseAimOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetUseAimOffset"));
    struct Params_SetUseAimOffset {
        bool InUseAimOffset; // 0x0
    }; // Size: 0x1
    Params_SetUseAimOffset params{};
    params.InUseAimOffset = (bool)InUseAimOffset;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::Set_AimOffsetYaw(float& InYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.Set_AimOffsetYaw"));
    struct Params_Set_AimOffsetYaw {
        float InYaw; // 0x0
    }; // Size: 0x4
    Params_Set_AimOffsetYaw params{};
    params.InYaw = (float)InYaw;
    ProcessEvent(func, &params);
    InYaw = params.InYaw;
}
void UBiped_AnimInstance_Interface::SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetRightArmState"));
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
void UBiped_AnimInstance_Interface::SetFullBodyStateLast(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetFullBodyStateLast"));
    struct Params_SetFullBodyStateLast {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyStateLast params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetPartialBodyState(EPartialBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetPartialBodyState"));
    struct Params_SetPartialBodyState {
        EPartialBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetPartialBodyState params{};
    params.InState = (EPartialBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetPickupTool(APickupTool* InPickupTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetPickupTool"));
    struct Params_SetPickupTool {
        APickupTool* InPickupTool; // 0x0
    }; // Size: 0x8
    Params_SetPickupTool params{};
    params.InPickupTool = (APickupTool*)InPickupTool;
    ProcessEvent(func, &params);
}
bool UBiped_AnimInstance_Interface::GetAbortAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetAbortAnim"));
    struct Params_GetAbortAnim {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAbortAnim params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::SetMobilityStateLast(EMobilityState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetMobilityStateLast"));
    struct Params_SetMobilityStateLast {
        EMobilityState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityStateLast params{};
    params.InState = (EMobilityState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetParryStateNext(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetParryStateNext"));
    struct Params_SetParryStateNext {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryStateNext params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
APickupTool* UBiped_AnimInstance_Interface::GetPickupTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetPickupTool"));
    struct Params_GetPickupTool {
        APickupTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPickupTool params{};
    ProcessEvent(func, &params);
    return (APickupTool*)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::SetParryState(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetParryState"));
    struct Params_SetParryState {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryState params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::GetAttackState(EAttackState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetAttackState"));
    struct Params_GetAttackState {
        EAttackState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAttackState params{};
    params.OutState = (EAttackState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::SetLeftArmState(ELeftArmState::Type InState, ELeftArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetLeftArmState"));
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
void UBiped_AnimInstance_Interface::SetMobilityState(EMobilityState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetMobilityState"));
    struct Params_SetMobilityState {
        EMobilityState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityState params{};
    params.InState = (EMobilityState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
FInventoryResult UBiped_AnimInstance_Interface::GetInventoryResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    ProcessEvent(func, &params);
    return (FInventoryResult)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::SetAmpedPercent(float InAmpedPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetAmpedPercent"));
    struct Params_SetAmpedPercent {
        float InAmpedPercent; // 0x0
    }; // Size: 0x4
    Params_SetAmpedPercent params{};
    params.InAmpedPercent = (float)InAmpedPercent;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetIsHoldingAttack(bool InHoldingAttack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetIsHoldingAttack"));
    struct Params_SetIsHoldingAttack {
        bool InHoldingAttack; // 0x0
    }; // Size: 0x1
    Params_SetIsHoldingAttack params{};
    params.InHoldingAttack = (bool)InHoldingAttack;
    ProcessEvent(func, &params);
}
EHeadTrackingState::Type UBiped_AnimInstance_Interface::GetHeadTrackingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetHeadTrackingState"));
    struct Params_GetHeadTrackingState {
        EHeadTrackingState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHeadTrackingState params{};
    ProcessEvent(func, &params);
    return (EHeadTrackingState::Type)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::SetInventoryResult(FInventoryResult InInventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetInventoryResult"));
    struct Params_SetInventoryResult {
        FInventoryResult InInventoryResult; // 0x0
    }; // Size: 0x88
    Params_SetInventoryResult params{};
    params.InInventoryResult = (FInventoryResult)InInventoryResult;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetFireOnce(bool InFireOnce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetFireOnce"));
    struct Params_SetFireOnce {
        bool InFireOnce; // 0x0
    }; // Size: 0x1
    Params_SetFireOnce params{};
    params.InFireOnce = (bool)InFireOnce;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetHeadTrackingState(EHeadTrackingState::Type InState, EHeadTrackingPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetHeadTrackingState"));
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
void UBiped_AnimInstance_Interface::SetHarvestState(EHarvestState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetHarvestState"));
    struct Params_SetHarvestState {
        EHarvestState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetHarvestState params{};
    params.InState = (EHarvestState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::GetFullBodyStateLast(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetFullBodyStateLast"));
    struct Params_GetFullBodyStateLast {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyStateLast params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::SetAbortAnim(bool InAbortAnim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetAbortAnim"));
    struct Params_SetAbortAnim {
        bool InAbortAnim; // 0x0
    }; // Size: 0x1
    Params_SetAbortAnim params{};
    params.InAbortAnim = (bool)InAbortAnim;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::SetFullBodyState(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetFullBodyState"));
    struct Params_SetFullBodyState {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyState params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetDodgeState(EDodgeState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetDodgeState"));
    struct Params_SetDodgeState {
        EDodgeState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetDodgeState params{};
    params.InState = (EDodgeState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::SetCombatAdditiveState(ECombatAdditiveState::Type InState, ECombatAdditivePriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetCombatAdditiveState"));
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
ERightArmState::Type UBiped_AnimInstance_Interface::GetRightArmState(ERightArmPriority::Type InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetRightArmState"));
    struct Params_GetRightArmState {
        ERightArmPriority::Type InPriority; // 0x0
        ERightArmState::Type ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetRightArmState params{};
    params.InPriority = (ERightArmPriority::Type)InPriority;
    ProcessEvent(func, &params);
    return (ERightArmState::Type)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::SetChannelSpellFlourish(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetChannelSpellFlourish"));
    struct Params_SetChannelSpellFlourish {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetChannelSpellFlourish params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::GetParryStateNext(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetParryStateNext"));
    struct Params_GetParryStateNext {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryStateNext params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::SetAttackState(EAttackState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.SetAttackState"));
    struct Params_SetAttackState {
        EAttackState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAttackState params{};
    params.InState = (EAttackState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UBiped_AnimInstance_Interface::Set_DoFullBodySpellIfInIdle(bool bInDoFullBodySpellIfInIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.Set_DoFullBodySpellIfInIdle"));
    struct Params_Set_DoFullBodySpellIfInIdle {
        bool bInDoFullBodySpellIfInIdle; // 0x0
    }; // Size: 0x1
    Params_Set_DoFullBodySpellIfInIdle params{};
    params.bInDoFullBodySpellIfInIdle = (bool)bInDoFullBodySpellIfInIdle;
    ProcessEvent(func, &params);
}
void UBiped_AnimInstance_Interface::Set_AimOffsetPitch(float& InPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.Set_AimOffsetPitch"));
    struct Params_Set_AimOffsetPitch {
        float InPitch; // 0x0
    }; // Size: 0x4
    Params_Set_AimOffsetPitch params{};
    params.InPitch = (float)InPitch;
    ProcessEvent(func, &params);
    InPitch = params.InPitch;
}
void UBiped_AnimInstance_Interface::GetPartialBodyState(EPartialBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetPartialBodyState"));
    struct Params_GetPartialBodyState {
        EPartialBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetPartialBodyState params{};
    params.OutState = (EPartialBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetParryState(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetParryState"));
    struct Params_GetParryState {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryState params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
ELeftArmState::Type UBiped_AnimInstance_Interface::GetLeftArmState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetLeftArmState"));
    struct Params_GetLeftArmState {
        ELeftArmState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLeftArmState params{};
    ProcessEvent(func, &params);
    return (ELeftArmState::Type)params.ReturnValue;
}
void UBiped_AnimInstance_Interface::GetMobilityStateLast(EMobilityState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetMobilityStateLast"));
    struct Params_GetMobilityStateLast {
        EMobilityState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityStateLast params{};
    params.OutState = (EMobilityState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetDodgeState(EDodgeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetDodgeState"));
    struct Params_GetDodgeState {
        EDodgeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetDodgeState params{};
    params.OutState = (EDodgeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetMobilityState(EMobilityState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetMobilityState"));
    struct Params_GetMobilityState {
        EMobilityState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityState params{};
    params.OutState = (EMobilityState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetFullBodyState(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetFullBodyState"));
    struct Params_GetFullBodyState {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyState params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::GetAdditiveBodyState(EAdditiveBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.GetAdditiveBodyState"));
    struct Params_GetAdditiveBodyState {
        EAdditiveBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAdditiveBodyState params{};
    params.OutState = (EAdditiveBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UBiped_AnimInstance_Interface::Get_AimOffsetPitch(float& OutPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.Get_AimOffsetPitch"));
    struct Params_Get_AimOffsetPitch {
        float OutPitch; // 0x0
    }; // Size: 0x4
    Params_Get_AimOffsetPitch params{};
    params.OutPitch = (float)OutPitch;
    ProcessEvent(func, &params);
    OutPitch = params.OutPitch;
}
void UBiped_AnimInstance_Interface::ComputeAditiveReactDirection(AActor* InVictim, FVector& InTraceDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.ComputeAditiveReactDirection"));
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
void UBiped_AnimInstance_Interface::ClearAttackState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_AnimInstance_Interface.ClearAttackState"));
    struct Params_ClearAttackState {
    }; // Size: 0x0
    Params_ClearAttackState params{};
    ProcessEvent(func, &params);
}
