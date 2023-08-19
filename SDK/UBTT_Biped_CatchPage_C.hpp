#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
class UBiped_AnimInstance;
class ATool;
#pragma pack(push, 1)
class UBTT_Biped_CatchPage_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_CatchPage_C* StaticClass();
    void TurnAndFaceDirection(AActor* TargetActor, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue);
    void SetContexts(bool Flag);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_CatchPage(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, FVariantMapHandle Temp_struct_Variable, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, ATool* CallFunc_GetActiveTool_ReturnValue);
}; // Size: 0x158
#pragma pack(pop)
