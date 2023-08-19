#include "AAIController.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "ECreatureStance.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_CopyStance_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_Creature_CopyStance_C* UBTT_Creature_CopyStance_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_CopyStance.BTT_Creature_CopyStance_C");
    return (UBTT_Creature_CopyStance_C*)res;
}
void UBTT_Creature_CopyStance_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_CopyStance_C::ReceiveTickAI0(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ReceiveTickAI"));
    struct Params_ReceiveTickAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        float DeltaSeconds; // 0x10
    }; // Size: 0x14
    Params_ReceiveTickAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Creature_CopyStance_C::ExecuteUbergraph_BTT_Creature_CopyStance(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInCreatureAnimationTransition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_CopyStance.BTT_Creature_CopyStance_C.ExecuteUbergraph_BTT_Creature_CopyStance"));
    struct Params_ExecuteUbergraph_BTT_Creature_CopyStance {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController_1; // 0x8
        APawn* K2Node_Event_ControlledPawn_1; // 0x10
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        AAIController* K2Node_Event_OwnerController; // 0x20
        APawn* K2Node_Event_ControlledPawn; // 0x28
        float K2Node_Event_DeltaSeconds; // 0x30
        char pad_34[0x4];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x41
        bool CallFunc_IsValid_ReturnValue_1; // 0x42
        bool CallFunc_IsInCreatureAnimationTransition_ReturnValue; // 0x43
        bool CallFunc_Not_PreBool_ReturnValue; // 0x44
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x45
        bool CallFunc_BooleanAND_ReturnValue; // 0x46
        char pad_47[0x1];
        UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue; // 0x48
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1; // 0x50
        bool K2Node_DynamicCast_bSuccess_1; // 0x58
    }; // Size: 0x59
    Params_ExecuteUbergraph_BTT_Creature_CopyStance params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController_1 = (AAIController*)K2Node_Event_OwnerController_1;
    params.K2Node_Event_ControlledPawn_1 = (APawn*)K2Node_Event_ControlledPawn_1;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsInCreatureAnimationTransition_ReturnValue = (bool)CallFunc_IsInCreatureAnimationTransition_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetBlackboardValueAsObject_ReturnValue = (UObject*)CallFunc_GetBlackboardValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Character_1 = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
