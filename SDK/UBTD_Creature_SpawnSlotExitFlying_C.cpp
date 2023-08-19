#include "AAIController.hpp"
#include "APawn.hpp"
#include "UBTD_Creature_SpawnSlotExitFlying_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
UBTD_Creature_SpawnSlotExitFlying_C* UBTD_Creature_SpawnSlotExitFlying_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_SpawnSlotExitFlying.BTD_Creature_SpawnSlotExitFlying_C");
    return (UBTD_Creature_SpawnSlotExitFlying_C*)res;
}
bool UBTD_Creature_SpawnSlotExitFlying_C::PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_SpawnSlotExitFlying.BTD_Creature_SpawnSlotExitFlying_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue_1; // 0x21
    }; // Size: 0x22
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
