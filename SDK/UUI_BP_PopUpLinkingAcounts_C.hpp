#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UOverlay;
class UPhoenixTextBlock;
class UVerticalBox;
class UUI_BP_LoadDoor_C;
class UPhoenixImage;
class UButton;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_PopUpLinkingAcounts_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* TransitionToMessage; // 0x330
    UWidgetAnimation* ShowCopiedText; // 0x338
    UOverlay* connectingPopup; // 0x340
    UPhoenixTextBlock* Description; // 0x348
    UVerticalBox* linkInfoPanel; // 0x350
    UPhoenixTextBlock* Linkmesage; // 0x358
    UVerticalBox* PopupContents; // 0x360
    UPhoenixTextBlock* popupMessage; // 0x368
    UPhoenixImage* QR_Code; // 0x370
    UButton* ShortcodeButton; // 0x378
    UPhoenixTextBlock* ShortcodeDesc; // 0x380
    UPhoenixTextBlock* ShortcodeText; // 0x388
    UPhoenixTextBlock* ShortcodeTitle; // 0x390
    UPhoenixTextBlock* TextCopied; // 0x398
    UPhoenixTextBlock* Title; // 0x3a0
    UUI_BP_LoadDoor_C* UI_BP_LoadDoor; // 0x3a8
    UButton* UrlButton; // 0x3b0
    UPhoenixTextBlock* UrlText; // 0x3b8
    FString SignInURL; // 0x3c0
    FString SignInShortcode; // 0x3d0
    static UUI_BP_PopUpLinkingAcounts_C* StaticClass();
    void ShowLinkPopup();
    void UpdateUnlinkData(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ResetToDefaultState();
    void ShowPopup();
    void HidePopup();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1);
    void UpdatePopupData(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_PopUpLinkingAcounts_UrlButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_PopUpLinkingAcounts_ShortcodeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_PopUpLinkingAcounts(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CopyToClipboard_ReturnValue);
}; // Size: 0x3e0
#pragma pack(pop)
