#pragma once
#include <cstdint>
#include "EDifficulty.hpp"
#include "EGenderEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWordRow.hpp"
#include "UAvatarCreatorPage.hpp"
class UUI_BP_InputButton_C;
class UWidgetAnimation;
class UUI_BP_SettingsSliderButton_Snapping_C;
class UUI_BP_MenuFinalized_C;
class UUI_BP_GenderTextButton_C;
class UPhoenixTextBlock;
struct FVector2D;
class UUMGSequencePlayer;
class UUserWidget;
class UUIOnlineManager;
class AUIDummyActor;
class UObject;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UUI_BP_CharCreator_Finalize_C : public UAvatarCreatorPage {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    UWidgetAnimation* NoNameAllert; // 0x380
    UUI_BP_GenderTextButton_C* DifficultyButton_Easy; // 0x388
    UUI_BP_GenderTextButton_C* DifficultyButton_Hard; // 0x390
    UUI_BP_GenderTextButton_C* DifficultyButton_Normal; // 0x398
    UUI_BP_GenderTextButton_C* DifficultyButton_Story; // 0x3a0
    UPhoenixTextBlock* DifficultyDescText; // 0x3a8
    UPhoenixTextBlock* DormChoiceDescText; // 0x3b0
    UPhoenixTextBlock* DormText; // 0x3b8
    UPhoenixTextBlock* ErrorMessage; // 0x3c0
    UUI_BP_MenuFinalized_C* FinalizedButton_NOTUSED; // 0x3c8
    UUI_BP_InputButton_C* FirstName; // 0x3d0
    UUI_BP_InputButton_C* lastName; // 0x3d8
    UPhoenixTextBlock* NameCharacterText; // 0x3e0
    UPhoenixTextBlock* PitchText; // 0x3e8
    UPhoenixTextBlock* SelectDifficultyText; // 0x3f0
    UPhoenixTextBlock* ToneText; // 0x3f8
    UUI_BP_GenderTextButton_C* VoiceOneButton; // 0x400
    UUI_BP_SettingsSliderButton_Snapping_C* VoicePitchSlider; // 0x408
    UPhoenixTextBlock* VoiceText; // 0x410
    UUI_BP_GenderTextButton_C* VoiceTwoButton; // 0x418
    UUI_BP_GenderTextButton_C* WitchButton; // 0x420
    UUI_BP_GenderTextButton_C* WizardButton; // 0x428
    FString PageTitle; // 0x430
    char pad_440[0x38];
    UUserWidget* ParentWidget; // 0x478
    int32_t TextFieldCharLimit; // 0x480
    bool showCustomizeButton; // 0x484
    char pad_485[0x3];
    FString FirstNameText; // 0x488
    FString LastNameText; // 0x498
    UUI_BP_GenderTextButton_C* selectedBirthTypeButton; // 0x4a8
    UUI_BP_GenderTextButton_C* SelectedDifficultyButton; // 0x4b0
    EDifficulty Difficulty; // 0x4b8
    char pad_4b9[0x7];
    FString SelectedDifficultyDesc; // 0x4c0
    TArray<FString> WizardWords; // 0x4d0
    char pad_4e0[0x10];
    bool isPlayerNameValid; // 0x4f0
    char pad_4f1[0x7];
    static UUI_BP_CharCreator_Finalize_C* StaticClass();
    void I_GetPageTitle(FString& PageTitle);
    void I_GetPageLegend(FString& PageLegend);
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void DoubleEnsureNameIsInSyncWithCode();
    void ShowNoNameAlert(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowErrorMessage(bool ShowMessage, FString Error, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetupWizardWords(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_GetCurrentLanguage_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FWordRow CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FString>& CallFunc_GetWizardWords_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings);
    void Play_Dialogue_Sample(AUIDummyActor* CallFunc_GetActorOfClass_ReturnValue, int32_t CallFunc_PostDialogueEventByReference_ReturnValue);
    void ToggleDifficultySelection(UUI_BP_GenderTextButton_C* Button, bool CallFunc_IsValid_ReturnValue);
    void ToggleVoiceSelection(int32_t VoiceSelectionIndex, bool K2Node_SwitchInteger_CmpSuccess);
    void ValidatePlayerName(bool CheckProfanity, FString FirstName, FString lastName, bool& IsValidName, FString CallFunc_TrimTrailing_ReturnValue, bool CallFunc_ContainsBannedWord_ContainsBanned, int32_t CallFunc_Len_ReturnValue, bool CallFunc_ContainsBannedWord_ContainsBanned_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FString CallFunc_TrimTrailing_ReturnValue_1, int32_t CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void SetButtonText();
    void I_UpdateHighlights();
    void I_TabActivated();
    void I_ScrollIntoView();
    void InEditorPostConstruct();
    void Initialize();
    void SetParent(UUserWidget* Parent);
    void I_UpdateIcons(EGenderEnum Gender);
    void I_FinalizeFailed(FString ErrorMsg);
    void Construct();
    void BndEvt__firstName_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(FString newText);
    void BndEvt__lastName_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(FString newText);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_16_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_17_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_1_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_24_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_25_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_7_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_8_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_9_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_27_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_30_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float EndValue);
    void BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_29_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton);
    void BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_31_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton);
    void BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_32_OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_33_OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_34_OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button);
    void BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_35_OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button);
    void WizardWordsLoaded(UObject* Caller);
    void BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float NewValue);
    void ExecuteUbergraph_UI_BP_CharCreator_Finalize(int32_t EntryPoint, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_1, FString K2Node_ComponentBoundEvent_NewText_1, FString K2Node_ComponentBoundEvent_NewText, bool CallFunc_SetPlayerGenderVoice_ReturnValue, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_27, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_26, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_25, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_24, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_23, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_22, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_21, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_20, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_19, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_18, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_17, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_16, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_15, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_14, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_13, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_12, bool CallFunc_SetPlayerGenderVoice_ReturnValue_1, bool CallFunc_SetPlayerGenderVoice_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_3, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_11, bool CallFunc_ValidatePlayerName_IsValidName, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_10, bool CallFunc_SetPlayerGenderVoice_ReturnValue_3, FString K2Node_Event_ErrorMsg, EGenderEnum K2Node_Event_Gender, bool K2Node_SwitchEnum_CmpSuccess, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_9, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_8, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_7, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_6, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_5, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_4, bool K2Node_Event_IsDesignTime, UUI_BP_SettingsSliderButton_Snapping_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_EndValue, int32_t CallFunc_FTrunc_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, UUserWidget* K2Node_Event_Parent, bool Temp_bool_IsClosed_Variable);
    void ActivateFinalizeButton__DelegateSignature(bool Activate);
    void CreateCharacterSelected__DelegateSignature(bool HasBeenNamed);
    void NotifyTabSelected__DelegateSignature(int32_t Tab);
}; // Size: 0x4f8
#pragma pack(pop)
