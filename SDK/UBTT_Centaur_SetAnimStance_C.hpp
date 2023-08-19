#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class ACreature_Character;
class UAnimInstance;
class UCentaurAnimInstance;
#pragma pack(push, 1)
class UBTT_Centaur_SetAnimStance_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool LeftHandBowHold; // 0xb0
    char pad_b1[0x7];
    static UBTT_Centaur_SetAnimStance_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Centaur_SetAnimStance(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UCentaurAnimInstance* K2Node_DynamicCast_AsCentaur_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0xb8
#pragma pack(pop)
