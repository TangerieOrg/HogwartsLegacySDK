#include "AAIController.hpp"
#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_MoveToLoc_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBTT_MoveToLoc_C* UBTT_MoveToLoc_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLoc.BTT_MoveToLoc_C");
    return (UBTT_MoveToLoc_C*)res;
}
void UBTT_MoveToLoc_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLoc.BTT_MoveToLoc_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_MoveToLoc_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLoc.BTT_MoveToLoc_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_MoveToLoc_C::ExecuteUbergraph_BTT_MoveToLoc(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetMyLoc_ReturnValue, bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_2, FVector CallFunc_GetValueAsVector_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_InitMoveToLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToLoc.BTT_MoveToLoc_C.ExecuteUbergraph_BTT_MoveToLoc"));
    struct Params_ExecuteUbergraph_BTT_MoveToLoc {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
        float K2Node_Event_DeltaSeconds; // 0x18
        char pad_1c[0x4];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x3];
        FVector CallFunc_GetMyLoc_ReturnValue; // 0x3c
        bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue; // 0x48
        char pad_49[0x7];
        UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x50
        UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_2; // 0x58
        FVector CallFunc_GetValueAsVector_ReturnValue; // 0x60
        FVector CallFunc_GetValueAsVector_ReturnValue_1; // 0x6c
        bool CallFunc_MoveToLocation_ReturnValue; // 0x78
        bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue_1; // 0x79
        bool CallFunc_BooleanOR_ReturnValue; // 0x7a
        char pad_7b[0x1];
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x7c
        bool CallFunc_InitMoveToLocation_ReturnValue; // 0x80
    }; // Size: 0x81
    Params_ExecuteUbergraph_BTT_MoveToLoc params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetMyLoc_ReturnValue = (FVector)CallFunc_GetMyLoc_ReturnValue;
    params.CallFunc_NeedsStayInVolumeConstrain_ReturnValue = (bool)CallFunc_NeedsStayInVolumeConstrain_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UBlackboardComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue_2 = (UBlackboardComponent*)CallFunc_GetComponentByClass_ReturnValue_2;
    params.CallFunc_GetValueAsVector_ReturnValue = (FVector)CallFunc_GetValueAsVector_ReturnValue;
    params.CallFunc_GetValueAsVector_ReturnValue_1 = (FVector)CallFunc_GetValueAsVector_ReturnValue_1;
    params.CallFunc_MoveToLocation_ReturnValue = (bool)CallFunc_MoveToLocation_ReturnValue;
    params.CallFunc_NeedsStayInVolumeConstrain_ReturnValue_1 = (bool)CallFunc_NeedsStayInVolumeConstrain_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_InitMoveToLocation_ReturnValue = (bool)CallFunc_InitMoveToLocation_ReturnValue;
    ProcessEvent(func, &params);
}
