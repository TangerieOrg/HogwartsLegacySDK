#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FDateTime.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixTextBlock;
class UUI_BP_LoadDoor_C;
class UImage;
class UVerticalBox;
class UObject;
class UPhoenixImage;
class UUI_BP_PopUpLinkingAcounts_C;
class UUI_BP_MenuTextButton_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UScaleBox;
class UHorizontalBox;
class UWidgetSwitcher;
class UPopupScreen;
class UOverlaySlot;
class UUMGSequencePlayer;
class UUIOnlineManager;
#pragma pack(push, 1)
class UUI_BP_WbGamesSignin_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowPopup; // 0x330
    UWidgetAnimation* FrameSparkles; // 0x338
    UWidgetAnimation* ShowCopyText; // 0x340
    UVerticalBox* AccountsPanel; // 0x348
    UPhoenixImage* bg_tonedown; // 0x350
    UUI_BP_MenuTextButton_C* ContinueButton; // 0x358
    UImage* divider; // 0x360
    UImage* Divider2; // 0x368
    UPhoenixTextBlock* HouseNameText; // 0x370
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x378
    UUI_BP_MenuTextButton_C* LinkAccountsButton; // 0x380
    UUI_BP_PopUpLinkingAcounts_C* LinkAcctPopup; // 0x388
    UPhoenixTextBlock* LocalProfileText; // 0x390
    UScaleBox* mainContent; // 0x398
    UHorizontalBox* MainContentsPanel; // 0x3a0
    UVerticalBox* NetworkConnectionErrorPanel; // 0x3a8
    UPhoenixTextBlock* NetworkConnectionErrorText; // 0x3b0
    UPhoenixTextBlock* OnlineSignInHeader; // 0x3b8
    UUI_BP_MenuTextButton_C* RetryConnectionButton; // 0x3c0
    UUI_BP_LoadDoor_C* RetryConnectionSpinner; // 0x3c8
    UWidgetSwitcher* RightHandSwitcher; // 0x3d0
    UPhoenixTextBlock* SignInBonusText; // 0x3d8
    UUI_BP_MenuTextButton_C* skipSignInButton; // 0x3e0
    UPhoenixImage* SparklesParticles; // 0x3e8
    UPhoenixImage* SparklesParticles_1; // 0x3f0
    UPhoenixTextBlock* TextCopiedMsg; // 0x3f8
    UUI_BP_MenuTextButton_C* UnlinkButton; // 0x400
    UPhoenixTextBlock* WandDescriptionText; // 0x408
    UPhoenixImage* WBandWWLogos; // 0x410
    char pad_418[0x10];
    FString SignInURL; // 0x428
    FString SignInShortcode; // 0x438
    UPopupScreen* ExpirationPopup; // 0x448
    bool bInSettingsMenu; // 0x450
    char pad_451[0x27];
    bool bUnlinking; // 0x478
    char pad_479[0x7];
    FLegendItemData PrimaryLegend; // 0x480
    bool LinkingComplete; // 0x4b0
    bool bDisconnectPopupShowing; // 0x4b1
    char pad_4b2[0x6];
    UPopupScreen* NetworkDisconnectedPopup; // 0x4b8
    bool bInLinkingFlow; // 0x4c0
    char pad_4c1[0x7];
    static UUI_BP_WbGamesSignin_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void PopulateWWData();
    void ToggleLinkingPopup(bool ShowPopup, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array_1);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void DisplayNextRewardNotification(bool FirstCall);
    void UpdateForSettingsMenu(UUIOnlineManager* CallFunc_Get_ReturnValue);
    void DebugLogWBSigninResponse(int32_t ResponseVal, FDateTime CallFunc_Now_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue);
    void RefreshSignInCodes(UUIOnlineManager* CallFunc_Get_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void PopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void WBPNDeviceCodeExpired(UObject* Caller, int32_t Response);
    void Destruct();
    void RetryConnectionFailed(UObject* Caller);
    void OnRewardNotificationClosed();
    void BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void Construct();
    void WBPNLinkStatusChanged(UObject* Caller, int32_t Response);
    void BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_WbGamesSignin_RetryConnectionButton_K2Node_ComponentBoundEvent_3_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_WbGamesSignin_LinkAccountsButton_K2Node_ComponentBoundEvent_6_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_WbGamesSignin_UnlinkButton_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void WBPNDeviceFlowResponse(UObject* Caller, int32_t Response);
    void BndEvt__UI_BP_WbGamesSignin_UI_BP_MenuTextButton_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void PopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void ResolutionSettingsApplied(UObject* Caller);
    void BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_WbGamesSignin_skipSignInButton_K2Node_ComponentBoundEvent_5_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void BndEvt__UI_BP_WbGamesSignin_ContinueButton_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void ExecuteUbergraph_UI_BP_WbGamesSignin(int32_t EntryPoint);
    void WBUnlinkFlow__DelegateSignature();
    void ShowingRewards__DelegateSignature();
    void WBSignInContinue__DelegateSignature();
}; // Size: 0x4c8
#pragma pack(pop)
