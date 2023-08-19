#include "AActor.hpp"
#include "ABiped_PlayerController.hpp"
#include "APlayerController.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_RideCreature_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_RideCreature_C* UBTT_Biped_RideCreature_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_RideCreature.BTT_Biped_RideCreature_C");
    return (UBTT_Biped_RideCreature_C*)res;
}
void UBTT_Biped_RideCreature_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_RideCreature_C::CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_RideCreature_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_RideCreature_C::ExecuteUbergraph_BTT_Biped_RideCreature(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_RideCreature.BTT_Biped_RideCreature_C.ExecuteUbergraph_BTT_Biped_RideCreature"));
    struct Params_ExecuteUbergraph_BTT_Biped_RideCreature {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle; // 0x1c
        AActor* K2Node_Event_OwnerActor_1; // 0x20
        AActor* K2Node_Event_OwnerActor; // 0x28
        APlayerController* CallFunc_GetPlayerController_ReturnValue_1; // 0x30
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller_1; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BTT_Biped_RideCreature params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_BTCustomActionEvent_VariantMapHandle = (FVariantMapHandle)K2Node_BTCustomActionEvent_VariantMapHandle;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetPlayerController_ReturnValue_1 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Player_Controller_1 = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
