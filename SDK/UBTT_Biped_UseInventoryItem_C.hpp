#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AInventoryItemTool;
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_UseInventoryItem_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    FString PotionName; // 0x158
    bool StickPressed; // 0x168
    char pad_169[0x7];
    AInventoryItemTool* InventoryItemTool; // 0x170
    FTimerHandle MinUsageTimerHandle; // 0x178
    bool AllowUsageEnd; // 0x180
    bool UsageEndDesired; // 0x181
    char pad_182[0x6];
    FTimerHandle MaxUsageTimerHandle; // 0x188
    bool Completed; // 0x190
    char pad_191[0x7];
    static UBTT_Biped_UseInventoryItem_C* StaticClass();
    void EndUsage(bool CallFunc_Greater_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue);
    void SetContexts(bool Flag);
    void CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void MinTimerExpired();
    void MaxTimerExpired();
    void ExecuteUbergraph_BTT_Biped_UseInventoryItem(int32_t EntryPoint, FVariantMapHandle Temp_struct_Variable, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x198
#pragma pack(pop)
