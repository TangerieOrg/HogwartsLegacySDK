#include "AUIDummyActor.hpp"
#include "EDifficulty.hpp"
#include "EGenderEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "FWordRow.hpp"
#include "UAvatarCreatorPage.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_CharCreator_Finalize_C.hpp"
#include "UUI_BP_GenderTextButton_C.hpp"
#include "UUI_BP_InputButton_C.hpp"
#include "UUI_BP_MenuFinalized_C.hpp"
#include "UUI_BP_SettingsSliderButton_Snapping_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CharCreator_Finalize_C::ShowErrorMessage(bool ShowMessage, FString Error, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ShowErrorMessage"));
    struct Params_ShowErrorMessage {
        bool ShowMessage; // 0x0
        char pad_1[0x7];
        FString Error; // 0x8
        bool Temp_bool_Variable; // 0x18
        ESlateVisibility Temp_byte_Variable; // 0x19
        ESlateVisibility Temp_byte_Variable_1; // 0x1a
        ESlateVisibility K2Node_Select_Default; // 0x1b
    }; // Size: 0x1c
    Params_ShowErrorMessage params{};
    params.ShowMessage = (bool)ShowMessage;
    params.Error = (FString)Error;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::SetButtonText() {}
UUI_BP_CharCreator_Finalize_C* UUI_BP_CharCreator_Finalize_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C");
    return (UUI_BP_CharCreator_Finalize_C*)res;
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::DoubleEnsureNameIsInSyncWithCode() {}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_1_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_1_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_1_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_1_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::I_GetPageTitle(FString& PageTitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_GetPageTitle"));
    struct Params_I_GetPageTitle {
        FString PageTitle; // 0x0
    }; // Size: 0x10
    Params_I_GetPageTitle params{};
    params.PageTitle = (FString)PageTitle;
    ProcessEvent(func, &params);
    PageTitle = params.PageTitle;
}
void UUI_BP_CharCreator_Finalize_C::I_GetPageLegend(FString& PageLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_GetPageLegend"));
    struct Params_I_GetPageLegend {
        FString PageLegend; // 0x0
    }; // Size: 0x10
    Params_I_GetPageLegend params{};
    params.PageLegend = (FString)PageLegend;
    ProcessEvent(func, &params);
    PageLegend = params.PageLegend;
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__firstName_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__firstName_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature"));
    struct Params_BndEvt__firstName_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_BndEvt__firstName_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::SetupWizardWords(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_GetCurrentLanguage_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FWordRow CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FString>& CallFunc_GetWizardWords_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.SetupWizardWords"));
    struct Params_SetupWizardWords {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FString CallFunc_GetCurrentLanguage_ReturnValue; // 0x10
        TArray<FName> CallFunc_GetDataTableRowNames_OutRowNames; // 0x20
        FName CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        char pad_3c[0x4];
        FWordRow CallFunc_GetDataTableRowFromName_OutRow; // 0x40
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x60
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x61
        char pad_62[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x68
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x7c
        bool CallFunc_BooleanOR_ReturnValue; // 0x80
        char pad_81[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x84
        bool CallFunc_Less_IntInt_ReturnValue; // 0x88
        char pad_89[0x7];
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x90
        TArray<FString> CallFunc_GetWizardWords_ReturnValue; // 0x98
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xa8
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0xac
    }; // Size: 0xad
    Params_SetupWizardWords params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetCurrentLanguage_ReturnValue = (FString)CallFunc_GetCurrentLanguage_ReturnValue;
    params.CallFunc_GetDataTableRowNames_OutRowNames = (TArray<FName>)CallFunc_GetDataTableRowNames_OutRowNames;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FWordRow)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetWizardWords_ReturnValue = (TArray<FString>)CallFunc_GetWizardWords_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetWizardWords_ReturnValue = params.CallFunc_GetWizardWords_ReturnValue;
    CallFunc_GetDataTableRowNames_OutRowNames = params.CallFunc_GetDataTableRowNames_OutRowNames;
}
void UUI_BP_CharCreator_Finalize_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_24_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_24_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_24_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_24_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ShowNoNameAlert(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ShowNoNameAlert"));
    struct Params_ShowNoNameAlert {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowNoNameAlert params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_29_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_29_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_29_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_29_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ValidatePlayerName(bool CheckProfanity, FString FirstName, FString lastName, bool& IsValidName, FString CallFunc_TrimTrailing_ReturnValue, bool CallFunc_ContainsBannedWord_ContainsBanned, int32_t CallFunc_Len_ReturnValue, bool CallFunc_ContainsBannedWord_ContainsBanned_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FString CallFunc_TrimTrailing_ReturnValue_1, int32_t CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ValidatePlayerName"));
    struct Params_ValidatePlayerName {
        bool CheckProfanity; // 0x0
        char pad_1[0x7];
        FString FirstName; // 0x8
        FString lastName; // 0x18
        bool IsValidName; // 0x28
        char pad_29[0x7];
        FString CallFunc_TrimTrailing_ReturnValue; // 0x30
        bool CallFunc_ContainsBannedWord_ContainsBanned; // 0x40
        char pad_41[0x3];
        int32_t CallFunc_Len_ReturnValue; // 0x44
        bool CallFunc_ContainsBannedWord_ContainsBanned_1; // 0x48
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x49
        bool CallFunc_BooleanOR_ReturnValue; // 0x4a
        char pad_4b[0x5];
        FString CallFunc_TrimTrailing_ReturnValue_1; // 0x50
        int32_t CallFunc_Len_ReturnValue_1; // 0x60
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x64
        bool CallFunc_BooleanAND_ReturnValue; // 0x65
    }; // Size: 0x66
    Params_ValidatePlayerName params{};
    params.CheckProfanity = (bool)CheckProfanity;
    params.FirstName = (FString)FirstName;
    params.lastName = (FString)lastName;
    params.IsValidName = (bool)IsValidName;
    params.CallFunc_TrimTrailing_ReturnValue = (FString)CallFunc_TrimTrailing_ReturnValue;
    params.CallFunc_ContainsBannedWord_ContainsBanned = (bool)CallFunc_ContainsBannedWord_ContainsBanned;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.CallFunc_ContainsBannedWord_ContainsBanned_1 = (bool)CallFunc_ContainsBannedWord_ContainsBanned_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_TrimTrailing_ReturnValue_1 = (FString)CallFunc_TrimTrailing_ReturnValue_1;
    params.CallFunc_Len_ReturnValue_1 = (int32_t)CallFunc_Len_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    IsValidName = params.IsValidName;
}
TArray<FString> UUI_BP_CharCreator_Finalize_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings) {}
void UUI_BP_CharCreator_Finalize_C::I_ScrollIntoView() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_ScrollIntoView"));
    struct Params_I_ScrollIntoView {
    }; // Size: 0x0
    Params_I_ScrollIntoView params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::Play_Dialogue_Sample(AUIDummyActor* CallFunc_GetActorOfClass_ReturnValue, int32_t CallFunc_PostDialogueEventByReference_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.Play Dialogue Sample"));
    struct Params_Play_Dialogue_Sample {
        AUIDummyActor* CallFunc_GetActorOfClass_ReturnValue; // 0x0
        int32_t CallFunc_PostDialogueEventByReference_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Play_Dialogue_Sample params{};
    params.CallFunc_GetActorOfClass_ReturnValue = (AUIDummyActor*)CallFunc_GetActorOfClass_ReturnValue;
    params.CallFunc_PostDialogueEventByReference_ReturnValue = (int32_t)CallFunc_PostDialogueEventByReference_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ToggleDifficultySelection(UUI_BP_GenderTextButton_C* Button, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ToggleDifficultySelection"));
    struct Params_ToggleDifficultySelection {
        UUI_BP_GenderTextButton_C* Button; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ToggleDifficultySelection params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ToggleVoiceSelection(int32_t VoiceSelectionIndex, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ToggleVoiceSelection"));
    struct Params_ToggleVoiceSelection {
        int32_t VoiceSelectionIndex; // 0x0
        bool K2Node_SwitchInteger_CmpSuccess; // 0x4
    }; // Size: 0x5
    Params_ToggleVoiceSelection params{};
    params.VoiceSelectionIndex = (int32_t)VoiceSelectionIndex;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_11_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::I_UpdateHighlights() {}
void UUI_BP_CharCreator_Finalize_C::I_TabActivated() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_TabActivated"));
    struct Params_I_TabActivated {
    }; // Size: 0x0
    Params_I_TabActivated params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::I_UpdateIcons(EGenderEnum Gender) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_UpdateIcons"));
    struct Params_I_UpdateIcons {
        EGenderEnum Gender; // 0x0
    }; // Size: 0x1
    Params_I_UpdateIcons params{};
    params.Gender = (EGenderEnum)Gender;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::I_FinalizeFailed(FString ErrorMsg) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.I_FinalizeFailed"));
    struct Params_I_FinalizeFailed {
        FString ErrorMsg; // 0x0
    }; // Size: 0x10
    Params_I_FinalizeFailed params{};
    params.ErrorMsg = (FString)ErrorMsg;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_22_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_31_SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_31_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_31_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_31_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__lastName_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__lastName_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature"));
    struct Params_BndEvt__lastName_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_BndEvt__lastName_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ActivateFinalizeButton__DelegateSignature(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.ActivateFinalizeButton__DelegateSignature"));
    struct Params_ActivateFinalizeButton__DelegateSignature {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_ActivateFinalizeButton__DelegateSignature params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_5_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_0_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Easy_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_16_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_16_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_16_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Story_K2Node_ComponentBoundEvent_16_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_17_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_17_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_17_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_17_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Normal_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_DifficultyButton_Hard_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_25_MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_25_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_25_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_25_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::ExecuteUbergraph_UI_BP_CharCreator_Finalize(int32_t EntryPoint, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_1, FString K2Node_ComponentBoundEvent_NewText_1, FString K2Node_ComponentBoundEvent_NewText, bool CallFunc_SetPlayerGenderVoice_ReturnValue, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_27, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_26, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_25, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_24, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_23, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_22, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_21, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_20, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_19, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_18, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_17, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_16, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_15, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_14, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_13, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_12, bool CallFunc_SetPlayerGenderVoice_ReturnValue_1, bool CallFunc_SetPlayerGenderVoice_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_3, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_11, bool CallFunc_ValidatePlayerName_IsValidName, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_10, bool CallFunc_SetPlayerGenderVoice_ReturnValue_3, FString K2Node_Event_ErrorMsg, EGenderEnum K2Node_Event_Gender, bool K2Node_SwitchEnum_CmpSuccess, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_9, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_8, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_7, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_6, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_5, UUI_BP_GenderTextButton_C* K2Node_ComponentBoundEvent_Button_4, bool K2Node_Event_IsDesignTime, UUI_BP_SettingsSliderButton_Snapping_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_EndValue, int32_t CallFunc_FTrunc_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, UUserWidget* K2Node_Event_Parent, bool Temp_bool_IsClosed_Variable) {}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_7_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_7_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_7_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceOneButton_K2Node_ComponentBoundEvent_7_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_32_OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_32_OnInputHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_32_OnInputHovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_32_OnInputHovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_8_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_8_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_8_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoiceTwoButton_K2Node_ComponentBoundEvent_8_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_9_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_9_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_9_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WitchButton_K2Node_ComponentBoundEvent_9_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_27_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_27_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_27_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_WizardButton_K2Node_ComponentBoundEvent_27_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_30_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_30_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_30_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_CharCreator_Finalize_VoicePitchSlider_K2Node_ComponentBoundEvent_30_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_33_OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_33_OnInputUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_33_OnInputUnhovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_firstName_K2Node_ComponentBoundEvent_33_OnInputUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_34_OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_34_OnInputHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_34_OnInputHovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_34_OnInputHovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_35_OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_35_OnInputUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_35_OnInputUnhovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CharCreator_Finalize_lastName_K2Node_ComponentBoundEvent_35_OnInputUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::CreateCharacterSelected__DelegateSignature(bool HasBeenNamed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.CreateCharacterSelected__DelegateSignature"));
    struct Params_CreateCharacterSelected__DelegateSignature {
        bool HasBeenNamed; // 0x0
    }; // Size: 0x1
    Params_CreateCharacterSelected__DelegateSignature params{};
    params.HasBeenNamed = (bool)HasBeenNamed;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::WizardWordsLoaded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.WizardWordsLoaded"));
    struct Params_WizardWordsLoaded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_WizardWordsLoaded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_CharCreator_Finalize_C::NotifyTabSelected__DelegateSignature(int32_t Tab) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_CharCreator_Finalize.UI_BP_CharCreator_Finalize_C.NotifyTabSelected__DelegateSignature"));
    struct Params_NotifyTabSelected__DelegateSignature {
        int32_t Tab; // 0x0
    }; // Size: 0x4
    Params_NotifyTabSelected__DelegateSignature params{};
    params.Tab = (int32_t)Tab;
    ProcessEvent(func, &params);
}
