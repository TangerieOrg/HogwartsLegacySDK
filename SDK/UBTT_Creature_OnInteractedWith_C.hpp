#pragma once
#include <cstdint>
#include "ECreatureInteraction.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
class UCreatureManager;
#pragma pack(push, 1)
class UBTT_Creature_OnInteractedWith_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    ECreatureInteraction InteractionType; // 0xb0
    char pad_b1[0x7];
    FBlackboardKeySelector InteractedActorKey; // 0xb8
    static UBTT_Creature_OnInteractedWith_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_OnInteractedWith(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FName CallFunc_GetDbId_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
