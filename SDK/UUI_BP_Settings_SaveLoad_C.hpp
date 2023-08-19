#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USaveLoadSettingsWidget.hpp"
class UWidgetAnimation;
class UObject;
class UUI_BP_MenuTextButton_C;
class UUI_BP_SettingsDetails_C;
class UUIManager;
class UUI_BP_ScrollingTextTestButton_C;
class UUserWidget;
struct FVector2D;
class UPopupScreen;
#pragma pack(push, 1)
class UUI_BP_Settings_SaveLoad_C : public USaveLoadSettingsWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x410
    UWidgetAnimation* hideDetails; // 0x418
    UWidgetAnimation* showDetails; // 0x420
    UWidgetAnimation* ToLoadList; // 0x428
    UUI_BP_MenuTextButton_C* button_exit; // 0x430
    UUI_BP_MenuTextButton_C* button_exitToMain; // 0x438
    UUI_BP_MenuTextButton_C* button_hoverDrone; // 0x440
    UUI_BP_MenuTextButton_C* button_load; // 0x448
    UUI_BP_MenuTextButton_C* button_restart; // 0x450
    UUI_BP_MenuTextButton_C* button_save; // 0x458
    UUI_BP_SettingsDetails_C* detailsPanel; // 0x460
    UUI_BP_ScrollingTextTestButton_C* scrollingTextTestButton; // 0x468
    TArray<UUI_BP_MenuTextButton_C*> ButtonArray; // 0x470
    bool isButtonHovered; // 0x480
    char pad_481[0x3];
    float CurrentHoverTime; // 0x484
    float RequiredHoverTime; // 0x488
    bool isDetailsShowing; // 0x48c
    char pad_48d[0x3];
    FString HoveredButtonText; // 0x490
    char pad_4a0[0x10];
    static UUI_BP_Settings_SaveLoad_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_0();
    void ResetTooltipShowing();
    void Initialize();
    void InEditorPostConstruct();
    void SetParent(UUserWidget* Parent);
    void Construct();
    void BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void MenuButtonHovered(UUI_BP_MenuTextButton_C* Button);
    void MenuButtonUnhovered(UUI_BP_MenuTextButton_C* Button);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void OnSavePopup(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnExitGamePopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnRestartPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void LoadSaveGameFailed(UObject* Caller);
    void ExecuteUbergraph_UI_BP_Settings_SaveLoad(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue);
    void RestartFromLastSaveFail__DelegateSignature();
}; // Size: 0x4b0
#pragma pack(pop)
