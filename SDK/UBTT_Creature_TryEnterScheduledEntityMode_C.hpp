#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UBTT_Creature_TryEnterScheduledEntityMode_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_Creature_TryEnterScheduledEntityMode_C* StaticClass();
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_TryEnterScheduledEntityMode(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
