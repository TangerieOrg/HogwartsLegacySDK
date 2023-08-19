#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AInventoryItemTool.hpp"
#include "ATool.hpp"
#include "EBTCustomActionType\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_BipedUpper_UseInventoryItem_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UCreature_RiderComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_BipedUpper_UseInventoryItem_C* UBTT_BipedUpper_UseInventoryItem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C");
    return (UBTT_BipedUpper_UseInventoryItem_C*)res;
}
void UBTT_BipedUpper_UseInventoryItem_C::RestoreMountRiderHandIK(AActor* InActor, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.RestoreMountRiderHandIK"));
    struct Params_RestoreMountRiderHandIK {
        AActor* InActor; // 0x0
        UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RestoreMountRiderHandIK params{};
    params.InActor = (AActor*)InActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_RiderComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::OptionalDisableMountRiderHandIK(AActor* InActor, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.OptionalDisableMountRiderHandIK"));
    struct Params_OptionalDisableMountRiderHandIK {
        AActor* InActor; // 0x0
        UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_OptionalDisableMountRiderHandIK params{};
    params.InActor = (AActor*)InActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_RiderComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::SetContexts(bool Flag, bool CallFunc_NotEqual_BoolBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_11"));
    struct Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9"));
    struct Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_10"));
    struct Params_CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8"));
    struct Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_7"));
    struct Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpawnInventoryItem_K2Node_BTCustomActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CaptureDevice_ConfirmCapture_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CaptureDevice_CancelCapture_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DrinkPotion_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::ItemUsageEnded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ItemUsageEnded"));
    struct Params_ItemUsageEnded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ItemUsageEnded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_UseInventoryItem.BTT_BipedUpper_UseInventoryItem_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_UseInventoryItem_C::ExecuteUbergraph_BTT_BipedUpper_UseInventoryItem(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue, AActor* K2Node_Event_OwnerActor_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, ATool* CallFunc_GetActiveTool_ReturnValue, ATool* CallFunc_GetActiveTool_ReturnValue_1, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool, bool K2Node_DynamicCast_bSuccess_2, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool_1, bool K2Node_DynamicCast_bSuccess_3, FVariantMapHandle Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess_4) {}
