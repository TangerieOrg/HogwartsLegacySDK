#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_PublishAttackState_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_PublishAttackState_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_PublishAttackState.BTT_PublishAttackState_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_PublishAttackState_C* UBTT_PublishAttackState_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_PublishAttackState.BTT_PublishAttackState_C");
    return (UBTT_PublishAttackState_C*)res;
}
void UBTT_PublishAttackState_C::ExecuteUbergraph_BTT_PublishAttackState(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_PublishAttackState.BTT_PublishAttackState_C.ExecuteUbergraph_BTT_PublishAttackState"));
    struct Params_ExecuteUbergraph_BTT_PublishAttackState {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_BTT_PublishAttackState params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
