#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "USavedGameButton.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UHorizontalBox;
class UPhoenixTextBlock;
class UImage;
class UButton;
#pragma pack(push, 1)
class UUI_BP_SavedGameButton_C : public USavedGameButton {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHover; // 0x330
    UWidgetAnimation* ShowHighlight; // 0x338
    UHorizontalBox* ContentsBox; // 0x340
    UPhoenixTextBlock* dateText; // 0x348
    UPhoenixTextBlock* EmptySlotText; // 0x350
    UImage* goldleafBorder; // 0x358
    UImage* highlight; // 0x360
    UPhoenixTextBlock* MissionNameText; // 0x368
    UPhoenixTextBlock* placeText; // 0x370
    UPhoenixTextBlock* PlayTimeText; // 0x378
    UPhoenixTextBlock* SaveTypeText; // 0x380
    UPhoenixTextBlock* SaveVersionText; // 0x388
    UButton* TheButton; // 0x390
    char pad_398[0x30];
    FString buttonImage; // 0x3c8
    FString SaveFileName; // 0x3d8
    FString SaveType; // 0x3e8
    FSaveGameInfo SaveInfo; // 0x3f8
    char pad_470[0x20];
    static UUI_BP_SavedGameButton_C* StaticClass();
    void IsIntroSave(bool& bIsIntroSave, FString CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void SelectTitleText(FString MissionName, FString LocationName, FString& TitleText, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void GetFileName(FString& Filename);
    void setButtonData(FSaveGameInfo SaveGameInfo, bool CallFunc_EqualEqual_StriStri_ReturnValue);
    void BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_SavedGameButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void OnSavedButtonReleased__DelegateSignature(UUI_BP_SavedGameButton_C* Button);
    void OnSavedButtonPressed__DelegateSignature(UUI_BP_SavedGameButton_C* Button);
    void OnSavedButtonUnhover__DelegateSignature(UUI_BP_SavedGameButton_C* Button);
    void OnSavedButtonHover__DelegateSignature(UUI_BP_SavedGameButton_C* Button);
    void OnSavedButtonClicked__DelegateSignature(UUI_BP_SavedGameButton_C* SelectedButton);
}; // Size: 0x490
#pragma pack(pop)
