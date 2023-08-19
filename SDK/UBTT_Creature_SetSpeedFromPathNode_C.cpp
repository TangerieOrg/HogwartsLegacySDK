#include "AAIController.hpp"
#include "AActor.hpp"
#include "APathNode.hpp"
#include "APawn.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_SetSpeedFromPathNode_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
void UBTT_Creature_SetSpeedFromPathNode_C::ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C.ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode"));
    struct Params_ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x8
        APathNode* K2Node_DynamicCast_AsPath_Node; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool K2Node_SwitchEnum_CmpSuccess; // 0x19
        char pad_1a[0x6];
        AAIController* K2Node_Event_OwnerController; // 0x20
        APawn* K2Node_Event_ControlledPawn; // 0x28
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsPath_Node = (APathNode*)K2Node_DynamicCast_AsPath_Node;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Creature_SetSpeedFromPathNode_C* UBTT_Creature_SetSpeedFromPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C");
    return (UBTT_Creature_SetSpeedFromPathNode_C*)res;
}
void UBTT_Creature_SetSpeedFromPathNode_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/PathNode/BTT_Creature_SetSpeedFromPathNode.BTT_Creature_SetSpeedFromPathNode_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
