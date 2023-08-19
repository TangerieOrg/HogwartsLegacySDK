#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "NPC_GameChangerState.hpp"
#include "UBTT_GameChangerWait_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_GameChangerWait_C* UBTT_GameChangerWait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_GameChangerWait.BTT_GameChangerWait_C");
    return (UBTT_GameChangerWait_C*)res;
}
void UBTT_GameChangerWait_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_GameChangerWait.BTT_GameChangerWait_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_GameChangerWait_C::ReceiveAbort(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_GameChangerWait.BTT_GameChangerWait_C.ReceiveAbort"));
    struct Params_ReceiveAbort {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveAbort params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_GameChangerWait_C::ExecuteUbergraph_BTT_GameChangerWait(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, ANPC_Character* CallFunc_GetGameChangerForm_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, NPC_GameChangerState CallFunc_GetGameChangerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_GameChangerWait.BTT_GameChangerWait_C.ExecuteUbergraph_BTT_GameChangerWait"));
    struct Params_ExecuteUbergraph_BTT_GameChangerWait {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ANPC_Character* CallFunc_GetGameChangerForm_ReturnValue; // 0x28
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        NPC_GameChangerState CallFunc_GetGameChangerState_ReturnValue; // 0x39
        bool K2Node_SwitchEnum_CmpSuccess; // 0x3a
    }; // Size: 0x3b
    Params_ExecuteUbergraph_BTT_GameChangerWait params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetGameChangerForm_ReturnValue = (ANPC_Character*)CallFunc_GetGameChangerForm_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Character_1 = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetGameChangerState_ReturnValue = (NPC_GameChangerState)CallFunc_GetGameChangerState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
