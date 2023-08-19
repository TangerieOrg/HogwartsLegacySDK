#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AInventoryItemTool;
class AActor;
class UCreature_RiderComponent;
class UAnimInstance;
class UObject;
class ABiped_Player;
class ATool;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UBTT_BipedUpper_UseInventoryItem_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    FString PotionName; // 0x158
    EBTCustomActionType::Type SpawnInvItemState; // 0x168
    char pad_169[0x7];
    FHermesBPDelegateHandle ItemUsageEndedHandle; // 0x170
    AInventoryItemTool* InventoryItemTool; // 0x180
    bool ContextsSet; // 0x188
    bool RiderHandIKDisabled; // 0x189
    char pad_18a[0x6];
    static UBTT_BipedUpper_UseInventoryItem_C* StaticClass();
    void RestoreMountRiderHandIK(AActor* InActor, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue);
    void OptionalDisableMountRiderHandIK(AActor* InActor, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue);
    void SetContexts(bool Flag, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ItemUsageEnded(UObject* Caller);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_BipedUpper_UseInventoryItem(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* K2Node_Event_OwnerActor_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, ATool* CallFunc_GetActiveTool_ReturnValue, ATool* CallFunc_GetActiveTool_ReturnValue_1, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool, bool K2Node_DynamicCast_bSuccess_2, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool_1, bool K2Node_DynamicCast_bSuccess_3, FVariantMapHandle Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess_4);
}; // Size: 0x190
#pragma pack(pop)
