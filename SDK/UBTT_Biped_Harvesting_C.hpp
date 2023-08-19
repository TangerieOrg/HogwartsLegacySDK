#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
#pragma pack(push, 1)
class UBTT_Biped_Harvesting_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_Harvesting_C* StaticClass();
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_Harvesting(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1);
}; // Size: 0x158
#pragma pack(pop)
