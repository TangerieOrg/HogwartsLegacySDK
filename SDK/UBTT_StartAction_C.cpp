#include "AActor.hpp"
#include "EEnemyAIAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_StartAction_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_StartAction_C* UBTT_StartAction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StartAction.BTT_StartAction_C");
    return (UBTT_StartAction_C*)res;
}
void UBTT_StartAction_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StartAction.BTT_StartAction_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_StartAction_C::ExecuteUbergraph_BTT_StartAction(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_StartAction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_StartAction.BTT_StartAction_C.ExecuteUbergraph_BTT_StartAction"));
    struct Params_ExecuteUbergraph_BTT_StartAction {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_StartAction_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_BTT_StartAction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_StartAction_ReturnValue = (bool)CallFunc_StartAction_ReturnValue;
    ProcessEvent(func, &params);
}
