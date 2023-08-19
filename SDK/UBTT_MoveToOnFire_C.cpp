#include "AAIController.hpp"
#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "APawn.hpp"
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_MoveToOnFire_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_MoveToOnFire_C* UBTT_MoveToOnFire_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToOnFire.BTT_MoveToOnFire_C");
    return (UBTT_MoveToOnFire_C*)res;
}
void UBTT_MoveToOnFire_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToOnFire.BTT_MoveToOnFire_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_MoveToOnFire_C::ExecuteUbergraph_BTT_MoveToOnFire(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MoveToOnFire_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToOnFire.BTT_MoveToOnFire_C.ExecuteUbergraph_BTT_MoveToOnFire"));
    struct Params_ExecuteUbergraph_BTT_MoveToOnFire {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        bool CallFunc_MoveToOnFire_ReturnValue; // 0x21
    }; // Size: 0x22
    Params_ExecuteUbergraph_BTT_MoveToOnFire params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_MoveToOnFire_ReturnValue = (bool)CallFunc_MoveToOnFire_ReturnValue;
    ProcessEvent(func, &params);
}
