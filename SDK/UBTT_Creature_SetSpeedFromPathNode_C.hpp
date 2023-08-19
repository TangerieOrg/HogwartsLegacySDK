#pragma once
#include <cstdint>
#include "ECreatureMovementSpeed.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class AActor;
class APathNode;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UBTT_Creature_SetSpeedFromPathNode_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector PathNode; // 0xb0
    ECreatureMovementSpeed CreatureMovementSpeed; // 0xd8
    char pad_d9[0x7];
    static UBTT_Creature_SetSpeedFromPathNode_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_SetSpeedFromPathNode(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
