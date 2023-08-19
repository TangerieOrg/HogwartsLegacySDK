#include "AActor.hpp"
#include "AFloo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_FlooPowder_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBTT_Biped_FlooPowder_C::CustActionEvt_FlooCancelFinished_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_FlooCancelFinished_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_FlooCancelFinished_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlooCancelFinished_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_Biped_FlooPowder_C* UBTT_Biped_FlooPowder_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C");
    return (UBTT_Biped_FlooPowder_C*)res;
}
void UBTT_Biped_FlooPowder_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::CustActionEvt_FlooDropPowder_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_FlooDropPowder_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FlooDropPowder_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlooDropPowder_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::CustActionEvt_FlooEntered_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_FlooEntered_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_FlooEntered_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlooEntered_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::CustActionEvt_FlooCastFinished_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_FlooCastFinished_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_FlooCastFinished_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlooCastFinished_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::CustActionEvt_FlooExitFinished_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.CustActionEvt_FlooExitFinished_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_FlooExitFinished_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlooExitFinished_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::FlooTeleportFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_FlooPowder.BTT_Biped_FlooPowder_C.FlooTeleportFinished"));
    struct Params_FlooTeleportFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FlooTeleportFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_FlooPowder_C::ExecuteUbergraph_BTT_Biped_FlooPowder(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AFloo* K2Node_DynamicCast_AsFloo, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor) {}
