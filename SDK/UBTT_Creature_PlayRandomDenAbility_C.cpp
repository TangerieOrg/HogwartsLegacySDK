#include "AAIController.hpp"
#include "APawn.hpp"
#include "ECreatureStance.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_PlayRandomDenAbility_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
void UBTT_Creature_PlayRandomDenAbility_C::ExecuteUbergraph_BTT_Creature_PlayRandomDenAbility(int32_t EntryPoint, FGameplayTagContainer Temp_struct_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue, ECreatureStance CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn) {}
UBTT_Creature_PlayRandomDenAbility_C* UBTT_Creature_PlayRandomDenAbility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_PlayRandomDenAbility.BTT_Creature_PlayRandomDenAbility_C");
    return (UBTT_Creature_PlayRandomDenAbility_C*)res;
}
void UBTT_Creature_PlayRandomDenAbility_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_PlayRandomDenAbility.BTT_Creature_PlayRandomDenAbility_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
