#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class ACreature_Character;
class ACreatureFeedingStation;
class AActor;
#pragma pack(push, 1)
class UBTT_Creature_RequestFeedFromFeedingStation_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector FeedingStation; // 0xb0
    static UBTT_Creature_RequestFeedFromFeedingStation_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DispenseFeed_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
