#include "AAIController.hpp"
#include "AActor.hpp"
#include "EPathFollowingStatus\Type.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTT_MoveToFleePoint_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_MoveToFleePoint_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_MoveToFleePoint_C* UBTT_MoveToFleePoint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToFleePoint.BTT_MoveToFleePoint_C");
    return (UBTT_MoveToFleePoint_C*)res;
}
void UBTT_MoveToFleePoint_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_MoveToFleePoint_C::ExecuteUbergraph_BTT_MoveToFleePoint(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, AAIController* CallFunc_GetAIController_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, EPathFollowingStatus::Type CallFunc_GetMoveStatus_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FVector CallFunc_GetFleeTargetPos_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_GetFleeTargetPos_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_InitMoveToFleePos_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToFleePoint.BTT_MoveToFleePoint_C.ExecuteUbergraph_BTT_MoveToFleePoint"));
    struct Params_ExecuteUbergraph_BTT_MoveToFleePoint {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        AActor* K2Node_Event_OwnerActor_1; // 0x10
        float K2Node_Event_DeltaSeconds; // 0x18
        char pad_1c[0x4];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
        AAIController* CallFunc_GetAIController_ReturnValue; // 0x28
        AActor* CallFunc_GetOwner_ReturnValue; // 0x30
        EPathFollowingStatus::Type CallFunc_GetMoveStatus_ReturnValue; // 0x38
        char pad_39[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x3c
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x48
        char pad_49[0x3];
        FVector CallFunc_GetFleeTargetPos_ReturnValue; // 0x4c
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x58
        char pad_64[0x4];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x68
        bool CallFunc_K2_SetActorRotation_ReturnValue; // 0x70
        char pad_71[0x3];
        FVector CallFunc_GetFleeTargetPos_ReturnValue_1; // 0x74
        bool CallFunc_MoveToLocation_ReturnValue; // 0x80
        char pad_81[0x3];
        float CallFunc_GetBlackboardValueAsFloat_ReturnValue; // 0x84
        bool CallFunc_InitMoveToFleePos_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_ExecuteUbergraph_BTT_MoveToFleePoint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetAIController_ReturnValue = (AAIController*)CallFunc_GetAIController_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetMoveStatus_ReturnValue = (EPathFollowingStatus::Type)CallFunc_GetMoveStatus_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_GetFleeTargetPos_ReturnValue = (FVector)CallFunc_GetFleeTargetPos_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_K2_SetActorRotation_ReturnValue = (bool)CallFunc_K2_SetActorRotation_ReturnValue;
    params.CallFunc_GetFleeTargetPos_ReturnValue_1 = (FVector)CallFunc_GetFleeTargetPos_ReturnValue_1;
    params.CallFunc_MoveToLocation_ReturnValue = (bool)CallFunc_MoveToLocation_ReturnValue;
    params.CallFunc_GetBlackboardValueAsFloat_ReturnValue = (float)CallFunc_GetBlackboardValueAsFloat_ReturnValue;
    params.CallFunc_InitMoveToFleePos_ReturnValue = (bool)CallFunc_InitMoveToFleePos_ReturnValue;
    ProcessEvent(func, &params);
}
