#pragma once
#include <cstdint>
#include "EEnemyAIAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_ActionParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_PerformAction_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    EEnemyAIAction Action; // 0xb0
    char pad_b1[0x3];
    float Timeout; // 0xb4
    FNPC_ActionParams ActionParams; // 0xb8
    AActor* Actor; // 0xf0
    FVector Loc; // 0xf8
    bool ForceReturn; // 0x104
    bool ForcesReturnSuccess; // 0x105
    char pad_106[0x2];
    FGameplayTagContainer TagContainer; // 0x108
    static UBTT_PerformAction_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_PerformAction(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StartAction_ReturnValue, bool CallFunc_WasActionASuccess_ReturnValue, bool CallFunc_IsActionDone_ReturnValue);
}; // Size: 0x128
#pragma pack(pop)
