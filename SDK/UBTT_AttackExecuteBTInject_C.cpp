#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_AttackExecuteBTInject_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_AttackExecuteBTInject_C* UBTT_AttackExecuteBTInject_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_AttackExecuteBTInject.BTT_AttackExecuteBTInject_C");
    return (UBTT_AttackExecuteBTInject_C*)res;
}
void UBTT_AttackExecuteBTInject_C::ExecuteUbergraph_BTT_AttackExecuteBTInject(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_AttackExecuteBTInject.BTT_AttackExecuteBTInject_C.ExecuteUbergraph_BTT_AttackExecuteBTInject"));
    struct Params_ExecuteUbergraph_BTT_AttackExecuteBTInject {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_BTT_AttackExecuteBTInject params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_AttackExecuteBTInject_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_AttackExecuteBTInject.BTT_AttackExecuteBTInject_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
