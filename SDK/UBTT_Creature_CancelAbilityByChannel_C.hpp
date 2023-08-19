#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
#pragma pack(push, 1)
class UBTT_Creature_CancelAbilityByChannel_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FName ChannelName; // 0xb0
    static UBTT_Creature_CancelAbilityByChannel_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_CancelAbilityByChannel(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn);
}; // Size: 0xb8
#pragma pack(pop)
