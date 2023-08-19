#include "FFloatRange.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_SettingsSliderButton_C.hpp"
#include "UUI_BP_Settings_HDRCalibration_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Settings_HDRCalibration_C* UUI_BP_Settings_HDRCalibration_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C");
    return (UUI_BP_Settings_HDRCalibration_C*)res;
}
TArray<FString> UUI_BP_Settings_HDRCalibration_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_Settings_HDRCalibration_C::Resolve_Slider_Value(float InValue, FFloatRange Range, float Exponent, bool [Min__Max]____[0__1], float& Out, float CallFunc_FClamp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Resolve Slider Value"));
    struct Params_Resolve_Slider_Value {
        float InValue; // 0x0
        FFloatRange Range; // 0x4
        float Exponent; // 0x14
        bool [Min__Max]____[0__1]; // 0x18
        char pad_19[0x3];
        float Out; // 0x1c
        float CallFunc_FClamp_ReturnValue; // 0x20
        float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue; // 0x24
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x28
        float CallFunc_MapRangeClamped_ReturnValue; // 0x2c
        float CallFunc_Lerp_ReturnValue; // 0x30
        float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x34
    }; // Size: 0x38
    Params_Resolve_Slider_Value params{};
    params.InValue = (float)InValue;
    params.Range = (FFloatRange)Range;
    params.Exponent = (float)Exponent;
    params.[Min__Max]____[0__1] = (bool)[Min__Max]____[0__1];
    params.Out = (float)Out;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = (float)CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    params.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = (float)CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
    Out = params.Out;
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::SetPostProcessVolume(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.SetPostProcessVolume"));
    struct Params_SetPostProcessVolume {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetPostProcessVolume params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::UpdateUI(int32_t CallFunc_FCeil_ReturnValue) {}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::UpdateGameSettings(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_SetHDRToneMapParameters_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.UpdateGameSettings"));
    struct Params_UpdateGameSettings {
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x0
        bool CallFunc_SetHDRToneMapParameters_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UpdateGameSettings params{};
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_SetHDRToneMapParameters_ReturnValue = (bool)CallFunc_SetHDRToneMapParameters_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::Get_Normalized_Slider_Value(float InValue, FFloatRange Range, float Exponent, float& Out, float K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Get Normalized Slider Value"));
    struct Params_Get_Normalized_Slider_Value {
        float InValue; // 0x0
        FFloatRange Range; // 0x4
        float Exponent; // 0x14
        float Out; // 0x18
        float K2Node_MathExpression_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_Get_Normalized_Slider_Value params{};
    params.InValue = (float)InValue;
    params.Range = (FFloatRange)Range;
    params.Exponent = (float)Exponent;
    params.Out = (float)Out;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
    Out = params.Out;
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::SetGetCVAR(FString Name, float NewValue, bool Set, float& OutValue, float CallFunc_GetConsoleVariableAsFloat_Value, bool CallFunc_GetConsoleVariableAsFloat_bExists, bool CallFunc_SetConsoleVariableAsFloat_bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.SetGetCVAR"));
    struct Params_SetGetCVAR {
        FString Name; // 0x0
        float NewValue; // 0x10
        bool Set; // 0x14
        char pad_15[0x3];
        float OutValue; // 0x18
        float CallFunc_GetConsoleVariableAsFloat_Value; // 0x1c
        bool CallFunc_GetConsoleVariableAsFloat_bExists; // 0x20
        bool CallFunc_SetConsoleVariableAsFloat_bExists; // 0x21
    }; // Size: 0x22
    Params_SetGetCVAR params{};
    params.Name = (FString)Name;
    params.NewValue = (float)NewValue;
    params.Set = (bool)Set;
    params.OutValue = (float)OutValue;
    params.CallFunc_GetConsoleVariableAsFloat_Value = (float)CallFunc_GetConsoleVariableAsFloat_Value;
    params.CallFunc_GetConsoleVariableAsFloat_bExists = (bool)CallFunc_GetConsoleVariableAsFloat_bExists;
    params.CallFunc_SetConsoleVariableAsFloat_bExists = (bool)CallFunc_SetConsoleVariableAsFloat_bExists;
    ProcessEvent(func, &params);
    OutValue = params.OutValue;
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::ShowHDRCalibrationScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ShowHDRCalibrationScreen"));
    struct Params_ShowHDRCalibrationScreen {
    }; // Size: 0x0
    Params_ShowHDRCalibrationScreen params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::HideHDRCalibrationScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.HideHDRCalibrationScreen"));
    struct Params_HideHDRCalibrationScreen {
    }; // Size: 0x0
    Params_HideHDRCalibrationScreen params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::OutroHDRAnimEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.OutroHDRAnimEvent"));
    struct Params_OutroHDRAnimEvent {
    }; // Size: 0x0
    Params_OutroHDRAnimEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::ResetCalibration() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ResetCalibration"));
    struct Params_ResetCalibration {
    }; // Size: 0x0
    Params_ResetCalibration params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_HDRCalibration_C::ExecuteUbergraph_UI_BP_Settings_HDRCalibration(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_11, float K2Node_ComponentBoundEvent_NewValue_3, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_10, float K2Node_ComponentBoundEvent_NewValue_2, float CallFunc_Resolve_Slider_Value_Out, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_9, float K2Node_ComponentBoundEvent_NewValue_1, float CallFunc_Resolve_Slider_Value_Out_1, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_8, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_Resolve_Slider_Value_Out_2, float CallFunc_Resolve_Slider_Value_Out_3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_7, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_6, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_5, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_4, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_EndValue_3, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_2, float K2Node_ComponentBoundEvent_EndValue_2, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_1, float K2Node_ComponentBoundEvent_EndValue_1, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton, float K2Node_ComponentBoundEvent_EndValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/HDR/UI_BP_Settings_HDRCalibration.UI_BP_Settings_HDRCalibration_C.ExecuteUbergraph_UI_BP_Settings_HDRCalibration"));
    struct Params_ExecuteUbergraph_UI_BP_Settings_HDRCalibration {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool Temp_bool_Has_Been_Initd_Variable; // 0x8
        char pad_9[0x7];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_11; // 0x10
        float K2Node_ComponentBoundEvent_NewValue_3; // 0x18
        char pad_1c[0x4];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_10; // 0x20
        float K2Node_ComponentBoundEvent_NewValue_2; // 0x28
        float CallFunc_Resolve_Slider_Value_Out; // 0x2c
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_9; // 0x30
        float K2Node_ComponentBoundEvent_NewValue_1; // 0x38
        float CallFunc_Resolve_Slider_Value_Out_1; // 0x3c
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_8; // 0x40
        float K2Node_ComponentBoundEvent_NewValue; // 0x48
        float CallFunc_Resolve_Slider_Value_Out_2; // 0x4c
        float CallFunc_Resolve_Slider_Value_Out_3; // 0x50
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x54
        bool Temp_bool_IsClosed_Variable; // 0x58
        char pad_59[0x7];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_7; // 0x60
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_6; // 0x68
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_5; // 0x70
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_4; // 0x78
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_3; // 0x80
        float K2Node_ComponentBoundEvent_EndValue_3; // 0x88
        char pad_8c[0x4];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_2; // 0x90
        float K2Node_ComponentBoundEvent_EndValue_2; // 0x98
        char pad_9c[0x4];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_1; // 0xa0
        float K2Node_ComponentBoundEvent_EndValue_1; // 0xa8
        char pad_ac[0x4];
        UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton; // 0xb0
        float K2Node_ComponentBoundEvent_EndValue; // 0xb8
        char pad_bc[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0xc0
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0xc8
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1; // 0xd0
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xd8
    }; // Size: 0xdc
    Params_ExecuteUbergraph_UI_BP_Settings_HDRCalibration params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.K2Node_ComponentBoundEvent_SliderButton_11 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_11;
    params.K2Node_ComponentBoundEvent_NewValue_3 = (float)K2Node_ComponentBoundEvent_NewValue_3;
    params.K2Node_ComponentBoundEvent_SliderButton_10 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_10;
    params.K2Node_ComponentBoundEvent_NewValue_2 = (float)K2Node_ComponentBoundEvent_NewValue_2;
    params.CallFunc_Resolve_Slider_Value_Out = (float)CallFunc_Resolve_Slider_Value_Out;
    params.K2Node_ComponentBoundEvent_SliderButton_9 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_9;
    params.K2Node_ComponentBoundEvent_NewValue_1 = (float)K2Node_ComponentBoundEvent_NewValue_1;
    params.CallFunc_Resolve_Slider_Value_Out_1 = (float)CallFunc_Resolve_Slider_Value_Out_1;
    params.K2Node_ComponentBoundEvent_SliderButton_8 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_8;
    params.K2Node_ComponentBoundEvent_NewValue = (float)K2Node_ComponentBoundEvent_NewValue;
    params.CallFunc_Resolve_Slider_Value_Out_2 = (float)CallFunc_Resolve_Slider_Value_Out_2;
    params.CallFunc_Resolve_Slider_Value_Out_3 = (float)CallFunc_Resolve_Slider_Value_Out_3;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.K2Node_ComponentBoundEvent_SliderButton_7 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_7;
    params.K2Node_ComponentBoundEvent_SliderButton_6 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_6;
    params.K2Node_ComponentBoundEvent_SliderButton_5 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_5;
    params.K2Node_ComponentBoundEvent_SliderButton_4 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_4;
    params.K2Node_ComponentBoundEvent_SliderButton_3 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_3;
    params.K2Node_ComponentBoundEvent_EndValue_3 = (float)K2Node_ComponentBoundEvent_EndValue_3;
    params.K2Node_ComponentBoundEvent_SliderButton_2 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_2;
    params.K2Node_ComponentBoundEvent_EndValue_2 = (float)K2Node_ComponentBoundEvent_EndValue_2;
    params.K2Node_ComponentBoundEvent_SliderButton_1 = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton_1;
    params.K2Node_ComponentBoundEvent_EndValue_1 = (float)K2Node_ComponentBoundEvent_EndValue_1;
    params.K2Node_ComponentBoundEvent_SliderButton = (UUI_BP_SettingsSliderButton_C*)K2Node_ComponentBoundEvent_SliderButton;
    params.K2Node_ComponentBoundEvent_EndValue = (float)K2Node_ComponentBoundEvent_EndValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue_1 = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
