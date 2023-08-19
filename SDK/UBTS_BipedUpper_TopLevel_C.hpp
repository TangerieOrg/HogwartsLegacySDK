#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class ALumosSpellTool;
class AWandTool;
class ABiped_Player;
class UObject;
class AActor;
#pragma pack(push, 1)
class UBTS_BipedUpper_TopLevel_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    ALumosSpellTool* CurrentFiringSpell; // 0x100
    FTimerHandle LumosTimerHandle; // 0x108
    static UBTS_BipedUpper_TopLevel_C* StaticClass();
    void Flush_Queued_Actions(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_12(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Lumos_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Looting_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ServiceBegin(AActor* OwnerActor);
    void ServiceEnd(AActor* OwnerActor);
    void InTwoHandCarry(UObject* Caller);
    void DoneWaving(UObject* Caller);
    void FireLumos();
    void ExecuteUbergraph_BTS_BipedUpper_TopLevel(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_2, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AWandTool* Temp_object_Variable);
}; // Size: 0x110
#pragma pack(pop)
