#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
#pragma pack(push, 1)
class UBTT_BipedUpper_BlockedByWall_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_BipedUpper_BlockedByWall_C* StaticClass();
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_BlockedByWall(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0x158
#pragma pack(pop)
