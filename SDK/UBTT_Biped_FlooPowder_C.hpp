#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UObject;
class UBlackboardComponent;
class AFloo;
#pragma pack(push, 1)
class UBTT_Biped_FlooPowder_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_FlooPowder_C* StaticClass();
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlooEntered_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlooCastFinished_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlooExitFinished_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlooCancelFinished_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlooDropPowder_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void FlooTeleportFinished(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_FlooPowder(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AFloo* K2Node_DynamicCast_AsFloo, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor);
}; // Size: 0x158
#pragma pack(pop)
