#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UStartPageWidget.hpp"
class UWidgetAnimation;
class UUI_BP_FullBackgroundSmoke_C;
class UPhoenixImage;
class UUI_BP_Title_C;
class UPhoenixTextBlock;
class UObject;
class UPhoenixRichTextBlock;
#pragma pack(push, 1)
class UUI_BP_StartPage_C : public UStartPageWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    UWidgetAnimation* ReturnIntro; // 0x388
    UWidgetAnimation* NotSignedIn; // 0x390
    UWidgetAnimation* StartFadeOut; // 0x398
    UPhoenixImage* FadeToBlack; // 0x3a0
    UUI_BP_Title_C* hogwartsLogo; // 0x3a8
    UPhoenixTextBlock* HydraID; // 0x3b0
    UPhoenixRichTextBlock* PressStartText; // 0x3b8
    UPhoenixTextBlock* ProfileName; // 0x3c0
    UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x3c8
    static UUI_BP_StartPage_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Construct();
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void SetProfileString0(FString ProfileName);
    void SetHydraString0(FString ProfileName);
    void SetIsLoggedIn0(bool bIsLoggedIn);
    void RefreshButtonCallouts(UObject* Caller);
    void Destruct();
    void OnIntroEnded(int32_t IntroType);
    void BndEvt__UI_BP_StartPage_hogwartsLogo_K2Node_ComponentBoundEvent_0_LogoAnimationIsFinished__DelegateSignature();
    void ExecuteUbergraph_UI_BP_StartPage(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
