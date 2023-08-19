#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UScreen.hpp"
class UUI_BP_NextGenPerf_C;
class UCanvasPanel;
class UWidgetAnimation;
class UUI_BP_AutosaveDisclaimer_C;
class UPhoenixImage;
class UBorderSlot;
class UWidgetSwitcher;
class UImage;
class UUI_BP_LanguageSelect_C;
class UBorder;
class UUI_BP_Benchmark_C;
class UUI_BP_EULA_C;
class UUI_BP_FirstFlowAccessibility_C;
class UUIManager;
class UUI_BP_FirstPlayCalibration_C;
class UWidget;
class UUI_BP_FullBackgroundSmoke_C;
class UUI_BP_LogoAndLegal_C;
class UUI_BP_PSO_FS_C;
class UUI_BP_WbGamesSignin_C;
class UUMGSequencePlayer;
class APlayerController;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UUI_BP_FirstTimeFlow_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* EndFlow; // 0x378
    UWidgetAnimation* fadeInClouds; // 0x380
    UWidgetAnimation* FadeOutBG; // 0x388
    UWidgetAnimation* BlackScrimFade; // 0x390
    UWidgetAnimation* Done; // 0x398
    UWidgetAnimation* FadeIn; // 0x3a0
    UWidgetAnimation* FadeOut; // 0x3a8
    UCanvasPanel* Autosave; // 0x3b0
    UUI_BP_AutosaveDisclaimer_C* AutosaveDisclaimer; // 0x3b8
    UPhoenixImage* backgroundBlackScreen; // 0x3c0
    UCanvasPanel* benchmark; // 0x3c8
    UImage* BlackOverlay; // 0x3d0
    UCanvasPanel* EULApanel; // 0x3d8
    UUI_BP_LanguageSelect_C* LanguageSelectScreen; // 0x3e0
    UUI_BP_NextGenPerf_C* NextGenPerformance; // 0x3e8
    UWidgetSwitcher* Switcher; // 0x3f0
    UBorder* switcherBorder; // 0x3f8
    UUI_BP_Benchmark_C* UI_BP_Benchmark; // 0x400
    UUI_BP_EULA_C* UI_BP_EULA; // 0x408
    UUI_BP_FirstFlowAccessibility_C* UI_BP_FirstFlowAccessibility; // 0x410
    UUI_BP_FirstPlayCalibration_C* UI_BP_FirstPlayCalibration; // 0x418
    UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x420
    UUI_BP_LogoAndLegal_C* UI_BP_LogoAndLegal; // 0x428
    UUI_BP_PSO_FS_C* UI_BP_PSO_FS; // 0x430
    UUI_BP_WbGamesSignin_C* WBSignIn; // 0x438
    UCanvasPanel* WBSignInPanel; // 0x440
    float DisplayDuration; // 0x448
    char pad_44c[0x14];
    int32_t houseIndex; // 0x460
    float BenchmarkDuration; // 0x464
    float BenchmarkStart; // 0x468
    bool HDRActorNeedsHide; // 0x46c
    bool HDRActorShowing; // 0x46d
    bool CloudsShowing; // 0x46e
    char pad_46f[0x1];
    static UUI_BP_FirstTimeFlow_C* StaticClass();
    void ShouldSkipLegalScreen(bool& bHideLegalScreen, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_HasEverLaunchedGame_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void RemoveUnusedScreens(bool CallFunc_ShouldSkipLegalScreen_bHideLegalScreen, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShouldSkipPSO_ShouldSkip, bool CallFunc_IsPCPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, FString CallFunc_GetPlatformName_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_4, bool CallFunc_NotEqual_StrStr_ReturnValue_2);
    void DisplayWidget(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void ShouldSkipPSO(bool& ShouldSkip, bool CallFunc_IsPCPlatform_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetPSOProgress_ReturnValue);
    void ConditionallyHandleEULA(UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void ConditionallyHandleFirstFlowAccessibility(UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void ConditionallyHandleHDRScreen(bool IsShowing, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SwitchToNextWidget(bool& bSuccess, UWidget* Widget, int32_t CallFunc_GetNumWidgets_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void TriggerNext();
    void WidgetAnimationEvt_Done_K2Node_WidgetAnimationEvent_2();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_EULA_K2Node_ComponentBoundEvent_0_EulaAccepted__DelegateSignature();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_1_BrightnessAccepted__DelegateSignature();
    void BndEvt__UI_BP_FirstTimeFlow_WBSignIn_K2Node_ComponentBoundEvent_2_WBSignInContinue__DelegateSignature();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_3_BenchmarkAccepted__DelegateSignature();
    void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_PSO_FS_K2Node_ComponentBoundEvent_4_PSOComplete__DelegateSignature();
    void WidgetAnimationEvt_FadeOutBG_K2Node_WidgetAnimationEvent_3();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_5_OnHDRScreenToggled__DelegateSignature(bool IsShown);
    void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_Benchmark_K2Node_ComponentBoundEvent_6_DesiredCursorStateChanged__DelegateSignature(bool WantsCursor);
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_7_ChangesComplete__DelegateSignature();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstPlayCalibration_K2Node_ComponentBoundEvent_8_HDRBrightnessAccepted__DelegateSignature();
    void Construct();
    void BndEvt__UI_BP_FirstTimeFlow_UI_BP_FirstFlowAccessibility_K2Node_ComponentBoundEvent_9_CursorChangeRequested__DelegateSignature(bool WantsToShowCursor);
    void BndEvt__UI_BP_FirstTimeFlow_LanguageSelectScreen_K2Node_ComponentBoundEvent_10_LanguageSelected__DelegateSignature();
    void BndEvt__UI_BP_FirstTimeFlow_NextGenPerformance_K2Node_ComponentBoundEvent_11_PerfScreenDismissed__DelegateSignature();
    void ExecuteUbergraph_UI_BP_FirstTimeFlow(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UWidget* CallFunc_GetActiveWidget_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool CallFunc_IsEditor_ReturnValue, int32_t CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, int32_t CallFunc_GetAccurateRealTime_Seconds_1, float CallFunc_GetAccurateRealTime_PartialSeconds_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsHardwareBenchmarkApplied_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, bool CallFunc_SwitchToNextWidget_bSuccess, bool K2Node_ComponentBoundEvent_IsShown, float CallFunc_SelectFloat_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool K2Node_ComponentBoundEvent_WantsCursor, UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, bool K2Node_ComponentBoundEvent_WantsToShowCursor, APlayerController* CallFunc_GetPlayerController_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8, APlayerController* CallFunc_GetPlayerController_ReturnValue_4, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9);
    void SequenceComplete__DelegateSignature();
}; // Size: 0x470
#pragma pack(pop)
