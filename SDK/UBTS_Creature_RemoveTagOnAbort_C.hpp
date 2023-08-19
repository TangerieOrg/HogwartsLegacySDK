#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
#pragma pack(push, 1)
class UBTS_Creature_RemoveTagOnAbort_C : public UBTService_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x98
    FBlackboardKeySelector TargetActor; // 0xa0
    FName TagID; // 0xc8
    static UBTS_Creature_RemoveTagOnAbort_C* StaticClass();
    void ReceiveDeactivationAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, bool CallFunc_RemoveActorTag_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
