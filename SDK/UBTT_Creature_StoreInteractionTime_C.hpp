#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreature_AIComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_Creature_StoreInteractionTime_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector InteractionTarget; // 0xb0
    static UBTT_Creature_StoreInteractionTime_C* StaticClass();
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_StoreInteractionTime(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
