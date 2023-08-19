#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTD_Creature_HasTagOnTarget_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_Creature_HasTagOnTarget_C* UBTD_Creature_HasTagOnTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C");
    return (UBTD_Creature_HasTagOnTarget_C*)res;
}
bool UBTD_Creature_HasTagOnTarget_C::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x18
        bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.CallFunc_GetDoesActorTagExistFromOwner_ReturnValue = (bool)CallFunc_GetDoesActorTagExistFromOwner_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTD_Creature_HasTagOnTarget_C::PerformConditionCheck(AActor* OwnerActor, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_HasTagOnTarget.BTD_Creature_HasTagOnTarget_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x10
        bool CallFunc_GetDoesActorTagExistFromOwner_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.CallFunc_GetDoesActorTagExistFromOwner_ReturnValue = (bool)CallFunc_GetDoesActorTagExistFromOwner_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
