#include "AActor.hpp"
#include "AEnemy_Character.hpp"
#include "EEnemy_Ability.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_WaitForAbility_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_WaitForAbility_C* UBTT_WaitForAbility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_WaitForAbility.BTT_WaitForAbility_C");
    return (UBTT_WaitForAbility_C*)res;
}
void UBTT_WaitForAbility_C::ExecuteUbergraph_BTT_WaitForAbility(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, bool CallFunc_WaitForAbility_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_WaitForAbility.BTT_WaitForAbility_C.ExecuteUbergraph_BTT_WaitForAbility"));
    struct Params_ExecuteUbergraph_BTT_WaitForAbility {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x28
        bool CallFunc_WaitForAbility_ReturnValue; // 0x30
        char pad_31[0x7];
        AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BTT_WaitForAbility params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsEnemy_Character = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_WaitForAbility_ReturnValue = (bool)CallFunc_WaitForAbility_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Character_1 = (AEnemy_Character*)K2Node_DynamicCast_AsEnemy_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTT_WaitForAbility_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_WaitForAbility.BTT_WaitForAbility_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_WaitForAbility_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_WaitForAbility.BTT_WaitForAbility_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
