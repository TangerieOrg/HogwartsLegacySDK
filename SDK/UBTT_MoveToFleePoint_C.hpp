#pragma once
#include <cstdint>
#include "EPathFollowingStatus\Type.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
class AAIController;
#pragma pack(push, 1)
class UBTT_MoveToFleePoint_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName LocKeyName; // 0xb0
    float InterpSpeed; // 0xb8
    char pad_bc[0x4];
    FBlackboardKeySelector TimeOutKey; // 0xc0
    static UBTT_MoveToFleePoint_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_MoveToFleePoint(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, AAIController* CallFunc_GetAIController_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, EPathFollowingStatus::Type CallFunc_GetMoveStatus_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FVector CallFunc_GetFleeTargetPos_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_GetFleeTargetPos_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_InitMoveToFleePos_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
