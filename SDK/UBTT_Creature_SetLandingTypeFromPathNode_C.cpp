#include "AAIController.hpp"
#include "AActor.hpp"
#include "ACreature_Character.hpp"
#include "APathNode.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_SetLandingTypeFromPathNode_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_Creature_SetLandingTypeFromPathNode_C* UBTT_Creature_SetLandingTypeFromPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetLandingTypeFromPathNode.BTT_Creature_SetLandingTypeFromPathNode_C");
    return (UBTT_Creature_SetLandingTypeFromPathNode_C*)res;
}
void UBTT_Creature_SetLandingTypeFromPathNode_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetLandingTypeFromPathNode.BTT_Creature_SetLandingTypeFromPathNode_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_SetLandingTypeFromPathNode_C::ExecuteUbergraph_BTT_Creature_SetLandingTypeFromPathNode(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetLandingTypeFromPathNode.BTT_Creature_SetLandingTypeFromPathNode_C.ExecuteUbergraph_BTT_Creature_SetLandingTypeFromPathNode"));
    struct Params_ExecuteUbergraph_BTT_Creature_SetLandingTypeFromPathNode {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        uint8_t CallFunc_MakeLiteralByte_ReturnValue; // 0x21
        char pad_22[0x6];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x28
        APathNode* K2Node_DynamicCast_AsPath_Node; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x39
        char pad_3a[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3c
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x40
        bool K2Node_SwitchEnum_CmpSuccess; // 0x41
        bool CallFunc_BooleanOR_ReturnValue; // 0x42
        uint8_t CallFunc_MakeLiteralByte_ReturnValue_1; // 0x43
    }; // Size: 0x44
    Params_ExecuteUbergraph_BTT_Creature_SetLandingTypeFromPathNode params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_MakeLiteralByte_ReturnValue = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsPath_Node = (APathNode*)K2Node_DynamicCast_AsPath_Node;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_MakeLiteralByte_ReturnValue_1 = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue_1;
    ProcessEvent(func, &params);
}
