#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AAIController;
class UPawnMovementComponent;
class APawn;
#pragma pack(push, 1)
class UBTT_Creature_StopMove_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float SpeedThreshold; // 0xb0
    char pad_b4[0x4];
    static UBTT_Creature_StopMove_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_StopMove(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, AActor* K2Node_Event_OwnerActor);
}; // Size: 0xb8
#pragma pack(pop)
