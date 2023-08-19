#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FDateTime.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UScaleBox.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_LoadDoor_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_PopUpLinkingAcounts_C.hpp"
#include "UUI_BP_WbGamesSignin_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
UUI_BP_WbGamesSignin_C* UUI_BP_WbGamesSignin_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C");
    return (UUI_BP_WbGamesSignin_C*)res;
}
void UUI_BP_WbGamesSignin_C::WBPNLinkStatusChanged(UObject* Caller, int32_t Response) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNLinkStatusChanged"));
    struct Params_WBPNLinkStatusChanged {
        UObject* Caller; // 0x0
        int32_t Response; // 0x8
    }; // Size: 0xc
    Params_WBPNLinkStatusChanged params{};
    params.Caller = (UObject*)Caller;
    params.Response = (int32_t)Response;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::UpdateForSettingsMenu(UUIOnlineManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.UpdateForSettingsMenu"));
    struct Params_UpdateForSettingsMenu {
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UpdateForSettingsMenu params{};
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        float K2Node_MathExpression_ReturnValue; // 0x30
        char pad_34[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x38
        FMargin K2Node_MakeStruct_Margin_2; // 0x40
        FMargin K2Node_MakeStruct_Margin_3; // 0x50
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x60
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x68
        char pad_69[0x3];
        float K2Node_MathExpression_ReturnValue_1; // 0x6c
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x70
        float CallFunc_BreakVector2D_X; // 0x78
        float CallFunc_BreakVector2D_Y; // 0x7c
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x80
    }; // Size: 0x84
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_WbGamesSignin_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {}
void UUI_BP_WbGamesSignin_C::PopulateWWData() {}
void UUI_BP_WbGamesSignin_C::ToggleLinkingPopup(bool ShowPopup, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ToggleLinkingPopup"));
    struct Params_ToggleLinkingPopup {
        bool ShowPopup; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x18
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x20
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x30
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0x60
    }; // Size: 0x70
    Params_ToggleLinkingPopup params{};
    params.ShowPopup = (bool)ShowPopup;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::DisplayNextRewardNotification(bool FirstCall) {}
void UUI_BP_WbGamesSignin_C::DebugLogWBSigninResponse(int32_t ResponseVal, FDateTime CallFunc_Now_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue) {}
void UUI_BP_WbGamesSignin_C::RefreshSignInCodes(UUIOnlineManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.RefreshSignInCodes"));
    struct Params_RefreshSignInCodes {
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_RefreshSignInCodes params{};
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_WbGamesSignin_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        ESlateVisibility CallFunc_GetVisibility_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xd
    }; // Size: 0xe
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetVisibility_ReturnValue = (ESlateVisibility)CallFunc_GetVisibility_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_WbGamesSignin_C::PopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.PopupDismissed"));
    struct Params_PopupDismissed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupDismissed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::WBPNDeviceCodeExpired(UObject* Caller, int32_t Response) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNDeviceCodeExpired"));
    struct Params_WBPNDeviceCodeExpired {
        UObject* Caller; // 0x0
        int32_t Response; // 0x8
    }; // Size: 0xc
    Params_WBPNDeviceCodeExpired params{};
    params.Caller = (UObject*)Caller;
    params.Response = (int32_t)Response;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::RetryConnectionFailed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.RetryConnectionFailed"));
    struct Params_RetryConnectionFailed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RetryConnectionFailed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::WBPNDeviceFlowResponse(UObject* Caller, int32_t Response) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBPNDeviceFlowResponse"));
    struct Params_WBPNDeviceFlowResponse {
        UObject* Caller; // 0x0
        int32_t Response; // 0x8
    }; // Size: 0xc
    Params_WBPNDeviceFlowResponse params{};
    params.Caller = (UObject*)Caller;
    params.Response = (int32_t)Response;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::OnRewardNotificationClosed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.OnRewardNotificationClosed"));
    struct Params_OnRewardNotificationClosed {
    }; // Size: 0x0
    Params_OnRewardNotificationClosed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::ExecuteUbergraph_UI_BP_WbGamesSignin(int32_t EntryPoint) {}
void UUI_BP_WbGamesSignin_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::PopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.PopupClosed"));
    struct Params_PopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::WBUnlinkFlow__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBUnlinkFlow__DelegateSignature"));
    struct Params_WBUnlinkFlow__DelegateSignature {
    }; // Size: 0x0
    Params_WBUnlinkFlow__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::ShowingRewards__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.ShowingRewards__DelegateSignature"));
    struct Params_ShowingRewards__DelegateSignature {
    }; // Size: 0x0
    Params_ShowingRewards__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_WbGamesSignin_C::WBSignInContinue__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_WbGamesSignin.UI_BP_WbGamesSignin_C.WBSignInContinue__DelegateSignature"));
    struct Params_WBSignInContinue__DelegateSignature {
    }; // Size: 0x0
    Params_WBSignInContinue__DelegateSignature params{};
    ProcessEvent(func, &params);
}
