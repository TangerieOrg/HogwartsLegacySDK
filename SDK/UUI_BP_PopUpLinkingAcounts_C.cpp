#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_LoadDoor_C.hpp"
#include "UUI_BP_PopUpLinkingAcounts_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_PopUpLinkingAcounts_C* UUI_BP_PopUpLinkingAcounts_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C");
    return (UUI_BP_PopUpLinkingAcounts_C*)res;
}
void UUI_BP_PopUpLinkingAcounts_C::HidePopup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.HidePopup"));
    struct Params_HidePopup {
    }; // Size: 0x0
    Params_HidePopup params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::UpdateUnlinkData(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {}
void UUI_BP_PopUpLinkingAcounts_C::ShowLinkPopup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ShowLinkPopup"));
    struct Params_ShowLinkPopup {
    }; // Size: 0x0
    Params_ShowLinkPopup params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::ShowPopup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ShowPopup"));
    struct Params_ShowPopup {
    }; // Size: 0x0
    Params_ShowPopup params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::UpdatePopupData(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {}
void UUI_BP_PopUpLinkingAcounts_C::ResetToDefaultState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ResetToDefaultState"));
    struct Params_ResetToDefaultState {
    }; // Size: 0x0
    Params_ResetToDefaultState params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_PopUpLinkingAcounts_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1) {}
void UUI_BP_PopUpLinkingAcounts_C::BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PopUpLinkingAcounts_C::ExecuteUbergraph_UI_BP_PopUpLinkingAcounts(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CopyToClipboard_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PopUpLinkingAcounts.UI_BP_PopUpLinkingAcounts_C.ExecuteUbergraph_UI_BP_PopUpLinkingAcounts"));
    struct Params_ExecuteUbergraph_UI_BP_PopUpLinkingAcounts {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x10
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x38
        bool CallFunc_CanLaunchURL_ReturnValue; // 0x60
        bool CallFunc_CopyToClipboard_ReturnValue; // 0x61
    }; // Size: 0x62
    Params_ExecuteUbergraph_UI_BP_PopUpLinkingAcounts params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    params.CallFunc_CanLaunchURL_ReturnValue = (bool)CallFunc_CanLaunchURL_ReturnValue;
    params.CallFunc_CopyToClipboard_ReturnValue = (bool)CallFunc_CopyToClipboard_ReturnValue;
    ProcessEvent(func, &params);
}
