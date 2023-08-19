#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AAIController;
class APawn;
#pragma pack(push, 1)
class UBTT_Creature_GetLocationAbove_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float Height; // 0xb0
    char pad_b4[0x4];
    FBlackboardKeySelector TargetLocationKey; // 0xb8
    static UBTT_Creature_GetLocationAbove_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_GetLocationAbove(int32_t EntryPoint, FVector CallFunc_MakeVector_ReturnValue, AActor* K2Node_Event_OwnerActor, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1);
}; // Size: 0xe0
#pragma pack(pop)
