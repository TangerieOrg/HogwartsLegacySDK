#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UBTT_BipedUpper_OpenDoor_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool LeftHand; // 0x158
    char pad_159[0x7];
    static UBTT_BipedUpper_OpenDoor_C* StaticClass();
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_OpenDoor(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x160
#pragma pack(pop)
