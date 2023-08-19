#include "EInputEvent.hpp"
#include "EMouseLockMode.hpp"
#include "EUIPopupPriority.hpp"
#include "EUIScreenType.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UScreen.hpp"
void UScreen::ScreenRegisterAllUMGInputAxis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.ScreenRegisterAllUMGInputAxis"));
    struct Params_ScreenRegisterAllUMGInputAxis {
    }; // Size: 0x0
    Params_ScreenRegisterAllUMGInputAxis params{};
    ProcessEvent(func, &params);
}
void UScreen::ScreenUnregisterAllUMGInputAxis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.ScreenUnregisterAllUMGInputAxis"));
    struct Params_ScreenUnregisterAllUMGInputAxis {
    }; // Size: 0x0
    Params_ScreenUnregisterAllUMGInputAxis params{};
    ProcessEvent(func, &params);
}
void UScreen::GatherMastermindExtraScreenStrings(TArray<FString>& outExtraScreenStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.GatherMastermindExtraScreenStrings"));
    struct Params_GatherMastermindExtraScreenStrings {
        TArray<FString> outExtraScreenStrings; // 0x0
    }; // Size: 0x10
    Params_GatherMastermindExtraScreenStrings params{};
    params.outExtraScreenStrings = (TArray<FString>)outExtraScreenStrings;
    ProcessEvent(func, &params);
    outExtraScreenStrings = params.outExtraScreenStrings;
}
UScreen* UScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Screen");
    return (UScreen*)res;
}
void UScreen::ScreenUnregisterAllUMGInputActions(EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.ScreenUnregisterAllUMGInputActions"));
    struct Params_ScreenUnregisterAllUMGInputActions {
        EInputEvent InputEvent; // 0x0
    }; // Size: 0x1
    Params_ScreenUnregisterAllUMGInputActions params{};
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void UScreen::ScreenRegisterAllUMGInputActions(EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.ScreenRegisterAllUMGInputActions"));
    struct Params_ScreenRegisterAllUMGInputActions {
        EInputEvent InputEvent; // 0x0
    }; // Size: 0x1
    Params_ScreenRegisterAllUMGInputActions params{};
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
bool UScreen::IsInputEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.IsInputEnabled"));
    struct Params_IsInputEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInputEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UScreen::GetZOrderOffsetForScreenType(EUIScreenType InScreenType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.GetZOrderOffsetForScreenType"));
    struct Params_GetZOrderOffsetForScreenType {
        EUIScreenType InScreenType; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetZOrderOffsetForScreenType params{};
    params.InScreenType = (EUIScreenType)InScreenType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UScreen::OnScreenOutroComplete(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.OnScreenOutroComplete"));
    struct Params_OnScreenOutroComplete {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnScreenOutroComplete params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UScreen::CloseScreenWithOutro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.CloseScreenWithOutro"));
    struct Params_CloseScreenWithOutro {
    }; // Size: 0x0
    Params_CloseScreenWithOutro params{};
    ProcessEvent(func, &params);
}
void UScreen::ClassLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Screen.ClassLoaded"));
    struct Params_ClassLoaded {
    }; // Size: 0x0
    Params_ClassLoaded params{};
    ProcessEvent(func, &params);
}
