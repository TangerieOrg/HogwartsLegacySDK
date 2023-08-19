#include "APlayerController.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UBorderSlot.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixImage.hpp"
#include "UScreen.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_AutosaveDisclaimer_C.hpp"
#include "UUI_BP_Benchmark_C.hpp"
#include "UUI_BP_EULA_C.hpp"
#include "UUI_BP_FirstFlowAccessibility_C.hpp"
#include "UUI_BP_FirstPlayCalibration_C.hpp"
#include "UUI_BP_FirstTimeFlow_C.hpp"
#include "UUI_BP_FullBackgroundSmoke_C.hpp"
#include "UUI_BP_LanguageSelect_C.hpp"
#include "UUI_BP_LogoAndLegal_C.hpp"
#include "UUI_BP_NextGenPerf_C.hpp"
#include "UUI_BP_PSO_FS_C.hpp"
#include "UUI_BP_WbGamesSignin_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_FirstTimeFlow_C::RemoveUnusedScreens(bool CallFunc_ShouldSkipLegalScreen_bHideLegalScreen, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShouldSkipPSO_ShouldSkip, bool CallFunc_IsPCPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, FString CallFunc_GetPlatformName_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_4, bool CallFunc_NotEqual_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.RemoveUnusedScreens"));
    struct Params_RemoveUnusedScreens {
        bool CallFunc_ShouldSkipLegalScreen_bHideLegalScreen; // 0x0
        char pad_1[0x7];
        FString CallFunc_GetPlatformName_ReturnValue; // 0x8
        bool CallFunc_RemoveChild_ReturnValue; // 0x18
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x19
        bool CallFunc_NotEqual_StrStr_ReturnValue_1; // 0x1a
        bool CallFunc_BooleanAND_ReturnValue; // 0x1b
        bool CallFunc_ShouldSkipPSO_ShouldSkip; // 0x1c
        bool CallFunc_IsPCPlatform_ReturnValue; // 0x1d
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1e
        bool CallFunc_RemoveChild_ReturnValue_1; // 0x1f
        bool CallFunc_RemoveChild_ReturnValue_2; // 0x20
        bool CallFunc_RemoveChild_ReturnValue_3; // 0x21
        char pad_22[0x6];
        FString CallFunc_GetPlatformName_ReturnValue_1; // 0x28
        bool CallFunc_RemoveChild_ReturnValue_4; // 0x38
        bool CallFunc_NotEqual_StrStr_ReturnValue_2; // 0x39
    }; // Size: 0x3a
    Params_RemoveUnusedScreens params{};
    params.CallFunc_ShouldSkipLegalScreen_bHideLegalScreen = (bool)CallFunc_ShouldSkipLegalScreen_bHideLegalScreen;
    params.CallFunc_GetPlatformName_ReturnValue = (FString)CallFunc_GetPlatformName_ReturnValue;
    params.CallFunc_RemoveChild_ReturnValue = (bool)CallFunc_RemoveChild_ReturnValue;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_NotEqual_StrStr_ReturnValue_1 = (bool)CallFunc_NotEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_ShouldSkipPSO_ShouldSkip = (bool)CallFunc_ShouldSkipPSO_ShouldSkip;
    params.CallFunc_IsPCPlatform_ReturnValue = (bool)CallFunc_IsPCPlatform_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_RemoveChild_ReturnValue_1 = (bool)CallFunc_RemoveChild_ReturnValue_1;
    params.CallFunc_RemoveChild_ReturnValue_2 = (bool)CallFunc_RemoveChild_ReturnValue_2;
    params.CallFunc_RemoveChild_ReturnValue_3 = (bool)CallFunc_RemoveChild_ReturnValue_3;
    params.CallFunc_GetPlatformName_ReturnValue_1 = (FString)CallFunc_GetPlatformName_ReturnValue_1;
    params.CallFunc_RemoveChild_ReturnValue_4 = (bool)CallFunc_RemoveChild_ReturnValue_4;
    params.CallFunc_NotEqual_StrStr_ReturnValue_2 = (bool)CallFunc_NotEqual_StrStr_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature(bool IsShown) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature {
        bool IsShown; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature params{};
    params.IsShown = (bool)IsShown;
    ProcessEvent(func, &params);
}
UUI_BP_FirstTimeFlow_C* UUI_BP_FirstTimeFlow_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C");
    return (UUI_BP_FirstTimeFlow_C*)res;
}
void UUI_BP_FirstTimeFlow_C::ConditionallyHandleEULA(UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleEULA"));
    struct Params_ConditionallyHandleEULA {
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ConditionallyHandleEULA params{};
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::ShouldSkipLegalScreen(bool& bHideLegalScreen, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_HasEverLaunchedGame_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ShouldSkipLegalScreen"));
    struct Params_ShouldSkipLegalScreen {
        bool bHideLegalScreen; // 0x0
        char pad_1[0x7];
        FString CallFunc_GetPlatformName_ReturnValue; // 0x8
        bool CallFunc_HasEverLaunchedGame_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_ShouldSkipLegalScreen params{};
    params.bHideLegalScreen = (bool)bHideLegalScreen;
    params.CallFunc_GetPlatformName_ReturnValue = (FString)CallFunc_GetPlatformName_ReturnValue;
    params.CallFunc_HasEverLaunchedGame_ReturnValue = (bool)CallFunc_HasEverLaunchedGame_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    bHideLegalScreen = params.bHideLegalScreen;
}
void UUI_BP_FirstTimeFlow_C::DisplayWidget(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.DisplayWidget"));
    struct Params_DisplayWidget {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
        char pad_9[0x7];
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x18
        bool CallFunc_BooleanAND_ReturnValue; // 0x19
        char pad_1a[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x20
    }; // Size: 0x28
    Params_DisplayWidget params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::ShouldSkipPSO(bool& ShouldSkip, bool CallFunc_IsPCPlatform_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetPSOProgress_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ShouldSkipPSO"));
    struct Params_ShouldSkipPSO {
        bool ShouldSkip; // 0x0
        bool CallFunc_IsPCPlatform_ReturnValue; // 0x1
        char pad_2[0x6];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
        char pad_11[0x3];
        float CallFunc_GetPSOProgress_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_ShouldSkipPSO params{};
    params.ShouldSkip = (bool)ShouldSkip;
    params.CallFunc_IsPCPlatform_ReturnValue = (bool)CallFunc_IsPCPlatform_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPSOProgress_ReturnValue = (float)CallFunc_GetPSOProgress_ReturnValue;
    ProcessEvent(func, &params);
    ShouldSkip = params.ShouldSkip;
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        float K2Node_MathExpression_ReturnValue; // 0x20
        FMargin K2Node_MakeStruct_Margin_1; // 0x24
        char pad_34[0x4];
        UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue; // 0x38
        float K2Node_MathExpression_ReturnValue_1; // 0x40
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x44
        char pad_45[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x48
        float CallFunc_BreakVector2D_X; // 0x50
        float CallFunc_BreakVector2D_Y; // 0x54
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsBorderSlot_ReturnValue = (UBorderSlot*)CallFunc_SlotAsBorderSlot_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::ConditionallyHandleFirstFlowAccessibility(UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleFirstFlowAccessibility"));
    struct Params_ConditionallyHandleFirstFlowAccessibility {
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ConditionallyHandleFirstFlowAccessibility params{};
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::ConditionallyHandleHDRScreen(bool IsShowing, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ConditionallyHandleHDRScreen"));
    struct Params_ConditionallyHandleHDRScreen {
        bool IsShowing; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ConditionallyHandleHDRScreen params{};
    params.IsShowing = (bool)IsShowing;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::SwitchToNextWidget(bool& bSuccess, UWidget* Widget, int32_t CallFunc_GetNumWidgets_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.SwitchToNextWidget"));
    struct Params_SwitchToNextWidget {
        bool bSuccess; // 0x0
        char pad_1[0x7];
        UWidget* Widget; // 0x8
        int32_t CallFunc_GetNumWidgets_ReturnValue; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SwitchToNextWidget params{};
    params.bSuccess = (bool)bSuccess;
    params.Widget = (UWidget*)Widget;
    params.CallFunc_GetNumWidgets_ReturnValue = (int32_t)CallFunc_GetNumWidgets_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UUI_BP_FirstTimeFlow_C::TriggerNext() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.TriggerNext"));
    struct Params_TriggerNext {
    }; // Size: 0x0
    Params_TriggerNext params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_3"));
    struct Params_WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_3 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature(bool WantsCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature {
        bool WantsCursor; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature params{};
    params.WantsCursor = (bool)WantsCursor;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature(bool WantsToShowCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature {
        bool WantsToShowCursor; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature params{};
    params.WantsToShowCursor = (bool)WantsToShowCursor;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::SequenceComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.SequenceComplete__DelegateSignature"));
    struct Params_SequenceComplete__DelegateSignature {
    }; // Size: 0x0
    Params_SequenceComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstTimeFlow_C::ExecuteUbergraph_UI_BP_FirstTimeFlow(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool CallFunc_IsEditor_ReturnValue, int32_t CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, int32_t CallFunc_GetAccurateRealTime_Seconds_1, float CallFunc_GetAccurateRealTime_PartialSeconds_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsHardwareBenchmarkApplied_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, bool CallFunc_SwitchToNextWidget_bSuccess, bool K2Node_ComponentBoundEvent_IsShown, float CallFunc_SelectFloat_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool K2Node_ComponentBoundEvent_WantsCursor, UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, bool K2Node_ComponentBoundEvent_WantsToShowCursor, APlayerController* CallFunc_GetPlayerController_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8, APlayerController* CallFunc_GetPlayerController_ReturnValue_4, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstTimeFlow.UI_BP_FirstTimeFlow_C.ExecuteUbergraph_UI_BP_FirstTimeFlow"));
    struct Params_ExecuteUbergraph_UI_BP_FirstTimeFlow {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x10
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x20
        char pad_21[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue_1; // 0x28
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0x30
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x31
        char pad_32[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x38
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4; // 0x41
        bool CallFunc_IsEditor_ReturnValue; // 0x42
        char pad_43[0x1];
        int32_t CallFunc_GetAccurateRealTime_Seconds; // 0x44
        float CallFunc_GetAccurateRealTime_PartialSeconds; // 0x48
        int32_t CallFunc_GetAccurateRealTime_Seconds_1; // 0x4c
        float CallFunc_GetAccurateRealTime_PartialSeconds_1; // 0x50
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x54
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x58
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x5c
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x60
        char pad_64[0x4];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x68
        bool CallFunc_IsHardwareBenchmarkApplied_ReturnValue; // 0x70
        bool CallFunc_IsPCPlatform_ReturnValue; // 0x71
        bool CallFunc_BooleanAND_ReturnValue; // 0x72
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5; // 0x73
        bool CallFunc_SwitchToNextWidget_bSuccess; // 0x74
        bool K2Node_ComponentBoundEvent_IsShown; // 0x75
        char pad_76[0x2];
        float CallFunc_SelectFloat_ReturnValue; // 0x78
        char pad_7c[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x80
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2; // 0x88
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x90
        float CallFunc_FMin_ReturnValue; // 0x94
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6; // 0x98
        char pad_99[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1; // 0xa0
        bool K2Node_ComponentBoundEvent_WantsCursor; // 0xa8
        char pad_a9[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0xb0
        APlayerController* CallFunc_GetPlayerController_ReturnValue_2; // 0xb8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7; // 0xc0
        bool K2Node_ComponentBoundEvent_WantsToShowCursor; // 0xc1
        char pad_c2[0x6];
        APlayerController* CallFunc_GetPlayerController_ReturnValue_3; // 0xc8
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2; // 0xd0
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0xd8
        char pad_dc[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3; // 0xe0
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0xe8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8; // 0xf0
        char pad_f1[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue_4; // 0xf8
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3; // 0x100
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9; // 0x108
    }; // Size: 0x109
    Params_ExecuteUbergraph_UI_BP_FirstTimeFlow params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue_1 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
    params.CallFunc_IsEditor_ReturnValue = (bool)CallFunc_IsEditor_ReturnValue;
    params.CallFunc_GetAccurateRealTime_Seconds = (int32_t)CallFunc_GetAccurateRealTime_Seconds;
    params.CallFunc_GetAccurateRealTime_PartialSeconds = (float)CallFunc_GetAccurateRealTime_PartialSeconds;
    params.CallFunc_GetAccurateRealTime_Seconds_1 = (int32_t)CallFunc_GetAccurateRealTime_Seconds_1;
    params.CallFunc_GetAccurateRealTime_PartialSeconds_1 = (float)CallFunc_GetAccurateRealTime_PartialSeconds_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_IsHardwareBenchmarkApplied_ReturnValue = (bool)CallFunc_IsHardwareBenchmarkApplied_ReturnValue;
    params.CallFunc_IsPCPlatform_ReturnValue = (bool)CallFunc_IsPCPlatform_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
    params.CallFunc_SwitchToNextWidget_bSuccess = (bool)CallFunc_SwitchToNextWidget_bSuccess;
    params.K2Node_ComponentBoundEvent_IsShown = (bool)K2Node_ComponentBoundEvent_IsShown;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_2;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FMin_ReturnValue = (float)CallFunc_FMin_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_6 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_6;
    params.CallFunc_GetUIManagerPure_ReturnValue_1 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_1;
    params.K2Node_ComponentBoundEvent_WantsCursor = (bool)K2Node_ComponentBoundEvent_WantsCursor;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue_2 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_2;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_7 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_7;
    params.K2Node_ComponentBoundEvent_WantsToShowCursor = (bool)K2Node_ComponentBoundEvent_WantsToShowCursor;
    params.CallFunc_GetPlayerController_ReturnValue_3 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_3;
    params.CallFunc_GetUIManagerPure_ReturnValue_2 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_2;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_3;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_8 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_8;
    params.CallFunc_GetPlayerController_ReturnValue_4 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_4;
    params.CallFunc_GetUIManagerPure_ReturnValue_3 = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue_3;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_9 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_9;
    ProcessEvent(func, &params);
}
