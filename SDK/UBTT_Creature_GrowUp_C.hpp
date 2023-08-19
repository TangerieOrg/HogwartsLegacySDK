#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreatureManager;
#pragma pack(push, 1)
class UBTT_Creature_GrowUp_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_Creature_GrowUp_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_GrowUp(int32_t EntryPoint, UCreatureManager* CallFunc_Get_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn);
}; // Size: 0xb0
#pragma pack(pop)
