#include "AActor.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_EnemyAI_AdvancePath_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_EnemyAI_AdvancePath_C* UBTT_EnemyAI_AdvancePath_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C");
    return (UBTT_EnemyAI_AdvancePath_C*)res;
}
void UBTT_EnemyAI_AdvancePath_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EnemyAI_AdvancePath_C::ExecuteUbergraph_BTT_EnemyAI_AdvancePath(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AdvancePath_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_AdvancePath.BTT_EnemyAI_AdvancePath_C.ExecuteUbergraph_BTT_EnemyAI_AdvancePath"));
    struct Params_ExecuteUbergraph_BTT_EnemyAI_AdvancePath {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        bool CallFunc_AdvancePath_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_ExecuteUbergraph_BTT_EnemyAI_AdvancePath params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_AdvancePath_ReturnValue = (bool)CallFunc_AdvancePath_ReturnValue;
    ProcessEvent(func, &params);
}
