#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class UPathFollowingComponent;
class APawn;
class AActor;
class APathNode;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UBTT_Creature_SetPathEndModeFromPathNode_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector PathNode; // 0xb0
    static UBTT_Creature_SetPathEndModeFromPathNode_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_SetPathEndModeFromPathNode(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
