#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixTextBlock;
class UVerticalBox;
class UImage;
class UUI_BP_MenuTextButton_C;
class UPhoenixImage;
class UPopupScreen;
class UUMGSequencePlayer;
class UUIOnlineManager;
#pragma pack(push, 1)
class UUI_BP_RewardNotification_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* HidePopup; // 0x330
    UWidgetAnimation* ShowPopup; // 0x338
    UWidgetAnimation* Claim; // 0x340
    UWidgetAnimation* ShowCopyText; // 0x348
    UImage* bonusImage; // 0x350
    UUI_BP_MenuTextButton_C* ClaimRewardButton; // 0x358
    UVerticalBox* ClaimRewardPanel; // 0x360
    UPhoenixTextBlock* OnlineRewardName; // 0x368
    UPhoenixTextBlock* OnlineRewardText; // 0x370
    UPhoenixTextBlock* RewardEarnedText; // 0x378
    UPhoenixImage* SparklesParticles; // 0x380
    UPhoenixImage* tutorialBackImage; // 0x388
    char pad_390[0x10];
    FString SignInURL; // 0x3a0
    FString SignInShortcode; // 0x3b0
    UPopupScreen* ExpirationPopup; // 0x3c0
    bool bDeviceFlow; // 0x3c8
    bool bInSettingsMenu; // 0x3c9
    char pad_3ca[0x16];
    FString RewardID; // 0x3e0
    static UUI_BP_RewardNotification_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_RewardNotification_0();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetRewardName(FString RewardName, FString CallFunc_Concat_StrStr_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void HidePopupComplete();
    void Construct();
    void Destruct();
    void BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_RewardNotification_ClaimRewardButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void ExecuteUbergraph_UI_BP_RewardNotification(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_1, UUIOnlineManager* CallFunc_Get_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button);
    void CloseRewardNotification__DelegateSignature();
    void WBSignInContinue__DelegateSignature();
}; // Size: 0x3f0
#pragma pack(pop)
