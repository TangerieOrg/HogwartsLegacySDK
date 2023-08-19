#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_Telescope_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_Telescope_C* UBTT_Biped_Telescope_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C");
    return (UBTT_Biped_Telescope_C*)res;
}
void UBTT_Biped_Telescope_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::CustActionEvt_ExitTelescope_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.CustActionEvt_ExitTelescope_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_ExitTelescope_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ExitTelescope_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Telescope.BTT_Biped_Telescope_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Telescope_C::ExecuteUbergraph_BTT_Biped_Telescope(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor) {}
