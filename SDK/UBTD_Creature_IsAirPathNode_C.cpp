#include "AActor.hpp"
#include "APathNode.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTD_Creature_IsAirPathNode_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_Creature_IsAirPathNode_C* UBTD_Creature_IsAirPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_IsAirPathNode.BTD_Creature_IsAirPathNode_C");
    return (UBTD_Creature_IsAirPathNode_C*)res;
}
bool UBTD_Creature_IsAirPathNode_C::PerformConditionCheck0(AActor* OwnerActor, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_Creature_IsAirPathNode.BTD_Creature_IsAirPathNode_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x10
        APathNode* K2Node_DynamicCast_AsPath_Node; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsPath_Node = (APathNode*)K2Node_DynamicCast_AsPath_Node;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
