#include "AAIController.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_GrowUp_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreatureManager.hpp"
#include "UFunction.hpp"
UBTT_Creature_GrowUp_C* UBTT_Creature_GrowUp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GrowUp.BTT_Creature_GrowUp_C");
    return (UBTT_Creature_GrowUp_C*)res;
}
void UBTT_Creature_GrowUp_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GrowUp.BTT_Creature_GrowUp_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_GrowUp_C::ExecuteUbergraph_BTT_Creature_GrowUp(int32_t EntryPoint, UCreatureManager* CallFunc_Get_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GrowUp.BTT_Creature_GrowUp_C.ExecuteUbergraph_BTT_Creature_GrowUp"));
    struct Params_ExecuteUbergraph_BTT_Creature_GrowUp {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x8
        AAIController* K2Node_Event_OwnerController; // 0x10
        APawn* K2Node_Event_ControlledPawn; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_BTT_Creature_GrowUp params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    ProcessEvent(func, &params);
}
