#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAnimInstance;
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_RagDoll_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_RagDoll_C* StaticClass();
    void DeactivateStates(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void ActivateStates(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void SetContexts(bool Flag);
    void SetupRagDolling(AActor* CallFunc_GetActorOwner_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_RagDoll(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle);
}; // Size: 0x158
#pragma pack(pop)
