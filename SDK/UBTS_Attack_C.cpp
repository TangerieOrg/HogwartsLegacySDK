#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTS_Attack_C.hpp"
#include "UBTService_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTS_Attack_C* UBTS_Attack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Service/BTS_Attack.BTS_Attack_C");
    return (UBTS_Attack_C*)res;
}
void UBTS_Attack_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Service/BTS_Attack.BTS_Attack_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTS_Attack_C::ExecuteUbergraph_BTS_Attack(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Service/BTS_Attack.BTS_Attack_C.ExecuteUbergraph_BTS_Attack"));
    struct Params_ExecuteUbergraph_BTS_Attack {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_BTS_Attack params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
