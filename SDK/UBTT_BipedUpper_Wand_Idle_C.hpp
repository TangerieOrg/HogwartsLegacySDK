#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
#pragma pack(push, 1)
class UBTT_BipedUpper_Wand_Idle_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_BipedUpper_Wand_Idle_C* StaticClass();
    void CustActionEvt_AttackAnticipation_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_Wand_Idle(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1);
}; // Size: 0x158
#pragma pack(pop)
