#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPopupScreen.hpp"
#include "USaveLoadSettingsWidget.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_ScrollingTextTestButton_C.hpp"
#include "UUI_BP_SettingsDetails_C.hpp"
#include "UUI_BP_Settings_SaveLoad_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Settings_SaveLoad_C* UUI_BP_Settings_SaveLoad_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C");
    return (UUI_BP_Settings_SaveLoad_C*)res;
}
void UUI_BP_Settings_SaveLoad_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_Settings_SaveLoad_C::ExecuteUbergraph_UI_BP_Settings_SaveLoad(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue) {}
void UUI_BP_Settings_SaveLoad_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__button_restart_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Settings_SaveLoad_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::ResetTooltipShowing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.ResetTooltipShowing"));
    struct Params_ResetTooltipShowing {
    }; // Size: 0x0
    Params_ResetTooltipShowing params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__button_load_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__button_exitToMain_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__button_exit_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__button_hoverDrone_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::MenuButtonHovered(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.MenuButtonHovered"));
    struct Params_MenuButtonHovered {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuButtonHovered params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::MenuButtonUnhovered(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.MenuButtonUnhovered"));
    struct Params_MenuButtonUnhovered {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuButtonUnhovered params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_SaveLoad_button_save_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::OnSavePopup(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnSavePopup"));
    struct Params_OnSavePopup {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnSavePopup params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::LoadSaveGameFailed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.LoadSaveGameFailed"));
    struct Params_LoadSaveGameFailed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_LoadSaveGameFailed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::OnExitGamePopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnExitGamePopupClosed"));
    struct Params_OnExitGamePopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnExitGamePopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::OnRestartPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.OnRestartPopupClosed"));
    struct Params_OnRestartPopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnRestartPopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_SaveLoad_C::RestartFromLastSaveFail__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_SaveLoad.UI_BP_Settings_SaveLoad_C.RestartFromLastSaveFail__DelegateSignature"));
    struct Params_RestartFromLastSaveFail__DelegateSignature {
    }; // Size: 0x0
    Params_RestartFromLastSaveFail__DelegateSignature params{};
    ProcessEvent(func, &params);
}
