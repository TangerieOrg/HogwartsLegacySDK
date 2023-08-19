#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
class UBlackboardComponent;
#pragma pack(push, 1)
class UBTT_EnemyAI_GetFleeDistLocation_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName TargetActor; // 0xb0
    FName MoveToTimeout; // 0xb8
    static UBTT_EnemyAI_GetFleeDistLocation_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_EnemyAI_GetFleeDistLocation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1, FVector CallFunc_GetFleeDistLocation_ReturnValue, float CallFunc_CalcFleeMoveToLocationTime_ReturnValue);
}; // Size: 0xc0
#pragma pack(pop)
