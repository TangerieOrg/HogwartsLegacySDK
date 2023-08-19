#include "AAIController.hpp"
#include "AActor.hpp"
#include "APathNode.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_SetPathEndModeFromPathNode_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
#include "UPathFollowingComponent.hpp"
UBTT_Creature_SetPathEndModeFromPathNode_C* UBTT_Creature_SetPathEndModeFromPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetPathEndModeFromPathNode.BTT_Creature_SetPathEndModeFromPathNode_C");
    return (UBTT_Creature_SetPathEndModeFromPathNode_C*)res;
}
void UBTT_Creature_SetPathEndModeFromPathNode_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetPathEndModeFromPathNode.BTT_Creature_SetPathEndModeFromPathNode_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_SetPathEndModeFromPathNode_C::ExecuteUbergraph_BTT_Creature_SetPathEndModeFromPathNode(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetPathEndModeFromPathNode.BTT_Creature_SetPathEndModeFromPathNode_C.ExecuteUbergraph_BTT_Creature_SetPathEndModeFromPathNode"));
    struct Params_ExecuteUbergraph_BTT_Creature_SetPathEndModeFromPathNode {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x8
        AAIController* K2Node_Event_OwnerController; // 0x10
        APawn* K2Node_Event_ControlledPawn; // 0x18
        APathNode* K2Node_DynamicCast_AsPath_Node; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x39
        char pad_3a[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3c
        UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x48
        bool CallFunc_IsValid_ReturnValue_1; // 0x49
        bool CallFunc_BooleanOR_ReturnValue; // 0x4a
    }; // Size: 0x4b
    Params_ExecuteUbergraph_BTT_Creature_SetPathEndModeFromPathNode params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_DynamicCast_AsPath_Node = (APathNode*)K2Node_DynamicCast_AsPath_Node;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetPathFollowingComponent_ReturnValue = (UPathFollowingComponent*)CallFunc_GetPathFollowingComponent_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
