#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_SettingsCheckboxButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SettingsCheckboxButton_C::ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleHovered__DelegateSignature"));
    struct Params_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
UUI_BP_SettingsCheckboxButton_C* UUI_BP_SettingsCheckboxButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C");
    return (UUI_BP_SettingsCheckboxButton_C*)res;
}
void UUI_BP_SettingsCheckboxButton_C::ToggleCheckmark(bool& IsChecked, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleCheckmark"));
    struct Params_ToggleCheckmark {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x30
    }; // Size: 0x58
    Params_ToggleCheckmark params{};
    params.IsChecked = (bool)IsChecked;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    ProcessEvent(func, &params);
    IsChecked = params.IsChecked;
}
TArray<FString> UUI_BP_SettingsCheckboxButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_SettingsCheckboxButton_C::SetCheckmarkState(bool IsChecked, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SetCheckmarkState"));
    struct Params_SetCheckmarkState {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x30
    }; // Size: 0x58
    Params_SetCheckmarkState params{};
    params.IsChecked = (bool)IsChecked;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::SetButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::ExecuteUbergraph_UI_BP_SettingsCheckboxButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_ToggleCheckmark_isChecked, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ExecuteUbergraph_UI_BP_SettingsCheckboxButton"));
    struct Params_ExecuteUbergraph_UI_BP_SettingsCheckboxButton {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        bool CallFunc_ToggleCheckmark_isChecked; // 0x10
        char pad_11[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_UI_BP_SettingsCheckboxButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_ToggleCheckmark_isChecked = (bool)CallFunc_ToggleCheckmark_isChecked;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.ToggleUnhovered__DelegateSignature"));
    struct Params_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsCheckboxButton_C::SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsCheckboxButton.UI_BP_SettingsCheckboxButton_C.SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
