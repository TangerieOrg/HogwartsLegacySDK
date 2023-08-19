#include "AAIController.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "ECreatureCageAnimation.hpp"
#include "UBTD_Creature_CageAnimationType_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_Creature_CageAnimationType_C* UBTD_Creature_CageAnimationType_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_CageAnimationType.BTD_Creature_CageAnimationType_C");
    return (UBTD_Creature_CageAnimationType_C*)res;
}
bool UBTD_Creature_CageAnimationType_C::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_CageAnimationType.BTD_Creature_CageAnimationType_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x21
    }; // Size: 0x22
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
