#include "AActor.hpp"
#include "EEnemy_AttackUpdateState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_AttackUpdateState_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_AttackUpdateState_C::ExecuteUbergraph_BTT_AttackUpdateState(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AttackUpdateStateUpdate_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_AttackUpdateState.BTT_AttackUpdateState_C.ExecuteUbergraph_BTT_AttackUpdateState"));
    struct Params_ExecuteUbergraph_BTT_AttackUpdateState {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
        bool CallFunc_AttackUpdateStateUpdate_ReturnValue; // 0x21
    }; // Size: 0x22
    Params_ExecuteUbergraph_BTT_AttackUpdateState params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_AttackUpdateStateUpdate_ReturnValue = (bool)CallFunc_AttackUpdateStateUpdate_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_AttackUpdateState_C* UBTT_AttackUpdateState_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_AttackUpdateState.BTT_AttackUpdateState_C");
    return (UBTT_AttackUpdateState_C*)res;
}
void UBTT_AttackUpdateState_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_AttackUpdateState.BTT_AttackUpdateState_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
