#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ChooseAttack_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UFunction.hpp"
UBTT_ChooseAttack_C* UBTT_ChooseAttack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Attack/BTT_ChooseAttack.BTT_ChooseAttack_C");
    return (UBTT_ChooseAttack_C*)res;
}
void UBTT_ChooseAttack_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Attack/BTT_ChooseAttack.BTT_ChooseAttack_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_ChooseAttack_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Attack/BTT_ChooseAttack.BTT_ChooseAttack_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ChooseAttack_C::ExecuteUbergraph_BTT_ChooseAttack(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ChooseAttackUpdate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UEnemyAIAttackData* CallFunc_ChooseAttack_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Attack/BTT_ChooseAttack.BTT_ChooseAttack_C.ExecuteUbergraph_BTT_ChooseAttack"));
    struct Params_ExecuteUbergraph_BTT_ChooseAttack {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x28
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_ChooseAttackUpdate_ReturnValue; // 0x39
        bool CallFunc_IsValid_ReturnValue; // 0x3a
        char pad_3b[0x5];
        UEnemyAIAttackData* CallFunc_ChooseAttack_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue_1; // 0x48
    }; // Size: 0x49
    Params_ExecuteUbergraph_BTT_ChooseAttack params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsEnemy_Character_1 = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_ChooseAttackUpdate_ReturnValue = (bool)CallFunc_ChooseAttackUpdate_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_ChooseAttack_ReturnValue = (UEnemyAIAttackData*)CallFunc_ChooseAttack_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
