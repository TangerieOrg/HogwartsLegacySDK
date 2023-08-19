#include "AAIController.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_PlayCustomAbility_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_Creature_PlayCustomAbility_C* UBTT_Creature_PlayCustomAbility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Tasks/BTT_Creature_PlayCustomAbility.BTT_Creature_PlayCustomAbility_C");
    return (UBTT_Creature_PlayCustomAbility_C*)res;
}
void UBTT_Creature_PlayCustomAbility_C::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Tasks/BTT_Creature_PlayCustomAbility.BTT_Creature_PlayCustomAbility_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_PlayCustomAbility_C::ExecuteUbergraph_BTT_Creature_PlayCustomAbility(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn) {}
