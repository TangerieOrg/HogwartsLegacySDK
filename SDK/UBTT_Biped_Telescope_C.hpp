#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_Telescope_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_Telescope_C* StaticClass();
    void SetContexts(bool Flag);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BeginInteract_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ExitTelescope_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_Telescope(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor);
}; // Size: 0x158
#pragma pack(pop)
