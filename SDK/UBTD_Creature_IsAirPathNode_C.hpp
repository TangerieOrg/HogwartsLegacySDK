#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
class APathNode;
#pragma pack(push, 1)
class UBTD_Creature_IsAirPathNode_C : public UBTDecorator_BlueprintBase {
public:
    FBlackboardKeySelector PathNode; // 0xa0
    static UBTD_Creature_IsAirPathNode_C* StaticClass();
    bool PerformConditionCheck0(AActor* OwnerActor, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xc8
#pragma pack(pop)
