#pragma once
#include <cstdint>
#include "EEnemyAIAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_StopAction_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    EEnemyAIAction Action; // 0xb0
    char pad_b1[0x7];
    static UBTT_StopAction_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_StopAction(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue);
}; // Size: 0xb8
#pragma pack(pop)
