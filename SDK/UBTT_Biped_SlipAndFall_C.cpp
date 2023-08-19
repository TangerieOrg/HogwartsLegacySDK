#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "EPhysicalSurface.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UBTT_Biped_SlipAndFall_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
void UBTT_Biped_SlipAndFall_C::ExecuteUbergraph_BTT_Biped_SlipAndFall(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_Conv_IntToByte_ReturnValue) {}
UBTT_Biped_SlipAndFall_C* UBTT_Biped_SlipAndFall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C");
    return (UBTT_Biped_SlipAndFall_C*)res;
}
void UBTT_Biped_SlipAndFall_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SlipAndFall_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SlipAndFall_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SlipAndFall_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SlipAndFall_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SlipAndFall.BTT_Biped_SlipAndFall_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
