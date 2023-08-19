#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBTT_ForceQBUpdate_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_ForceQBUpdate_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ForceQBUpdate(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
