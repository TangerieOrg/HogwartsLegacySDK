#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_SetTagLimitOnActor_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_Creature_SetTagLimitOnActor_C* UBTT_Creature_SetTagLimitOnActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C");
    return (UBTT_Creature_SetTagLimitOnActor_C*)res;
}
void UBTT_Creature_SetTagLimitOnActor_C::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_SetTagLimitOnActor_C::ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetTagLimitOnActor.BTT_Creature_SetTagLimitOnActor_C.ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor"));
    struct Params_ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_BTT_Creature_SetTagLimitOnActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    ProcessEvent(func, &params);
}
