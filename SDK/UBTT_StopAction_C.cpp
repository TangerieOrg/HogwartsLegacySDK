#include "AActor.hpp"
#include "EEnemyAIAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_StopAction_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_StopAction_C::ExecuteUbergraph_BTT_StopAction(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StopAction.BTT_StopAction_C.ExecuteUbergraph_BTT_StopAction"));
    struct Params_ExecuteUbergraph_BTT_StopAction {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_BTT_StopAction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_StopAction_C* UBTT_StopAction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StopAction.BTT_StopAction_C");
    return (UBTT_StopAction_C*)res;
}
void UBTT_StopAction_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StopAction.BTT_StopAction_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
