#include "EColorVisionDeficiency.hpp"
#include "ESlateVisibility.hpp"
#include "FMenuReaderVoice.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UTabPageWidget.hpp"
#include "UUI_BP_AudioLegendPopup_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_SettingsCheckboxButton_C.hpp"
#include "UUI_BP_SettingsDetails_C.hpp"
#include "UUI_BP_SettingsDropDownButton_C.hpp"
#include "UUI_BP_SettingsSliderButton_C.hpp"
#include "UUI_BP_Settings_Accessibility_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Settings_Accessibility_C* UUI_BP_Settings_Accessibility_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C");
    return (UUI_BP_Settings_Accessibility_C*)res;
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_42_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_42_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_42_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_42_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_Settings_Accessibility_C::InitAccessibilitySettings(float CallFunc_Subtract_FloatFloat_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetAccessibilitySpellToggle_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, EColorVisionDeficiency Temp_byte_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<FString>& K2Node_MakeArray_Array, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, bool CallFunc_GetGamepadAimingSwitch_ReturnValue, float CallFunc_GetMenuReaderVolume_ReturnValue, bool CallFunc_GetMenuReaderEnabled_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32_t CallFunc_FFloor_ReturnValue) {}
TArray<FString> UUI_BP_Settings_Accessibility_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
        bool K2Node_SwitchInteger_CmpSuccess; // 0x48
    }; // Size: 0x49
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_Settings_Accessibility_C::RefreshMenuReaderRelatedSettings(TArray<FString> TempMenuReaderVoiceDescriptions, int32_t TempSelectedMenuReaderVoiceIndex, FMenuReaderVoice TempSelectedMenuReaderVoice, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_Settings_Accessibility_C::SetIsInFirstFlow(bool InFirstFlow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.SetIsInFirstFlow"));
    struct Params_SetIsInFirstFlow {
        bool InFirstFlow; // 0x0
    }; // Size: 0x1
    Params_SetIsInFirstFlow params{};
    params.InFirstFlow = (bool)InFirstFlow;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::HideTooltip(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.HideTooltip"));
    struct Params_HideTooltip {
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideTooltip params{};
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::SetTooltipData(FString Title, FString Description, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.SetTooltipData"));
    struct Params_SetTooltipData {
        FString Title; // 0x0
        FString Description; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetTooltipData params{};
    params.Title = (FString)Title;
    params.Description = (FString)Description;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_66_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_66_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_66_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_66_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_35_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_35_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_35_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_35_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_5_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_5_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_5_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_5_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_48_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_48_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_48_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_48_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_4_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_4_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_4_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_4_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_62_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_62_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_62_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_62_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_16_DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_16_DropDownOptionChanged__DelegateSignature"));
    struct Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_16_DropDownOptionChanged__DelegateSignature {
        int32_t NewOptionIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_SettingsDropDownButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_16_DropDownOptionChanged__DelegateSignature params{};
    params.NewOptionIndex = (int32_t)NewOptionIndex;
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_7_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_7_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_7_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_7_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_17_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_17_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_17_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_17_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_19_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_19_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_19_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_19_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_52_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_52_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_52_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_52_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_32_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_32_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_32_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_32_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_20_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_20_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_20_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_20_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_0_DropdownHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_0_DropdownHovered__DelegateSignature"));
    struct Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_0_DropdownHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_0_DropdownHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_1_DropdownUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_1_DropdownUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_1_DropdownUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__btn_colorOptions_K2Node_ComponentBoundEvent_1_DropdownUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_36_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_36_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_36_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_36_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_8_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_8_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_8_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_8_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_3_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_3_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_3_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cameraShake_K2Node_ComponentBoundEvent_3_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_21_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_21_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_21_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_21_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_6_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_6_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_6_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cinematicCameraShake_K2Node_ComponentBoundEvent_6_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_13_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_13_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_13_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_13_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_9_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_9_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_9_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_aimMode_K2Node_ComponentBoundEvent_9_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_10_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_10_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_10_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_switchSticks_K2Node_ComponentBoundEvent_10_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ToggleAimMode__DelegateSignature(bool IsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ToggleAimMode__DelegateSignature"));
    struct Params_ToggleAimMode__DelegateSignature {
        bool IsChecked; // 0x0
    }; // Size: 0x1
    Params_ToggleAimMode__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_11_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_11_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_11_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_11_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_34_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_34_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_34_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_34_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_12_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_12_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_12_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_12_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_14_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_14_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_14_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_southpaw_K2Node_ComponentBoundEvent_14_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_15_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_15_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_15_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_deadzone_K2Node_ComponentBoundEvent_15_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_46_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_46_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_46_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_46_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_33_DropdownOpened__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_33_DropdownOpened__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_33_DropdownOpened__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_33_DropdownOpened__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_18_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_18_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_18_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_18_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_30_DropdownUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_30_DropdownUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_30_DropdownUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_30_DropdownUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_23_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_23_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_23_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__btn_cursorSensitivity_K2Node_ComponentBoundEvent_23_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__btn_AudioVisualizer_K2Node_ComponentBoundEvent_24_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__btn_AudioVisualizer_K2Node_ComponentBoundEvent_24_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__btn_AudioVisualizer_K2Node_ComponentBoundEvent_24_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__btn_AudioVisualizer_K2Node_ComponentBoundEvent_24_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__drp_FontSize_K2Node_ComponentBoundEvent_26_DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__drp_FontSize_K2Node_ComponentBoundEvent_26_DropDownOptionChanged__DelegateSignature"));
    struct Params_BndEvt__drp_FontSize_K2Node_ComponentBoundEvent_26_DropDownOptionChanged__DelegateSignature {
        int32_t NewOptionIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_SettingsDropDownButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__drp_FontSize_K2Node_ComponentBoundEvent_26_DropDownOptionChanged__DelegateSignature params{};
    params.NewOptionIndex = (int32_t)NewOptionIndex;
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_27_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_27_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_27_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_27_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_40_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_40_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_40_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_40_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_28_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_28_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_28_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioVisualizer_K2Node_ComponentBoundEvent_28_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_29_DropdownHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_29_DropdownHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_29_DropdownHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_29_DropdownHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_37_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_37_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_37_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_PathLine_K2Node_ComponentBoundEvent_37_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_53_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_53_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_53_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_53_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_41_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_41_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_41_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_41_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_44_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_44_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_44_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_44_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_55_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_55_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_55_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_55_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::OnMenuReaderSettingToggled__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.OnMenuReaderSettingToggled__DelegateSignature"));
    struct Params_OnMenuReaderSettingToggled__DelegateSignature {
    }; // Size: 0x0
    Params_OnMenuReaderSettingToggled__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_45_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_45_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_45_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_TextHighContrast_K2Node_ComponentBoundEvent_45_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_43_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_43_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_43_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_deadzone_K2Node_ComponentBoundEvent_43_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_47_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_47_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_47_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_47_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_49_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_49_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_49_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_GameHighContrast_K2Node_ComponentBoundEvent_49_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_31_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_31_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_31_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_31_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_25_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_25_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_25_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_25_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_cameraShake_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_50_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_50_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_50_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_50_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_51_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_51_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_51_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_51_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ResetAccessibilitySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ResetAccessibilitySettings"));
    struct Params_ResetAccessibilitySettings {
    }; // Size: 0x0
    Params_ResetAccessibilitySettings params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_cursorSensitivity_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_54_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_54_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_54_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MiniMapOpacity_K2Node_ComponentBoundEvent_54_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_56_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_56_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_56_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueOpacity_K2Node_ComponentBoundEvent_56_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_57_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_57_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_57_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueScale_K2Node_ComponentBoundEvent_57_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_58_DropDownOptionHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button, FString HoveredItemString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_58_DropDownOptionHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_58_DropDownOptionHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
        FString HoveredItemString; // 0x8
    }; // Size: 0x18
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_58_DropDownOptionHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    params.HoveredItemString = (FString)HoveredItemString;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_60_DropDownOptionHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button, FString HoveredItemString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_60_DropDownOptionHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_60_DropDownOptionHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
        FString HoveredItemString; // 0x8
    }; // Size: 0x18
    Params_BndEvt__UI_BP_Settings_Accessibility_drp_FontSize_K2Node_ComponentBoundEvent_60_DropDownOptionHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    params.HoveredItemString = (FString)HoveredItemString;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_61_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_61_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_61_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_61_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_63_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_63_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_63_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_AudioCueLegend_K2Node_ComponentBoundEvent_63_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_61_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_61_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_61_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_61_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_64_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_64_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_64_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReader_K2Node_ComponentBoundEvent_64_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_67_DropdownHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_67_DropdownHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_67_DropdownHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_67_DropdownHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_68_DropdownUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_68_DropdownUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_68_DropdownUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_68_DropdownUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_77_DropdownOpened__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_77_DropdownOpened__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_77_DropdownOpened__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_colorOptions_K2Node_ComponentBoundEvent_77_DropdownOpened__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_69_DropDownOptionChanged__DelegateSignature(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_69_DropDownOptionChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_69_DropDownOptionChanged__DelegateSignature {
        int32_t NewOptionIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_SettingsDropDownButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_69_DropDownOptionChanged__DelegateSignature params{};
    params.NewOptionIndex = (int32_t)NewOptionIndex;
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_70_DropDownOptionHovered__DelegateSignature(UUI_BP_SettingsDropDownButton_C* Button, FString HoveredItemString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_70_DropDownOptionHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_70_DropDownOptionHovered__DelegateSignature {
        UUI_BP_SettingsDropDownButton_C* Button; // 0x0
        FString HoveredItemString; // 0x8
    }; // Size: 0x18
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_70_DropDownOptionHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    params.HoveredItemString = (FString)HoveredItemString;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_71_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_71_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_71_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_71_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_72_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_72_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_72_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_72_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_73_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_73_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_73_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_73_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_74_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_74_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_74_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVolume_K2Node_ComponentBoundEvent_74_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::OnLegendItemHoldEnd0(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.OnLegendItemHoldEnd"));
    struct Params_OnLegendItemHoldEnd {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldEnd params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_AudioCueHelpPage_K2Node_ComponentBoundEvent_75_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_AudioCueHelpPage_K2Node_ComponentBoundEvent_75_OnVisibilityChangedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_AudioCueHelpPage_K2Node_ComponentBoundEvent_75_OnVisibilityChangedEvent__DelegateSignature {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_Settings_Accessibility_AudioCueHelpPage_K2Node_ComponentBoundEvent_75_OnVisibilityChangedEvent__DelegateSignature params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_76_DropdownOpened__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_76_DropdownOpened__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_76_DropdownOpened__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_MenuReaderVoice_K2Node_ComponentBoundEvent_76_DropdownOpened__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_79_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_79_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_79_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_79_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ExecuteUbergraph_UI_BP_Settings_Accessibility(int32_t EntryPoint, UUI_BP_SettingsCheckboxButton_C* K2Node_ComponentBoundEvent_Button, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, UUI_BP_SettingsCheckboxButton_C* K2Node_ComponentBoundEvent_Button_17, UUI_BP_SettingsCheckboxButton_C* K2Node_ComponentBoundEvent_Button_18, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_19, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_18, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_17, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_16, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_15, float K2Node_ComponentBoundEvent_EndValue_6, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_14, float K2Node_ComponentBoundEvent_EndValue_5) {}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_81_ToggleUnhovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_81_ToggleUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_81_ToggleUnhovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_81_ToggleUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_80_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_80_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_80_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_spellCastMode_K2Node_ComponentBoundEvent_80_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_38_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_38_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_38_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_38_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_39_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_39_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_39_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Accessibility_btn_Arachnophobia_K2Node_ComponentBoundEvent_39_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::CursorSensitivityChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.CursorSensitivityChanged__DelegateSignature"));
    struct Params_CursorSensitivityChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_CursorSensitivityChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::CameraDeadzoneChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.CameraDeadzoneChanged__DelegateSignature"));
    struct Params_CameraDeadzoneChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_CameraDeadzoneChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ToggleSouthpawControls__DelegateSignature(bool IsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ToggleSouthpawControls__DelegateSignature"));
    struct Params_ToggleSouthpawControls__DelegateSignature {
        bool IsChecked; // 0x0
    }; // Size: 0x1
    Params_ToggleSouthpawControls__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ToggleSwitchInputSticks__DelegateSignature(bool IsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ToggleSwitchInputSticks__DelegateSignature"));
    struct Params_ToggleSwitchInputSticks__DelegateSignature {
        bool IsChecked; // 0x0
    }; // Size: 0x1
    Params_ToggleSwitchInputSticks__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ToggleTrackCurrentTarget__DelegateSignature(bool IsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ToggleTrackCurrentTarget__DelegateSignature"));
    struct Params_ToggleTrackCurrentTarget__DelegateSignature {
        bool IsChecked; // 0x0
    }; // Size: 0x1
    Params_ToggleTrackCurrentTarget__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ColorOptionsChanged__DelegateSignature(int32_t SelectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ColorOptionsChanged__DelegateSignature"));
    struct Params_ColorOptionsChanged__DelegateSignature {
        int32_t SelectionIndex; // 0x0
    }; // Size: 0x4
    Params_ColorOptionsChanged__DelegateSignature params{};
    params.SelectionIndex = (int32_t)SelectionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::ToggleCinematicCameraShake__DelegateSignature(bool IsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.ToggleCinematicCameraShake__DelegateSignature"));
    struct Params_ToggleCinematicCameraShake__DelegateSignature {
        bool IsChecked; // 0x0
    }; // Size: 0x1
    Params_ToggleCinematicCameraShake__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Accessibility_C::CameraShakeChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Accessibility.UI_BP_Settings_Accessibility_C.CameraShakeChanged__DelegateSignature"));
    struct Params_CameraShakeChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_CameraShakeChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
