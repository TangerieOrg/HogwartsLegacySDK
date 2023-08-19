#include "AActor.hpp"
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_MoveToLastKnownTargetLoc_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_MoveToLastKnownTargetLoc_C* UBTT_MoveToLastKnownTargetLoc_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C");
    return (UBTT_MoveToLastKnownTargetLoc_C*)res;
}
void UBTT_MoveToLastKnownTargetLoc_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_MoveToLastKnownTargetLoc_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_MoveToLastKnownTargetLoc_C::ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* K2Node_Event_OwnerActor, bool CallFunc_IsStationary_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsStationary_ReturnValue_1, FVector CallFunc_GetLastKnownTargetLoc_ReturnValue, FVector CallFunc_GetLastKnownTargetLoc_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, bool CallFunc_InitMoveToLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLastKnownTargetLoc.BTT_MoveToLastKnownTargetLoc_C.ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc"));
    struct Params_ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        AActor* K2Node_Event_OwnerActor; // 0x20
        bool CallFunc_IsStationary_ReturnValue; // 0x28
        char pad_29[0x7];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x30
        bool CallFunc_IsStationary_ReturnValue_1; // 0x38
        char pad_39[0x3];
        FVector CallFunc_GetLastKnownTargetLoc_ReturnValue; // 0x3c
        FVector CallFunc_GetLastKnownTargetLoc_ReturnValue_1; // 0x48
        bool CallFunc_MoveToLocation_ReturnValue; // 0x54
        bool CallFunc_InitMoveToLocation_ReturnValue; // 0x55
    }; // Size: 0x56
    Params_ExecuteUbergraph_BTT_MoveToLastKnownTargetLoc params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_IsStationary_ReturnValue = (bool)CallFunc_IsStationary_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsStationary_ReturnValue_1 = (bool)CallFunc_IsStationary_ReturnValue_1;
    params.CallFunc_GetLastKnownTargetLoc_ReturnValue = (FVector)CallFunc_GetLastKnownTargetLoc_ReturnValue;
    params.CallFunc_GetLastKnownTargetLoc_ReturnValue_1 = (FVector)CallFunc_GetLastKnownTargetLoc_ReturnValue_1;
    params.CallFunc_MoveToLocation_ReturnValue = (bool)CallFunc_MoveToLocation_ReturnValue;
    params.CallFunc_InitMoveToLocation_ReturnValue = (bool)CallFunc_InitMoveToLocation_ReturnValue;
    ProcessEvent(func, &params);
}
