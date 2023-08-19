#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
class APathNode;
#pragma pack(push, 1)
class UBTD_Creature_IsAtPathNode_C : public UBTDecorator_BlueprintBase {
public:
    FBlackboardKeySelector PathNode; // 0xa0
    static UBTD_Creature_IsAtPathNode_C* StaticClass();
    bool PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
}; // Size: 0xc8
#pragma pack(pop)
