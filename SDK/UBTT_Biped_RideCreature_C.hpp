#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class APlayerController;
class ABiped_PlayerController;
#pragma pack(push, 1)
class UBTT_Biped_RideCreature_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_RideCreature_C* StaticClass();
    void CustActionEvt_DismountCreature_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_RideCreature(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0x158
#pragma pack(pop)
