#include "AAIController.hpp"
#include "AActor.hpp"
#include "APathNode.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTD_Creature_IsAtPathNode_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_Creature_IsAtPathNode_C* UBTD_Creature_IsAtPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_IsAtPathNode.BTD_Creature_IsAtPathNode_C");
    return (UBTD_Creature_IsAtPathNode_C*)res;
}
bool UBTD_Creature_IsAtPathNode_C::PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_IsAtPathNode.BTD_Creature_IsAtPathNode_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x14
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x20
        APathNode* K2Node_DynamicCast_AsPath_Node; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x34
        float CallFunc_Vector_Distance_ReturnValue; // 0x40
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x44
    }; // Size: 0x45
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsPath_Node = (APathNode*)K2Node_DynamicCast_AsPath_Node;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
