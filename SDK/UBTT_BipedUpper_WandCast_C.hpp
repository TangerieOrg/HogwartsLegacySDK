#pragma once
#include <cstdint>
#include "ERightArmState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ASpellTool;
class AActor;
class UAnimInstance;
class ABiped_Player;
class UObject;
class UAmbulatory_AnimInstance;
struct FMunitionImpactData;
#pragma pack(push, 1)
class UBTT_BipedUpper_WandCast_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    ASpellTool* CurrentFiringSpell; // 0x158
    bool SpellFired; // 0x160
    bool ButtonReleased; // 0x161
    ERightArmState::Type Right_Arm_State; // 0x162
    char pad_163[0x5];
    static UBTT_BipedUpper_WandCast_C* StaticClass();
    void FlushQueuedActions(AActor* InActor);
    void SetTargetTrackers(AActor* InputPin);
    void SetContexts(bool Flag);
    void StartWandAbility(AActor* InActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ExecuteUbergraph_BTT_BipedUpper_WandCast(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x168
#pragma pack(pop)
