#include "AAIController.hpp"
#include "AActor.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "UBTD_Creature_CanTeleport_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCreature_PathTeleportComponent.hpp"
#include "UFunction.hpp"
UBTD_Creature_CanTeleport_C* UBTD_Creature_CanTeleport_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_CanTeleport.BTD_Creature_CanTeleport_C");
    return (UBTD_Creature_CanTeleport_C*)res;
}
bool UBTD_Creature_CanTeleport_C::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_CanTeleport.BTD_Creature_CanTeleport_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_PathTeleportComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTD_Creature_CanTeleport_C::PerformConditionCheck(AActor* OwnerActor, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_CanTeleport.BTD_Creature_CanTeleport_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_PathTeleportComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
