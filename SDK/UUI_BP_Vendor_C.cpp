#include "AActor.hpp"
#include "ABP_BroomPreviewLocator_C.hpp"
#include "ABiped_Player.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "ENotificationCategory.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FObjectHandles.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FUnavailableIconInfo.hpp"
#include "FVector2D.hpp"
#include "FVendorTransactionInfo.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPanelWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "URetainerBox.hpp"
#include "UScreen.hpp"
#include "UStatsManager.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BackgroundSmoke_C.hpp"
#include "UUI_BP_FG_CategoryNavBarHorizontal_C.hpp"
#include "UUI_BP_FG_GearInvTooltip_C.hpp"
#include "UUI_BP_FG_VendorDetails_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UUI_BP_Sparkels_C.hpp"
#include "UUI_BP_Vendor_C.hpp"
#include "UUI_BP_Vendor_ItemGroup_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UVendorManager.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Icon_Button_Pressed(UIconButtonWidget* IconButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Icon Button Pressed"));
    struct Params_Icon_Button_Pressed {
        UIconButtonWidget* IconButton; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_Icon_Button_Pressed params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_Vendor_C* UUI_BP_Vendor_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C");
    return (UUI_BP_Vendor_C*)res;
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_6() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_6"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_6 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_6 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::AbortInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.AbortInteraction__DelegateSignature"));
    struct Params_AbortInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_AbortInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Calculate_VendorBuySellModifier(FInventoryResult& InventoryResult, bool IsBuying, float& CostModifier, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVendorTransactionInfo K2Node_MakeStruct_VendorTransactionInfo, float CallFunc_CalculateVendorPricesModifier_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Calculate VendorBuySellModifier"));
    struct Params_Calculate_VendorBuySellModifier {
        FInventoryResult InventoryResult; // 0x0
        bool IsBuying; // 0x88
        char pad_89[0x3];
        float CostModifier; // 0x8c
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x90
        FVendorTransactionInfo K2Node_MakeStruct_VendorTransactionInfo; // 0x98
        float CallFunc_CalculateVendorPricesModifier_ReturnValue; // 0xac
    }; // Size: 0xb0
    Params_Calculate_VendorBuySellModifier params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    params.IsBuying = (bool)IsBuying;
    params.CostModifier = (float)CostModifier;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.K2Node_MakeStruct_VendorTransactionInfo = (FVendorTransactionInfo)K2Node_MakeStruct_VendorTransactionInfo;
    params.CallFunc_CalculateVendorPricesModifier_ReturnValue = (float)CallFunc_CalculateVendorPricesModifier_ReturnValue;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
    CostModifier = params.CostModifier;
}
void UUI_BP_Vendor_C::Finished_05C86C324CC2E3F67B4598AA730580A6() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Finished_05C86C324CC2E3F67B4598AA730580A6"));
    struct Params_Finished_05C86C324CC2E3F67B4598AA730580A6 {
    }; // Size: 0x0
    Params_Finished_05C86C324CC2E3F67B4598AA730580A6 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_5() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_5"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_5 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_5 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_4"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_4 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::RefreshEquippedGearIDs(TArray<FGearItemID>& CallFunc_GetAllEquippedGearItemIDs_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.RefreshEquippedGearIDs"));
    struct Params_RefreshEquippedGearIDs {
        TArray<FGearItemID> CallFunc_GetAllEquippedGearItemIDs_ReturnValue; // 0x0
    }; // Size: 0x10
    Params_RefreshEquippedGearIDs params{};
    params.CallFunc_GetAllEquippedGearItemIDs_ReturnValue = (TArray<FGearItemID>)CallFunc_GetAllEquippedGearItemIDs_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllEquippedGearItemIDs_ReturnValue = params.CallFunc_GetAllEquippedGearItemIDs_ReturnValue;
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::ShowPreviewDetails() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ShowPreviewDetails"));
    struct Params_ShowPreviewDetails {
    }; // Size: 0x0
    Params_ShowPreviewDetails params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent__ENTRYPOINTUI_BP_Vendor_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent__ENTRYPOINTUI_BP_Vendor_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Vendor_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        FMargin K2Node_MakeStruct_Margin_2; // 0x30
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x40
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x48
        float K2Node_MathExpression_ReturnValue; // 0x50
        FMargin K2Node_MakeStruct_Margin_3; // 0x54
        FMargin K2Node_MakeStruct_Margin_4; // 0x64
        FMargin K2Node_MakeStruct_Margin_5; // 0x74
        char pad_84[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2; // 0x88
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x90
        char pad_91[0x3];
        float K2Node_MathExpression_ReturnValue_1; // 0x94
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x98
        float CallFunc_BreakVector2D_X; // 0xa0
        float CallFunc_BreakVector2D_Y; // 0xa4
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xa8
    }; // Size: 0xac
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MakeStruct_Margin_4 = (FMargin)K2Node_MakeStruct_Margin_4;
    params.K2Node_MakeStruct_Margin_5 = (FMargin)K2Node_MakeStruct_Margin_5;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_2 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_2;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Vendor_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, FString CallFunc_SelectString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_SelectString_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_Vendor_C::BuyItems(FInventoryResult& InventoryResult, bool& Success, int32_t& TotalCost, bool& FailReasonCost, bool& FailReasonSpace, bool TempHasEnoughSpace, bool TempHasEnoughMoney, int32_t TransactionCost, int32_t ItemCost, int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_CanPerformTransfer_CanTransfer, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Transfer_Item_Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BuyItems"));
    struct Params_BuyItems {
        FInventoryResult InventoryResult; // 0x0
        bool Success; // 0x88
        char pad_89[0x3];
        int32_t TotalCost; // 0x8c
        bool FailReasonCost; // 0x90
        bool FailReasonSpace; // 0x91
        bool TempHasEnoughSpace; // 0x92
        bool TempHasEnoughMoney; // 0x93
        int32_t TransactionCost; // 0x94
        int32_t ItemCost; // 0x98
        int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost; // 0x9c
        bool CallFunc_Not_PreBool_ReturnValue; // 0xa0
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0xa1
        bool CallFunc_BooleanAND_ReturnValue; // 0xa2
        char pad_a3[0x1];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0xa4
        int32_t CallFunc_GetCount_ReturnValue; // 0xa8
        int32_t CallFunc_AdjustCount_ReturnValue; // 0xac
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0xb0
        bool CallFunc_CanPerformTransfer_CanTransfer; // 0xb1
        char pad_b2[0x2];
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0xb4
        bool CallFunc_Transfer_Item_Success; // 0xb8
    }; // Size: 0xb9
    Params_BuyItems params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    params.Success = (bool)Success;
    params.TotalCost = (int32_t)TotalCost;
    params.FailReasonCost = (bool)FailReasonCost;
    params.FailReasonSpace = (bool)FailReasonSpace;
    params.TempHasEnoughSpace = (bool)TempHasEnoughSpace;
    params.TempHasEnoughMoney = (bool)TempHasEnoughMoney;
    params.TransactionCost = (int32_t)TransactionCost;
    params.ItemCost = (int32_t)ItemCost;
    params.CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost = (int32_t)CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_GetCount_ReturnValue = (int32_t)CallFunc_GetCount_ReturnValue;
    params.CallFunc_AdjustCount_ReturnValue = (int32_t)CallFunc_AdjustCount_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_CanPerformTransfer_CanTransfer = (bool)CallFunc_CanPerformTransfer_CanTransfer;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Transfer_Item_Success = (bool)CallFunc_Transfer_Item_Success;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
    Success = params.Success;
    TotalCost = params.TotalCost;
    FailReasonSpace = params.FailReasonSpace;
    FailReasonCost = params.FailReasonCost;
}
void UUI_BP_Vendor_C::CanPreviewBroom(bool& Result, bool CallFunc_EqualEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CanPreviewBroom"));
    struct Params_CanPreviewBroom {
        bool Result; // 0x0
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_CanPreviewBroom params{};
    params.Result = (bool)Result;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_Vendor_C::IsPriorityMissionItem(FInventoryResult Item, bool& IsPriority, TArray<FName> SpecialItemIDs, TArray<FName>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.IsPriorityMissionItem"));
    struct Params_IsPriorityMissionItem {
        FInventoryResult Item; // 0x0
        bool IsPriority; // 0x88
        char pad_89[0x7];
        TArray<FName> SpecialItemIDs; // 0x90
        TArray<FName> K2Node_MakeArray_Array; // 0xa0
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xb0
        bool CallFunc_IsUnlocked_ReturnValue; // 0xb1
        bool CallFunc_Not_PreBool_ReturnValue; // 0xb2
        bool CallFunc_Array_Contains_ReturnValue; // 0xb3
        bool CallFunc_BooleanAND_ReturnValue; // 0xb4
        bool CallFunc_BooleanAND_ReturnValue_1; // 0xb5
    }; // Size: 0xb6
    Params_IsPriorityMissionItem params{};
    params.Item = (FInventoryResult)Item;
    params.IsPriority = (bool)IsPriority;
    params.SpecialItemIDs = (TArray<FName>)SpecialItemIDs;
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
    IsPriority = params.IsPriority;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_Vendor_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::ToggleGearComparison(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ToggleGearComparison"));
    struct Params_ToggleGearComparison {
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ToggleGearComparison params{};
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::CreateVendorItemGroup(FString VendorCategory, TArray<FInventoryResult>& VendorInventory, TArray<FUnavailableIconInfo>& UnavailableInventory, TArray<FName>& TutorialHighlights, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FUnavailableIconInfo> TempUnavailableItems, TArray<FInventoryResult> TempRegularItems, TArray<FInventoryResult> TempPriorityItems, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, FUnavailableIconInfo CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_GetVendorCategoryForItem_VendorCategory, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_3, FInventoryResult CallFunc_Array_Get_Item_1, bool CallFunc_IsPriorityMissionItem_IsPriority, FString CallFunc_GetVendorCategoryForItem_VendorCategory_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FInventoryResult CallFunc_Array_Get_Item_2, FInventoryResult CallFunc_Array_Get_Item_3, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button, bool CallFunc_Array_Contains_ReturnValue, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_1, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_4, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t Temp_int_Array_Index_Variable_4, bool CallFunc_BooleanOR_ReturnValue_1, FUnavailableIconInfo CallFunc_Array_Get_Item_4, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_2, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CreateVendorItemGroup"));
    struct Params_CreateVendorItemGroup {
        FString VendorCategory; // 0x0
        TArray<FInventoryResult> VendorInventory; // 0x10
        TArray<FUnavailableIconInfo> UnavailableInventory; // 0x20
        TArray<FName> TutorialHighlights; // 0x30
        bool Created; // 0x40
        char pad_41[0x7];
        UUI_BP_Vendor_ItemGroup_C* ItemGroup; // 0x48
        UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget; // 0x50
        TArray<FUnavailableIconInfo> TempUnavailableItems; // 0x58
        TArray<FInventoryResult> TempRegularItems; // 0x68
        TArray<FInventoryResult> TempPriorityItems; // 0x78
        int32_t Temp_int_Array_Index_Variable; // 0x88
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8c
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x90
        int32_t Temp_int_Array_Index_Variable_1; // 0x94
        int32_t Temp_int_Loop_Counter_Variable; // 0x98
        bool CallFunc_Less_IntInt_ReturnValue; // 0x9c
        char pad_9d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xa0
        int32_t Temp_int_Array_Index_Variable_2; // 0xa4
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xa8
        FUnavailableIconInfo CallFunc_Array_Get_Item; // 0xac
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xc4
        FItemProperties CallFunc_GetItemProperties_ItemProperties; // 0xc8
        bool CallFunc_GetItemProperties_ReturnValue; // 0x134
        char pad_135[0x3];
        FString CallFunc_GetVendorCategoryForItem_VendorCategory; // 0x138
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x148
        char pad_149[0x3];
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x14c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x150
        char pad_151[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x154
        int32_t Temp_int_Array_Index_Variable_3; // 0x158
        char pad_15c[0x4];
        FInventoryResult CallFunc_Array_Get_Item_1; // 0x160
        bool CallFunc_IsPriorityMissionItem_IsPriority; // 0x1e8
        char pad_1e9[0x7];
        FString CallFunc_GetVendorCategoryForItem_VendorCategory_1; // 0x1f0
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x200
        char pad_201[0x3];
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x204
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x208
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x20c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x210
        char pad_211[0x7];
        FInventoryResult CallFunc_Array_Get_Item_2; // 0x218
        FInventoryResult CallFunc_Array_Get_Item_3; // 0x2a0
        UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button; // 0x328
        bool CallFunc_Array_Contains_ReturnValue; // 0x330
        char pad_331[0x7];
        UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_1; // 0x338
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x340
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0x344
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x348
        char pad_349[0x3];
        int32_t Temp_int_Loop_Counter_Variable_4; // 0x34c
        bool CallFunc_Less_IntInt_ReturnValue_4; // 0x350
        char pad_351[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x354
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x358
        UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue; // 0x360
        int32_t CallFunc_Array_Length_ReturnValue_5; // 0x368
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x36c
        char pad_36d[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_6; // 0x370
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x374
        char pad_375[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_7; // 0x378
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x37c
        char pad_37d[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x380
        bool CallFunc_BooleanOR_ReturnValue; // 0x384
        char pad_385[0x3];
        int32_t Temp_int_Array_Index_Variable_4; // 0x388
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x38c
        char pad_38d[0x3];
        FUnavailableIconInfo CallFunc_Array_Get_Item_4; // 0x390
        UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_2; // 0x3a8
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x3b0
    }; // Size: 0x3b4
    Params_CreateVendorItemGroup params{};
    params.VendorCategory = (FString)VendorCategory;
    params.VendorInventory = (TArray<FInventoryResult>)VendorInventory;
    params.UnavailableInventory = (TArray<FUnavailableIconInfo>)UnavailableInventory;
    params.TutorialHighlights = (TArray<FName>)TutorialHighlights;
    params.Created = (bool)Created;
    params.ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)ItemGroup;
    params.TempItemGroupWidget = (UUI_BP_Vendor_ItemGroup_C*)TempItemGroupWidget;
    params.TempUnavailableItems = (TArray<FUnavailableIconInfo>)TempUnavailableItems;
    params.TempRegularItems = (TArray<FInventoryResult>)TempRegularItems;
    params.TempPriorityItems = (TArray<FInventoryResult>)TempPriorityItems;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Get_Item = (FUnavailableIconInfo)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetItemProperties_ItemProperties = (FItemProperties)CallFunc_GetItemProperties_ItemProperties;
    params.CallFunc_GetItemProperties_ReturnValue = (bool)CallFunc_GetItemProperties_ReturnValue;
    params.CallFunc_GetVendorCategoryForItem_VendorCategory = (FString)CallFunc_GetVendorCategoryForItem_VendorCategory;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_Array_Get_Item_1 = (FInventoryResult)CallFunc_Array_Get_Item_1;
    params.CallFunc_IsPriorityMissionItem_IsPriority = (bool)CallFunc_IsPriorityMissionItem_IsPriority;
    params.CallFunc_GetVendorCategoryForItem_VendorCategory_1 = (FString)CallFunc_GetVendorCategoryForItem_VendorCategory_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_2 = (FInventoryResult)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FInventoryResult)CallFunc_Array_Get_Item_3;
    params.CallFunc_CreateVendorItemButton_Button = (UUI_BP_InventoryIconButton_C*)CallFunc_CreateVendorItemButton_Button;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_CreateVendorItemButton_Button_1 = (UUI_BP_InventoryIconButton_C*)CallFunc_CreateVendorItemButton_Button_1;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_4 = (int32_t)Temp_int_Loop_Counter_Variable_4;
    params.CallFunc_Less_IntInt_ReturnValue_4 = (bool)CallFunc_Less_IntInt_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_5 = (int32_t)CallFunc_Array_Length_ReturnValue_5;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_6 = (int32_t)CallFunc_Array_Length_ReturnValue_6;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_7 = (int32_t)CallFunc_Array_Length_ReturnValue_7;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.Temp_int_Array_Index_Variable_4 = (int32_t)Temp_int_Array_Index_Variable_4;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Array_Get_Item_4 = (FUnavailableIconInfo)CallFunc_Array_Get_Item_4;
    params.CallFunc_CreateVendorItemButton_Button_2 = (UUI_BP_InventoryIconButton_C*)CallFunc_CreateVendorItemButton_Button_2;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
    UnavailableInventory = params.UnavailableInventory;
    VendorInventory = params.VendorInventory;
    TutorialHighlights = params.TutorialHighlights;
    Created = params.Created;
    ItemGroup = params.ItemGroup;
}
void UUI_BP_Vendor_C::DoBuySell(FInventoryResult InventoryResult, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {}
void UUI_BP_Vendor_C::ShowNotifications() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ShowNotifications"));
    struct Params_ShowNotifications {
    }; // Size: 0x0
    Params_ShowNotifications params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::GoToPage(int32_t PageIndex, bool CallFunc_GoToCategory_CategoryChanged, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.GoToPage"));
    struct Params_GoToPage {
        int32_t PageIndex; // 0x0
        bool CallFunc_GoToCategory_CategoryChanged; // 0x4
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x5
    }; // Size: 0x6
    Params_GoToPage params{};
    params.PageIndex = (int32_t)PageIndex;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::IsEquippedGear(FName GearID, FName GearVariation, bool& Result, FGearItemID K2Node_MakeStruct_GearItemID, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FGearItemID CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_GearItemIDGearItemID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsGear_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.IsEquippedGear"));
    struct Params_IsEquippedGear {
        FName GearID; // 0x0
        FName GearVariation; // 0x8
        bool Result; // 0x10
        char pad_11[0x3];
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x28
        int32_t Temp_int_Loop_Counter_Variable; // 0x2c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x30
        FGearItemID CallFunc_Array_Get_Item; // 0x34
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        bool CallFunc_EqualEqual_GearItemIDGearItemID_ReturnValue; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4d
        bool CallFunc_IsGear_ReturnValue; // 0x4e
    }; // Size: 0x4f
    Params_IsEquippedGear params{};
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.Result = (bool)Result;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FGearItemID)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_GearItemIDGearItemID_ReturnValue = (bool)CallFunc_EqualEqual_GearItemIDGearItemID_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_Vendor_C::PreloadGear(TArray<FName> GearIDs, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, TArray<FGearItemID>& CallFunc_GetAllEquippedGearItemIDs_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, EGenderEnum CallFunc_GetPlayerGenderRig_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FObjectHandles CallFunc_PreloadGearIds_ReturnValue, FGearItemID CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue, TArray<FInventoryResult>& CallFunc_GetCharacterInventory_Inventory, int32_t CallFunc_Array_Length_ReturnValue_1, FInventoryResult CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsGear_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.PreloadGear"));
    struct Params_PreloadGear {
        TArray<FName> GearIDs; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x1c
        TArray<FGearItemID> CallFunc_GetAllEquippedGearItemIDs_ReturnValue; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x34
        bool CallFunc_Less_IntInt_ReturnValue; // 0x38
        EGenderEnum CallFunc_GetPlayerGenderRig_ReturnValue; // 0x39
        char pad_3a[0x2];
        int32_t Temp_int_Array_Index_Variable_1; // 0x3c
        FObjectHandles CallFunc_PreloadGearIds_ReturnValue; // 0x40
        FGearItemID CallFunc_Array_Get_Item; // 0x50
        int32_t CallFunc_Array_Add_ReturnValue; // 0x64
        TArray<FInventoryResult> CallFunc_GetCharacterInventory_Inventory; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x78
        char pad_7c[0x4];
        FInventoryResult CallFunc_Array_Get_Item_1; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x108
        char pad_109[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x10c
        bool CallFunc_IsGear_ReturnValue; // 0x110
    }; // Size: 0x111
    Params_PreloadGear params{};
    params.GearIDs = (TArray<FName>)GearIDs;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_GetAllEquippedGearItemIDs_ReturnValue = (TArray<FGearItemID>)CallFunc_GetAllEquippedGearItemIDs_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetPlayerGenderRig_ReturnValue = (EGenderEnum)CallFunc_GetPlayerGenderRig_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_PreloadGearIds_ReturnValue = (FObjectHandles)CallFunc_PreloadGearIds_ReturnValue;
    params.CallFunc_Array_Get_Item = (FGearItemID)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_GetCharacterInventory_Inventory = (TArray<FInventoryResult>)CallFunc_GetCharacterInventory_Inventory;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (FInventoryResult)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllEquippedGearItemIDs_ReturnValue = params.CallFunc_GetAllEquippedGearItemIDs_ReturnValue;
    CallFunc_GetCharacterInventory_Inventory = params.CallFunc_GetCharacterInventory_Inventory;
}
void UUI_BP_Vendor_C::Failed_Buy(UUserWidget* Button, bool FailReasonCost, bool FailReasonSpace, FName ItemName, int32_t CallFunc_PostEventAtLocation_ReturnValue) {}
void UUI_BP_Vendor_C::RefreshPlayerInventory(TArray<FInventoryResult> TempPlayerInventory, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, UCreatureManager* CallFunc_Get_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_CreatePlayerItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, bool CallFunc_GetCanReturnToWild_ReturnValue, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_CreatePlayerItemGroup_Created_1, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup_1, bool CallFunc_Less_IntInt_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.RefreshPlayerInventory"));
    struct Params_RefreshPlayerInventory {
        TArray<FInventoryResult> TempPlayerInventory; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x28
        bool CallFunc_CreatePlayerItemGroup_Created; // 0x2c
        char pad_2d[0x3];
        UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup; // 0x30
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x38
        int32_t CallFunc_Array_Add_ReturnValue; // 0x3c
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x40
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray; // 0x48
        FInventoryResult CallFunc_Array_Get_Item; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0xe0
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xe4
        bool CallFunc_Less_IntInt_ReturnValue; // 0xe8
        char pad_e9[0x7];
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0xf0
        bool CallFunc_GetCanReturnToWild_ReturnValue; // 0xf8
        char pad_f9[0x7];
        FString CallFunc_Array_Get_Item_1; // 0x100
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x110
        bool CallFunc_CreatePlayerItemGroup_Created_1; // 0x114
        char pad_115[0x3];
        UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup_1; // 0x118
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x120
        char pad_121[0x7];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1; // 0x128
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x130
        char pad_134[0x4];
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray_1; // 0x138
    }; // Size: 0x148
    Params_RefreshPlayerInventory params{};
    params.TempPlayerInventory = (TArray<FInventoryResult>)TempPlayerInventory;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_CreatePlayerItemGroup_Created = (bool)CallFunc_CreatePlayerItemGroup_Created;
    params.CallFunc_CreatePlayerItemGroup_ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_CreatePlayerItemGroup_ItemGroup;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_GetCanReturnToWild_ReturnValue = (bool)CallFunc_GetCanReturnToWild_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FString)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_CreatePlayerItemGroup_Created_1 = (bool)CallFunc_CreatePlayerItemGroup_Created_1;
    params.CallFunc_CreatePlayerItemGroup_ItemGroup_1 = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_CreatePlayerItemGroup_ItemGroup_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_AddChildToVerticalBox_ReturnValue_1 = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray_1 = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray_1;
    ProcessEvent(func, &params);
    CallFunc_GetInventoryTextBP_InventoryResultArray = params.CallFunc_GetInventoryTextBP_InventoryResultArray;
    CallFunc_GetInventoryTextBP_InventoryResultArray_1 = params.CallFunc_GetInventoryTextBP_InventoryResultArray_1;
}
void UUI_BP_Vendor_C::StopBroomModelPreview(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.StopBroomModelPreview"));
    struct Params_StopBroomModelPreview {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StopBroomModelPreview params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::DisplayErrorMessage(FString ErrorMessage, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.DisplayErrorMessage"));
    struct Params_DisplayErrorMessage {
        FString ErrorMessage; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DisplayErrorMessage params{};
    params.ErrorMessage = (FString)ErrorMessage;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::StartBroomModelPreview(UVendorManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.StartBroomModelPreview"));
    struct Params_StartBroomModelPreview {
        UVendorManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_StartBroomModelPreview params{};
    params.CallFunc_Get_ReturnValue = (UVendorManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::RefreshAllInventories() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.RefreshAllInventories"));
    struct Params_RefreshAllInventories {
    }; // Size: 0x0
    Params_RefreshAllInventories params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::ToggleNotificationCategories(bool ShouldPause, TArray<ENotificationCategory> CategoriesToPause, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ENotificationCategory>& K2Node_MakeArray_Array, ENotificationCategory CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ToggleNotificationCategories"));
    struct Params_ToggleNotificationCategories {
        bool ShouldPause; // 0x0
        char pad_1[0x7];
        TArray<ENotificationCategory> CategoriesToPause; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        char pad_24[0x4];
        TArray<ENotificationCategory> K2Node_MakeArray_Array; // 0x28
        ENotificationCategory CallFunc_Array_Get_Item; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3c
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_ToggleNotificationCategories params{};
    params.ShouldPause = (bool)ShouldPause;
    params.CategoriesToPause = (TArray<ENotificationCategory>)CategoriesToPause;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<ENotificationCategory>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item = (ENotificationCategory)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_Vendor_C::ConditionalAutosave(bool CallFunc_AutoSaveGameData_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ConditionalAutosave"));
    struct Params_ConditionalAutosave {
        bool CallFunc_AutoSaveGameData_ReturnValue; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ConditionalAutosave params{};
    params.CallFunc_AutoSaveGameData_ReturnValue = (bool)CallFunc_AutoSaveGameData_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::VO_OnItemPurchasedFailedNoSpace(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchasedFailedNoSpace"));
    struct Params_VO_OnItemPurchasedFailedNoSpace {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemPurchasedFailedNoSpace params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::CreatePlayerItemGroup(FString VendorCategory, TArray<FInventoryResult>& PlayerInventory, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FInventoryResult> TempPlayerItems, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_IsEquippedGear_Result, FString CallFunc_GetVendorCategoryForItem_VendorCategory, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInventoryResult CallFunc_Array_Get_Item_1, UUI_BP_InventoryIconButton_C* CallFunc_CreatePlayerItemButton_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CreatePlayerItemGroup"));
    struct Params_CreatePlayerItemGroup {
        FString VendorCategory; // 0x0
        TArray<FInventoryResult> PlayerInventory; // 0x10
        bool Created; // 0x20
        char pad_21[0x7];
        UUI_BP_Vendor_ItemGroup_C* ItemGroup; // 0x28
        UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget; // 0x30
        TArray<FInventoryResult> TempPlayerItems; // 0x38
        int32_t Temp_int_Loop_Counter_Variable; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x54
        char pad_55[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x58
        char pad_5c[0x4];
        FInventoryResult CallFunc_Array_Get_Item; // 0x60
        bool CallFunc_IsEquippedGear_Result; // 0xe8
        char pad_e9[0x7];
        FString CallFunc_GetVendorCategoryForItem_VendorCategory; // 0xf0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x100
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x101
        char pad_102[0x2];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x104
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x108
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x10c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x110
        char pad_111[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x118
        UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue; // 0x120
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x128
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x12c
        char pad_12d[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x130
        int32_t Temp_int_Array_Index_Variable_1; // 0x134
        FInventoryResult CallFunc_Array_Get_Item_1; // 0x138
        UUI_BP_InventoryIconButton_C* CallFunc_CreatePlayerItemButton_Button; // 0x1c0
    }; // Size: 0x1c8
    Params_CreatePlayerItemGroup params{};
    params.VendorCategory = (FString)VendorCategory;
    params.PlayerInventory = (TArray<FInventoryResult>)PlayerInventory;
    params.Created = (bool)Created;
    params.ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)ItemGroup;
    params.TempItemGroupWidget = (UUI_BP_Vendor_ItemGroup_C*)TempItemGroupWidget;
    params.TempPlayerItems = (TArray<FInventoryResult>)TempPlayerItems;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_IsEquippedGear_Result = (bool)CallFunc_IsEquippedGear_Result;
    params.CallFunc_GetVendorCategoryForItem_VendorCategory = (FString)CallFunc_GetVendorCategoryForItem_VendorCategory;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (FInventoryResult)CallFunc_Array_Get_Item_1;
    params.CallFunc_CreatePlayerItemButton_Button = (UUI_BP_InventoryIconButton_C*)CallFunc_CreatePlayerItemButton_Button;
    ProcessEvent(func, &params);
    PlayerInventory = params.PlayerInventory;
    Created = params.Created;
    ItemGroup = params.ItemGroup;
}
void UUI_BP_Vendor_C::VO_OnLeavePreview(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnLeavePreview"));
    struct Params_VO_OnLeavePreview {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnLeavePreview params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::VO_OnGearPreview(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnGearPreview"));
    struct Params_VO_OnGearPreview {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnGearPreview params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::RefreshLegend(TArray<FLegendItemData> TempTooltipLegendItems, TArray<FLegendItemData> TempLegendItems, bool CallFunc_CanPreviewBroom_Result, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, int32_t CallFunc_Array_Add_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, FLegendItemData K2Node_MakeStruct_LegendItemData_6, int32_t CallFunc_Array_Add_ReturnValue_5, int32_t CallFunc_Array_Add_ReturnValue_6, FLegendItemData K2Node_MakeStruct_LegendItemData_7, int32_t CallFunc_Array_Add_ReturnValue_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsGear_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.RefreshLegend"));
    struct Params_RefreshLegend {
        TArray<FLegendItemData> TempTooltipLegendItems; // 0x0
        TArray<FLegendItemData> TempLegendItems; // 0x10
        bool CallFunc_CanPreviewBroom_Result; // 0x20
        char pad_21[0x7];
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x28
        int32_t CallFunc_Array_Add_ReturnValue; // 0x58
        char pad_5c[0x4];
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x60
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x90
        char pad_94[0x4];
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x98
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xc8
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0xf8
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0xfc
        bool CallFunc_BooleanOR_ReturnValue; // 0x100
        char pad_101[0x7];
        FLegendItemData K2Node_MakeStruct_LegendItemData_4; // 0x108
        int32_t CallFunc_Array_Add_ReturnValue_4; // 0x138
        char pad_13c[0x4];
        FLegendItemData K2Node_MakeStruct_LegendItemData_5; // 0x140
        FLegendItemData K2Node_MakeStruct_LegendItemData_6; // 0x170
        int32_t CallFunc_Array_Add_ReturnValue_5; // 0x1a0
        int32_t CallFunc_Array_Add_ReturnValue_6; // 0x1a4
        FLegendItemData K2Node_MakeStruct_LegendItemData_7; // 0x1a8
        int32_t CallFunc_Array_Add_ReturnValue_7; // 0x1d8
        bool CallFunc_IsValid_ReturnValue; // 0x1dc
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1dd
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x1de
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0x1df
        bool CallFunc_BooleanAND_ReturnValue; // 0x1e0
        bool CallFunc_IsGear_ReturnValue; // 0x1e1
    }; // Size: 0x1e2
    Params_RefreshLegend params{};
    params.TempTooltipLegendItems = (TArray<FLegendItemData>)TempTooltipLegendItems;
    params.TempLegendItems = (TArray<FLegendItemData>)TempLegendItems;
    params.CallFunc_CanPreviewBroom_Result = (bool)CallFunc_CanPreviewBroom_Result;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData_4 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_4;
    params.CallFunc_Array_Add_ReturnValue_4 = (int32_t)CallFunc_Array_Add_ReturnValue_4;
    params.K2Node_MakeStruct_LegendItemData_5 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_5;
    params.K2Node_MakeStruct_LegendItemData_6 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_6;
    params.CallFunc_Array_Add_ReturnValue_5 = (int32_t)CallFunc_Array_Add_ReturnValue_5;
    params.CallFunc_Array_Add_ReturnValue_6 = (int32_t)CallFunc_Array_Add_ReturnValue_6;
    params.K2Node_MakeStruct_LegendItemData_7 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_7;
    params.CallFunc_Array_Add_ReturnValue_7 = (int32_t)CallFunc_Array_Add_ReturnValue_7;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::VO_AbortInteraction(bool CallFunc_AnyQueuedConversations_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_AbortInteraction"));
    struct Params_VO_AbortInteraction {
        bool CallFunc_AnyQueuedConversations_ReturnValue; // 0x0
        char pad_1[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x8
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_VO_AbortInteraction params{};
    params.CallFunc_AnyQueuedConversations_ReturnValue = (bool)CallFunc_AnyQueuedConversations_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::IconButton_Clicked(UIconButtonWidget* Button, FInventoryResult InventoryResult, int32_t CallFunc_PostEventAtLocation_ReturnValue) {}
void UUI_BP_Vendor_C::VO_OnItemSold(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemSold"));
    struct Params_VO_OnItemSold {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemSold params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::GetVendorCategoryForItem(FName ItemName, FName ItemType, FName HolderID, FString& VendorCategory, FString OutCategory, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.GetVendorCategoryForItem"));
    struct Params_GetVendorCategoryForItem {
        FName ItemName; // 0x0
        FName ItemType; // 0x8
        FName HolderID; // 0x10
        FString VendorCategory; // 0x18
        FString OutCategory; // 0x28
        bool K2Node_SwitchName_CmpSuccess; // 0x38
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x39
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x3a
    }; // Size: 0x3b
    Params_GetVendorCategoryForItem params{};
    params.ItemName = (FName)ItemName;
    params.ItemType = (FName)ItemType;
    params.HolderID = (FName)HolderID;
    params.VendorCategory = (FString)VendorCategory;
    params.OutCategory = (FString)OutCategory;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    ProcessEvent(func, &params);
    VendorCategory = params.VendorCategory;
}
void UUI_BP_Vendor_C::PopulateTutorialHighlights(TArray<FName>& TutorialHighlights, FName Temp_name_Variable, FString CallFunc_GetMissionStepBP_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.PopulateTutorialHighlights"));
    struct Params_PopulateTutorialHighlights {
        TArray<FName> TutorialHighlights; // 0x0
        FName Temp_name_Variable; // 0x10
        FString CallFunc_GetMissionStepBP_ReturnValue; // 0x18
        int32_t CallFunc_Array_Add_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_StriStri_ReturnValue; // 0x2c
    }; // Size: 0x2d
    Params_PopulateTutorialHighlights params{};
    params.TutorialHighlights = (TArray<FName>)TutorialHighlights;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_GetMissionStepBP_ReturnValue = (FString)CallFunc_GetMissionStepBP_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_EqualEqual_StriStri_ReturnValue = (bool)CallFunc_EqualEqual_StriStri_ReturnValue;
    ProcessEvent(func, &params);
    TutorialHighlights = params.TutorialHighlights;
}
void UUI_BP_Vendor_C::VO_OnItemPurchasedFailedNoMoney(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchasedFailedNoMoney"));
    struct Params_VO_OnItemPurchasedFailedNoMoney {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemPurchasedFailedNoMoney params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::IconButton_Unhovered(UIconButtonWidget* Button, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.IconButton_Unhovered"));
    struct Params_IconButton_Unhovered {
        UIconButtonWidget* Button; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_IconButton_Unhovered params{};
    params.Button = (UIconButtonWidget*)Button;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::VO_OnItemPurchased(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnItemPurchased"));
    struct Params_VO_OnItemPurchased {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemPurchased params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Set_Vendor_Sign(FString tempShopName, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FName CallFunc_GetStatName_ReturnValue, UStatsManager* CallFunc_Get_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Conv_NameToString_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Set Vendor Sign"));
    struct Params_Set_Vendor_Sign {
        FString tempShopName; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x30
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x40
        char pad_41[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x58
        FName CallFunc_GetStatName_ReturnValue; // 0x68
        UStatsManager* CallFunc_Get_ReturnValue; // 0x70
        int32_t CallFunc_ReadStat_ReturnValue; // 0x78
        char pad_7c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue_2; // 0x80
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x90
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0xa0
        bool K2Node_SwitchInteger_CmpSuccess; // 0xb0
        char pad_b1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0xb8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xc8
        char pad_c9[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue_3; // 0xd0
        FString CallFunc_Concat_StrStr_ReturnValue_5; // 0xe0
        FString CallFunc_Conv_NameToString_ReturnValue_4; // 0xf0
        FString CallFunc_Concat_StrStr_ReturnValue_6; // 0x100
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x110
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2; // 0x111
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x112
    }; // Size: 0x113
    Params_Set_Vendor_Sign params{};
    params.tempShopName = (FString)tempShopName;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UStatsManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_ReadStat_ReturnValue = (int32_t)CallFunc_ReadStat_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_2 = (FString)CallFunc_Conv_NameToString_ReturnValue_2;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_3 = (FString)CallFunc_Conv_NameToString_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_5 = (FString)CallFunc_Concat_StrStr_ReturnValue_5;
    params.CallFunc_Conv_NameToString_ReturnValue_4 = (FString)CallFunc_Conv_NameToString_ReturnValue_4;
    params.CallFunc_Concat_StrStr_ReturnValue_6 = (FString)CallFunc_Concat_StrStr_ReturnValue_6;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_2 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_2;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::VO_OnEnterVendor(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.VO_OnEnterVendor"));
    struct Params_VO_OnEnterVendor {
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnEnterVendor params{};
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::CategorySwitch(int32_t NewIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_SelectString_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CategorySwitch"));
    struct Params_CategorySwitch {
        int32_t NewIndex; // 0x0
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x4
        char pad_5[0x3];
        FString CallFunc_SelectString_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_SelectInt_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_CategorySwitch params{};
    params.NewIndex = (int32_t)NewIndex;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::ShowCurrentIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.ShowCurrentIndex"));
    struct Params_ShowCurrentIndex {
    }; // Size: 0x0
    Params_ShowCurrentIndex params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_Vendor_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity, FLegendItemData K2Node_MakeStruct_LegendItemData, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_PreviewGear_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UPanelWidget* CallFunc_GetParent_ReturnValue, UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UPanelWidget* CallFunc_GetParent_ReturnValue_2, UPanelWidget* CallFunc_GetParent_ReturnValue_3, int32_t CallFunc_Array_LastIndex_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_UpdateGearOutfitItems_ReturnValue, bool CallFunc_CanPreviewBroom_Result, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3) {}
void UUI_BP_Vendor_C::GetItemRarityString(int32_t RarityIndex, FString& Rarity, FString TempQualityString, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.GetItemRarityString"));
    struct Params_GetItemRarityString {
        int32_t RarityIndex; // 0x0
        char pad_4[0x4];
        FString Rarity; // 0x8
        FString TempQualityString; // 0x18
        bool K2Node_SwitchInteger_CmpSuccess; // 0x28
    }; // Size: 0x29
    Params_GetItemRarityString params{};
    params.RarityIndex = (int32_t)RarityIndex;
    params.Rarity = (FString)Rarity;
    params.TempQualityString = (FString)TempQualityString;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
    Rarity = params.Rarity;
}
void UUI_BP_Vendor_C::CalculateAdjustedSellBuyCost(FInventoryResult& InventoryResult, int32_t& AdjustedCost, float Modifier, int32_t ItemValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Divide_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t K2Node_Select_Default, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, float CallFunc_Calculate_VendorBuySellModifier_CostModifier, float CallFunc_Calculate_VendorBuySellModifier_CostModifier_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CalculateAdjustedSellBuyCost"));
    struct Params_CalculateAdjustedSellBuyCost {
        FInventoryResult InventoryResult; // 0x0
        int32_t AdjustedCost; // 0x88
        float Modifier; // 0x8c
        int32_t ItemValue; // 0x90
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x94
        char pad_95[0x3];
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x98
        int32_t CallFunc_Divide_IntInt_ReturnValue; // 0x9c
        bool Temp_bool_Variable; // 0xa0
        char pad_a1[0x3];
        int32_t K2Node_Select_Default; // 0xa4
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0xa8
        int32_t CallFunc_FTrunc_ReturnValue; // 0xac
        float CallFunc_Calculate_VendorBuySellModifier_CostModifier; // 0xb0
        float CallFunc_Calculate_VendorBuySellModifier_CostModifier_1; // 0xb4
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0xb8
    }; // Size: 0xb9
    Params_CalculateAdjustedSellBuyCost params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    params.AdjustedCost = (int32_t)AdjustedCost;
    params.Modifier = (float)Modifier;
    params.ItemValue = (int32_t)ItemValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Divide_IntInt_ReturnValue = (int32_t)CallFunc_Divide_IntInt_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_Calculate_VendorBuySellModifier_CostModifier = (float)CallFunc_Calculate_VendorBuySellModifier_CostModifier;
    params.CallFunc_Calculate_VendorBuySellModifier_CostModifier_1 = (float)CallFunc_Calculate_VendorBuySellModifier_CostModifier_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
    AdjustedCost = params.AdjustedCost;
}
void UUI_BP_Vendor_C::AddToCumulativeTransferTotal(FName Name, FName Variation, int32_t Count, int32_t NewTotal, FInventoryResult K2Node_MakeStruct_InventoryResult, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.AddToCumulativeTransferTotal"));
    struct Params_AddToCumulativeTransferTotal {
        FName Name; // 0x0
        FName Variation; // 0x8
        int32_t Count; // 0x10
        int32_t NewTotal; // 0x14
        FInventoryResult K2Node_MakeStruct_InventoryResult; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0xa0
        int32_t Temp_int_Loop_Counter_Variable; // 0xa4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xa8
        int32_t CallFunc_Array_Add_ReturnValue; // 0xac
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xb0
        char pad_b4[0x4];
        FInventoryResult CallFunc_Array_Get_Item; // 0xb8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x140
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x144
        bool CallFunc_Less_IntInt_ReturnValue; // 0x145
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x146
        bool CallFunc_BooleanAND_ReturnValue; // 0x147
    }; // Size: 0x148
    Params_AddToCumulativeTransferTotal params{};
    params.Name = (FName)Name;
    params.Variation = (FName)Variation;
    params.Count = (int32_t)Count;
    params.NewTotal = (int32_t)NewTotal;
    params.K2Node_MakeStruct_InventoryResult = (FInventoryResult)K2Node_MakeStruct_InventoryResult;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::UpdateCost(FInventoryResult InvResult, int32_t PlayerMoney, int32_t AdjustedCost, int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_GetMoney_Money) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.UpdateCost"));
    struct Params_UpdateCost {
        FInventoryResult InvResult; // 0x0
        int32_t PlayerMoney; // 0x88
        int32_t AdjustedCost; // 0x8c
        int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost; // 0x90
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x94
        char pad_95[0x3];
        int32_t CallFunc_GetMoney_Money; // 0x98
    }; // Size: 0x9c
    Params_UpdateCost params{};
    params.InvResult = (FInventoryResult)InvResult;
    params.PlayerMoney = (int32_t)PlayerMoney;
    params.AdjustedCost = (int32_t)AdjustedCost;
    params.CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost = (int32_t)CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GetMoney_Money = (int32_t)CallFunc_GetMoney_Money;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Icon_Button_Released(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Icon Button Released"));
    struct Params_Icon_Button_Released {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_Icon_Button_Released params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::IconButton_Hover(UIconButtonWidget* Button, bool IsBuying, ESlateVisibility Temp_byte_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, bool CallFunc_IsGear_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.IconButton_Hover"));
    struct Params_IconButton_Hover {
        UIconButtonWidget* Button; // 0x0
        bool IsBuying; // 0x8
        ESlateVisibility Temp_byte_Variable; // 0x9
        char pad_a[0x6];
        UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        ESlateVisibility Temp_byte_Variable_1; // 0x19
        bool Temp_bool_Variable; // 0x1a
        ESlateVisibility Temp_byte_Variable_2; // 0x1b
        ESlateVisibility Temp_byte_Variable_3; // 0x1c
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1d
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1e
        char pad_1f[0x1];
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x20
        bool CallFunc_IsGear_ReturnValue; // 0x34
        char pad_35[0x3];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x38
        bool CallFunc_GetGearItem_ReturnValue; // 0x90
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x91
        bool CallFunc_BooleanAND_ReturnValue; // 0x92
        bool Temp_bool_Variable_1; // 0x93
        bool CallFunc_BooleanOR_ReturnValue; // 0x94
        ESlateVisibility K2Node_Select_Default; // 0x95
        ESlateVisibility K2Node_Select_Default_1; // 0x96
        char pad_97[0x1];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_IconButton_Hover params{};
    params.Button = (UIconButtonWidget*)Button;
    params.IsBuying = (bool)IsBuying;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button = (UUI_BP_InventoryIconButton_C*)K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::CreateVendorImportantItemGroup(FString VendorCategory, TArray<FInventoryResult>& VendorInventory, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FUnavailableIconInfo> TempUnavailableItems, TArray<FInventoryResult> TempRegularItems, TArray<FInventoryResult> TempPriorityItems, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_IsPriorityMissionItem_IsPriority, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInventoryResult CallFunc_Array_Get_Item_1, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CreateVendorImportantItemGroup"));
    struct Params_CreateVendorImportantItemGroup {
        FString VendorCategory; // 0x0
        TArray<FInventoryResult> VendorInventory; // 0x10
        bool Created; // 0x20
        char pad_21[0x7];
        UUI_BP_Vendor_ItemGroup_C* ItemGroup; // 0x28
        UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget; // 0x30
        TArray<FUnavailableIconInfo> TempUnavailableItems; // 0x38
        TArray<FInventoryResult> TempRegularItems; // 0x48
        TArray<FInventoryResult> TempPriorityItems; // 0x58
        int32_t Temp_int_Loop_Counter_Variable; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue; // 0x6c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x70
        bool CallFunc_Less_IntInt_ReturnValue; // 0x74
        char pad_75[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x78
        char pad_7c[0x4];
        FInventoryResult CallFunc_Array_Get_Item; // 0x80
        bool CallFunc_IsPriorityMissionItem_IsPriority; // 0x108
        char pad_109[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x10c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x110
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x114
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x118
        char pad_119[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x120
        UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue; // 0x128
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x130
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x134
        char pad_135[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x138
        int32_t Temp_int_Array_Index_Variable_1; // 0x13c
        FInventoryResult CallFunc_Array_Get_Item_1; // 0x140
        UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button; // 0x1c8
    }; // Size: 0x1d0
    Params_CreateVendorImportantItemGroup params{};
    params.VendorCategory = (FString)VendorCategory;
    params.VendorInventory = (TArray<FInventoryResult>)VendorInventory;
    params.Created = (bool)Created;
    params.ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)ItemGroup;
    params.TempItemGroupWidget = (UUI_BP_Vendor_ItemGroup_C*)TempItemGroupWidget;
    params.TempUnavailableItems = (TArray<FUnavailableIconInfo>)TempUnavailableItems;
    params.TempRegularItems = (TArray<FInventoryResult>)TempRegularItems;
    params.TempPriorityItems = (TArray<FInventoryResult>)TempPriorityItems;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_IsPriorityMissionItem_IsPriority = (bool)CallFunc_IsPriorityMissionItem_IsPriority;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (FInventoryResult)CallFunc_Array_Get_Item_1;
    params.CallFunc_CreateVendorItemButton_Button = (UUI_BP_InventoryIconButton_C*)CallFunc_CreateVendorItemButton_Button;
    ProcessEvent(func, &params);
    Created = params.Created;
    VendorInventory = params.VendorInventory;
    ItemGroup = params.ItemGroup;
}
void UUI_BP_Vendor_C::CreatePlayerItemButton(FInventoryResult InventoryResult, UUI_BP_InventoryIconButton_C*& Button, UUI_BP_InventoryIconButton_C* TempInventoryButton) {}
void UUI_BP_Vendor_C::CreateVendorItemButton(FInventoryResult InventoryResult, float Cost_Modifier, bool IsTutorialHighlighted, bool IsAvailable, FUnavailableIconInfo UnavailableInfo, bool SpecialMissionItem, UUI_BP_InventoryIconButton_C*& Button, UUI_BP_InventoryIconButton_C* TempInventoryButton, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_IsGear_ReturnValue) {}
void UUI_BP_Vendor_C::RefreshVendorInventory(TArray<FName> TempTutorialHighlights, TArray<FUnavailableIconInfo> TempVendorUnavailableInventory, TArray<FInventoryResult> TempVendorInventory, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CreateVendorImportantItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorImportantItemGroup_ItemGroup, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UVendorManager* CallFunc_Get_ReturnValue, TArray<FUnavailableIconInfo>& CallFunc_GetUnavailableVendorItems_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_CreateVendorItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorItemGroup_ItemGroup, bool CallFunc_Less_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, TArray<FInventoryResult>& CallFunc_GetCharacterInventory_Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.RefreshVendorInventory"));
    struct Params_RefreshVendorInventory {
        TArray<FName> TempTutorialHighlights; // 0x0
        TArray<FUnavailableIconInfo> TempVendorUnavailableInventory; // 0x10
        TArray<FInventoryResult> TempVendorInventory; // 0x20
        int32_t Temp_int_Array_Index_Variable; // 0x30
        int32_t Temp_int_Loop_Counter_Variable; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x38
        bool CallFunc_CreateVendorImportantItemGroup_Created; // 0x3c
        char pad_3d[0x3];
        UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorImportantItemGroup_ItemGroup; // 0x40
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x48
        int32_t CallFunc_Array_Add_ReturnValue; // 0x50
        char pad_54[0x4];
        UVendorManager* CallFunc_Get_ReturnValue; // 0x58
        TArray<FUnavailableIconInfo> CallFunc_GetUnavailableVendorItems_ReturnValue; // 0x60
        FString CallFunc_Array_Get_Item; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue; // 0x80
        bool CallFunc_CreateVendorItemGroup_Created; // 0x84
        char pad_85[0x3];
        UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorItemGroup_ItemGroup; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue; // 0x90
        char pad_91[0x7];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1; // 0x98
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xa0
        char pad_a4[0x4];
        TArray<FInventoryResult> CallFunc_GetCharacterInventory_Inventory; // 0xa8
    }; // Size: 0xb8
    Params_RefreshVendorInventory params{};
    params.TempTutorialHighlights = (TArray<FName>)TempTutorialHighlights;
    params.TempVendorUnavailableInventory = (TArray<FUnavailableIconInfo>)TempVendorUnavailableInventory;
    params.TempVendorInventory = (TArray<FInventoryResult>)TempVendorInventory;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_CreateVendorImportantItemGroup_Created = (bool)CallFunc_CreateVendorImportantItemGroup_Created;
    params.CallFunc_CreateVendorImportantItemGroup_ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_CreateVendorImportantItemGroup_ItemGroup;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UVendorManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetUnavailableVendorItems_ReturnValue = (TArray<FUnavailableIconInfo>)CallFunc_GetUnavailableVendorItems_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_CreateVendorItemGroup_Created = (bool)CallFunc_CreateVendorItemGroup_Created;
    params.CallFunc_CreateVendorItemGroup_ItemGroup = (UUI_BP_Vendor_ItemGroup_C*)CallFunc_CreateVendorItemGroup_ItemGroup;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_AddChildToVerticalBox_ReturnValue_1 = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_GetCharacterInventory_Inventory = (TArray<FInventoryResult>)CallFunc_GetCharacterInventory_Inventory;
    ProcessEvent(func, &params);
    CallFunc_GetUnavailableVendorItems_ReturnValue = params.CallFunc_GetUnavailableVendorItems_ReturnValue;
    CallFunc_GetCharacterInventory_Inventory = params.CallFunc_GetCharacterInventory_Inventory;
}
void UUI_BP_Vendor_C::Finished_2A89DBBA44E746A9DCB98DB457DDB514() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Finished_2A89DBBA44E746A9DCB98DB457DDB514"));
    struct Params_Finished_2A89DBBA44E746A9DCB98DB457DDB514 {
    }; // Size: 0x0
    Params_Finished_2A89DBBA44E746A9DCB98DB457DDB514 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnItemSold__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnItemSold__DelegateSignature"));
    struct Params_OnItemSold__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemSold__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::CollapseItemDetails() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.CollapseItemDetails"));
    struct Params_CollapseItemDetails {
    }; // Size: 0x0
    Params_CollapseItemDetails params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent_ItemFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_ItemFadeOut"));
    struct Params_SequenceEvent_ItemFadeOut {
    }; // Size: 0x0
    Params_SequenceEvent_ItemFadeOut params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::InitVendor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.InitVendor"));
    struct Params_InitVendor {
    }; // Size: 0x0
    Params_InitVendor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent_SmokeFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_SmokeFadeOut"));
    struct Params_SequenceEvent_SmokeFadeOut {
    }; // Size: 0x0
    Params_SequenceEvent_SmokeFadeOut params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnVendorBroomPreviewClassLoaded(FName BroomID, UClass* ActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnVendorBroomPreviewClassLoaded"));
    struct Params_OnVendorBroomPreviewClassLoaded {
        FName BroomID; // 0x0
        UClass* ActorClass; // 0x8
    }; // Size: 0x10
    Params_OnVendorBroomPreviewClassLoaded params{};
    params.BroomID = (FName)BroomID;
    params.ActorClass = (UClass*)ActorClass;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::SequenceEvent_SmokeFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.SequenceEvent_SmokeFadeIn"));
    struct Params_SequenceEvent_SmokeFadeIn {
    }; // Size: 0x0
    Params_SequenceEvent_SmokeFadeIn params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature {
        bool HoldWasComplete; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature params{};
    params.HoldWasComplete = (bool)HoldWasComplete;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature {
        bool HoldWasComplete; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature params{};
    params.HoldWasComplete = (bool)HoldWasComplete;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::GearTutorialRefreshAllInventories(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.GearTutorialRefreshAllInventories"));
    struct Params_GearTutorialRefreshAllInventories {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_GearTutorialRefreshAllInventories params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::ExecuteUbergraph_UI_BP_Vendor(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue) {}
void UUI_BP_Vendor_C::OnItemPurchaseFailedNoSpace__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchaseFailedNoSpace__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoSpace__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoSpace__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnItemPurchaseFailedNoMoney__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchaseFailedNoMoney__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoMoney__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoMoney__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::OnItemPurchased__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.OnItemPurchased__DelegateSignature"));
    struct Params_OnItemPurchased__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchased__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::LeavePreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.LeavePreview__DelegateSignature"));
    struct Params_LeavePreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_LeavePreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_C::StartPreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor.UI_BP_Vendor_C.StartPreview__DelegateSignature"));
    struct Params_StartPreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_StartPreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
