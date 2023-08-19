#pragma once
#include <cstdint>
#include "EEnemy_AttackUpdateState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_AttackUpdateState_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName Label; // 0xb0
    EEnemy_AttackUpdateState AttackUpdateState; // 0xb8
    bool Return; // 0xb9
    char pad_ba[0x6];
    static UBTT_AttackUpdateState_C* StaticClass();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_AttackUpdateState(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AttackUpdateStateUpdate_ReturnValue);
}; // Size: 0xc0
#pragma pack(pop)
