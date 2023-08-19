#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "EEnemyAIAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_ActionParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_PerformAction_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_PerformAction_C* UBTT_PerformAction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_PerformAction.BTT_PerformAction_C");
    return (UBTT_PerformAction_C*)res;
}
void UBTT_PerformAction_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_PerformAction.BTT_PerformAction_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_PerformAction_C::ExecuteUbergraph_BTT_PerformAction(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StartAction_ReturnValue, bool CallFunc_WasActionASuccess_ReturnValue, bool CallFunc_IsActionDone_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_PerformAction.BTT_PerformAction_C.ExecuteUbergraph_BTT_PerformAction"));
    struct Params_ExecuteUbergraph_BTT_PerformAction {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AActor* K2Node_Event_OwnerActor_1; // 0x20
        float K2Node_Event_DeltaSeconds; // 0x28
        char pad_2c[0x4];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_StartAction_ReturnValue; // 0x39
        bool CallFunc_WasActionASuccess_ReturnValue; // 0x3a
        bool CallFunc_IsActionDone_ReturnValue; // 0x3b
    }; // Size: 0x3c
    Params_ExecuteUbergraph_BTT_PerformAction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsEnemy_Character_1 = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_StartAction_ReturnValue = (bool)CallFunc_StartAction_ReturnValue;
    params.CallFunc_WasActionASuccess_ReturnValue = (bool)CallFunc_WasActionASuccess_ReturnValue;
    params.CallFunc_IsActionDone_ReturnValue = (bool)CallFunc_IsActionDone_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_PerformAction_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_PerformAction.BTT_PerformAction_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
