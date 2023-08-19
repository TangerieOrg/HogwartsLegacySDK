#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
#pragma pack(push, 1)
class UBTT_Creature_SetTagLimitOnActor_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName TagID; // 0xb0
    FBlackboardKeySelector ActorKey; // 0xb8
    int32_t Limit; // 0xe0
    char pad_e4[0x4];
    static UBTT_Creature_SetTagLimitOnActor_C* StaticClass();
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
