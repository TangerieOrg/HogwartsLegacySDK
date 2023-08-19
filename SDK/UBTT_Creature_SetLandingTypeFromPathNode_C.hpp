#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class ACreature_Character;
class AActor;
class APathNode;
#pragma pack(push, 1)
class UBTT_Creature_SetLandingTypeFromPathNode_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector InPathNode; // 0xb0
    FBlackboardKeySelector OutLandingTypeKey; // 0xd8
    static UBTT_Creature_SetLandingTypeFromPathNode_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_SetLandingTypeFromPathNode(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, APathNode* K2Node_DynamicCast_AsPath_Node, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1);
}; // Size: 0x100
#pragma pack(pop)
