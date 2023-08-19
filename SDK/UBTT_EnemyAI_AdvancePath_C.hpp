#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_EnemyAI_AdvancePath_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector PathNodeLoc; // 0xb0
    FBlackboardKeySelector HasPathKey; // 0xd8
    static UBTT_EnemyAI_AdvancePath_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_EnemyAI_AdvancePath(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AdvancePath_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
