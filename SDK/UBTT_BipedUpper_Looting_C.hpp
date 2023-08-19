#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class USkeletalMeshComponent;
class UAnimInstance;
class AActor;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UBTT_BipedUpper_Looting_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_BipedUpper_Looting_C* StaticClass();
    bool IsCrouching(USkeletalMeshComponent* Temp_object_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_Looting(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue);
}; // Size: 0x158
#pragma pack(pop)
