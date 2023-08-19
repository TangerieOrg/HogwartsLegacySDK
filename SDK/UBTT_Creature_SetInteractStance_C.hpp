#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreature_AIComponent;
class ACreature_Character;
#pragma pack(push, 1)
class UBTT_Creature_SetInteractStance_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool Wait; // 0xb0
    char pad_b1[0x7];
    static UBTT_Creature_SetInteractStance_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveTickAI0(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Creature_SetInteractStance(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInCreatureAnimationTransition_ReturnValue, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}; // Size: 0xb8
#pragma pack(pop)
