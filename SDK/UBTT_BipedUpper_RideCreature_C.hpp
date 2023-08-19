#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_BipedUpper_RideCreature_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_BipedUpper_RideCreature_C* StaticClass();
    void SetContexts(bool Flag);
    void CustActionEvt_DismountCreatureUpper_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_RideCreature(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x158
#pragma pack(pop)
