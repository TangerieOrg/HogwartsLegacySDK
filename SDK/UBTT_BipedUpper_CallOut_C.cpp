#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ATool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_BipedUpper_CallOut_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_BipedUpper_CallOut_C* UBTT_BipedUpper_CallOut_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_CallOut.BTT_BipedUpper_CallOut_C");
    return (UBTT_BipedUpper_CallOut_C*)res;
}
void UBTT_BipedUpper_CallOut_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_CallOut.BTT_BipedUpper_CallOut_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_CallOut_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_CallOut.BTT_BipedUpper_CallOut_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_CallOut_C::ExecuteUbergraph_BTT_BipedUpper_CallOut(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ATool* CallFunc_ActivateTool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_CallOut.BTT_BipedUpper_CallOut_C.ExecuteUbergraph_BTT_BipedUpper_CallOut"));
    struct Params_ExecuteUbergraph_BTT_BipedUpper_CallOut {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ATool* CallFunc_ActivateTool_ReturnValue; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_BTT_BipedUpper_CallOut params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_ActivateTool_ReturnValue = (ATool*)CallFunc_ActivateTool_ReturnValue;
    ProcessEvent(func, &params);
}
