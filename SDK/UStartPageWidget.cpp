#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UScreen.hpp"
#include "UStartPageWidget.hpp"
void UStartPageWidget::SetHydraString(FString ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.SetHydraString"));
    struct Params_SetHydraString {
        FString ProfileName; // 0x0
    }; // Size: 0x10
    Params_SetHydraString params{};
    params.ProfileName = (FString)ProfileName;
    ProcessEvent(func, &params);
}
UStartPageWidget* UStartPageWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StartPageWidget");
    return (UStartPageWidget*)res;
}
void UStartPageWidget::SetIsLoggedIn(bool bIsLoggedIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.SetIsLoggedIn"));
    struct Params_SetIsLoggedIn {
        bool bIsLoggedIn; // 0x0
    }; // Size: 0x1
    Params_SetIsLoggedIn params{};
    params.bIsLoggedIn = (bool)bIsLoggedIn;
    ProcessEvent(func, &params);
}
void UStartPageWidget::OnStartPageOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.OnStartPageOutroEnded"));
    struct Params_OnStartPageOutroEnded {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnStartPageOutroEnded params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UStartPageWidget::ShowLoginButton(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.ShowLoginButton"));
    struct Params_ShowLoginButton {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowLoginButton params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void UStartPageWidget::OnUserProfileChange(UObject* i_caller, FString UserName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.OnUserProfileChange"));
    struct Params_OnUserProfileChange {
        UObject* i_caller; // 0x0
        FString UserName; // 0x8
    }; // Size: 0x18
    Params_OnUserProfileChange params{};
    params.i_caller = (UObject*)i_caller;
    params.UserName = (FString)UserName;
    ProcessEvent(func, &params);
}
void UStartPageWidget::SetProfileString(FString ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.SetProfileString"));
    struct Params_SetProfileString {
        FString ProfileName; // 0x0
    }; // Size: 0x10
    Params_SetProfileString params{};
    params.ProfileName = (FString)ProfileName;
    ProcessEvent(func, &params);
}
void UStartPageWidget::SetLoginButtonString(FString LoginButtonString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.SetLoginButtonString"));
    struct Params_SetLoginButtonString {
        FString LoginButtonString; // 0x0
    }; // Size: 0x10
    Params_SetLoginButtonString params{};
    params.LoginButtonString = (FString)LoginButtonString;
    ProcessEvent(func, &params);
}
void UStartPageWidget::OnStartPageOutroStarted(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.OnStartPageOutroStarted"));
    struct Params_OnStartPageOutroStarted {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnStartPageOutroStarted params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UStartPageWidget::OnStartPageIntroStarted(UPhoenixUserWidget* PhoenixWidget, int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StartPageWidget.OnStartPageIntroStarted"));
    struct Params_OnStartPageIntroStarted {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t IntroType; // 0x8
    }; // Size: 0xc
    Params_OnStartPageIntroStarted params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
