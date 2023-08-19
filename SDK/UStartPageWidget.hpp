#pragma once
#include <cstdint>
#include "UScreen.hpp"
class UObject;
class UPhoenixUserWidget;
#pragma pack(push, 1)
class UStartPageWidget : public UScreen {
public:
    bool CanProceed; // 0x370
    char pad_371[0xf];
    static UStartPageWidget* StaticClass();
    void ShowLoginButton(bool bShow);
    void SetProfileString(FString ProfileName);
    void SetLoginButtonString(FString LoginButtonString);
    void SetIsLoggedIn(bool bIsLoggedIn);
    void SetHydraString(FString ProfileName);
    void OnUserProfileChange(UObject* i_caller, FString UserName);
    void OnStartPageOutroStarted(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    void OnStartPageOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    void OnStartPageIntroStarted(UPhoenixUserWidget* PhoenixWidget, int32_t IntroType);
}; // Size: 0x380
#pragma pack(pop)
