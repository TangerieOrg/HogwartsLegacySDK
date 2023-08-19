#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_EnemyAI_OnFireMoveInit_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UNPC_Component.hpp"
UBTT_EnemyAI_OnFireMoveInit_C* UBTT_EnemyAI_OnFireMoveInit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_OnFireMoveInit.BTT_EnemyAI_OnFireMoveInit_C");
    return (UBTT_EnemyAI_OnFireMoveInit_C*)res;
}
void UBTT_EnemyAI_OnFireMoveInit_C::ExecuteUbergraph_BTT_EnemyAI_OnFireMoveInit(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InitMoveToOnFire_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_OnFireMoveInit.BTT_EnemyAI_OnFireMoveInit_C.ExecuteUbergraph_BTT_EnemyAI_OnFireMoveInit"));
    struct Params_ExecuteUbergraph_BTT_EnemyAI_OnFireMoveInit {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_InitMoveToOnFire_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_ExecuteUbergraph_BTT_EnemyAI_OnFireMoveInit params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_InitMoveToOnFire_ReturnValue = (bool)CallFunc_InitMoveToOnFire_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_EnemyAI_OnFireMoveInit_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_OnFireMoveInit.BTT_EnemyAI_OnFireMoveInit_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
