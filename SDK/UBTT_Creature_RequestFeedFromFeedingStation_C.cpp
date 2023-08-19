#include "AAIController.hpp"
#include "AActor.hpp"
#include "ACreatureFeedingStation.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_RequestFeedFromFeedingStation_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_Creature_RequestFeedFromFeedingStation_C* UBTT_Creature_RequestFeedFromFeedingStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C");
    return (UBTT_Creature_RequestFeedFromFeedingStation_C*)res;
}
void UBTT_Creature_RequestFeedFromFeedingStation_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_RequestFeedFromFeedingStation_C::ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DispenseFeed_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_RequestFeedFromFeedingStation.BTT_Creature_RequestFeedFromFeedingStation_C.ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation"));
    struct Params_ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x28
        ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_DispenseFeed_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_ExecuteUbergraph_BTT_Creature_RequestFeedFromFeedingStation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Feeding_Station = (ACreatureFeedingStation*)K2Node_DynamicCast_AsCreature_Feeding_Station;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_DispenseFeed_ReturnValue = (bool)CallFunc_DispenseFeed_ReturnValue;
    ProcessEvent(func, &params);
}
