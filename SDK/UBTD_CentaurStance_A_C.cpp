#include "AAIController.hpp"
#include "APawn.hpp"
#include "UBTD_CentaurStance_A_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCentaurCombatComponent.hpp"
#include "UFunction.hpp"
bool UBTD_CentaurStance_A_C::PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, UCentaurCombatComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsUsingStanceA_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Decorators/BTD_CentaurStance_A.BTD_CentaurStance_A_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        UCentaurCombatComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        bool CallFunc_IsUsingStanceA_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCentaurCombatComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsUsingStanceA_ReturnValue = (bool)CallFunc_IsUsingStanceA_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBTD_CentaurStance_A_C* UBTD_CentaurStance_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Decorators/BTD_CentaurStance_A.BTD_CentaurStance_A_C");
    return (UBTD_CentaurStance_A_C*)res;
}
