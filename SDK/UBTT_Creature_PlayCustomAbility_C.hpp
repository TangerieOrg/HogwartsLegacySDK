#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
#pragma pack(push, 1)
class UBTT_Creature_PlayCustomAbility_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_Creature_PlayCustomAbility_C* StaticClass();
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_PlayCustomAbility(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn);
}; // Size: 0xb0
#pragma pack(pop)
