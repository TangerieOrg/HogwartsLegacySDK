#pragma once
#include <cstdint>
#include "EEnemy_AttackUpdateState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_DynamicAttackUpdateState_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_DynamicAttackUpdateState_C* StaticClass();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_DynamicAttackUpdateState(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, EEnemy_AttackUpdateState CallFunc_GetAttackUpdateState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AttackUpdateStateUpdate_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
