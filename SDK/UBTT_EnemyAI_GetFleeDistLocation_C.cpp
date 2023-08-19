#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_EnemyAI_GetFleeDistLocation_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_EnemyAI_GetFleeDistLocation_C::ExecuteUbergraph_BTT_EnemyAI_GetFleeDistLocation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1, FVector CallFunc_GetFleeDistLocation_ReturnValue, float CallFunc_CalcFleeMoveToLocationTime_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetFleeDistLocation.BTT_EnemyAI_GetFleeDistLocation_C.ExecuteUbergraph_BTT_EnemyAI_GetFleeDistLocation"));
    struct Params_ExecuteUbergraph_BTT_EnemyAI_GetFleeDistLocation {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x18
        FVector CallFunc_GetFleeDistLocation_ReturnValue; // 0x20
        float CallFunc_CalcFleeMoveToLocationTime_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_ExecuteUbergraph_BTT_EnemyAI_GetFleeDistLocation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UBlackboardComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetFleeDistLocation_ReturnValue = (FVector)CallFunc_GetFleeDistLocation_ReturnValue;
    params.CallFunc_CalcFleeMoveToLocationTime_ReturnValue = (float)CallFunc_CalcFleeMoveToLocationTime_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_EnemyAI_GetFleeDistLocation_C* UBTT_EnemyAI_GetFleeDistLocation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetFleeDistLocation.BTT_EnemyAI_GetFleeDistLocation_C");
    return (UBTT_EnemyAI_GetFleeDistLocation_C*)res;
}
void UBTT_EnemyAI_GetFleeDistLocation_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetFleeDistLocation.BTT_EnemyAI_GetFleeDistLocation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
