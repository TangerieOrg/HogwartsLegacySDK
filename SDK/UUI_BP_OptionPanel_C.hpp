#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUMGInputAction.hpp"
#include "FAudioDialogueLineData.hpp"
#include "FConversationOption.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UI_BP_UIPlacementEnum\Type.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UVerticalBox;
class APlayerController;
class UUI_BP_LegendItem_C;
class UUI_BP_InteractButton_C;
class UPhoenixRichTextBlock;
class UUIManager;
class UBorder;
class UHorizontalBox;
class UUI_BP_BasicToolTipPopout_C;
class USceneRigPlayer;
class UOverlaySlot;
class AHUD;
class UUMGSequencePlayer;
class UObject;
class AActor;
#pragma pack(push, 1)
class UUI_BP_OptionPanel_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* BeginConversation; // 0x378
    UWidgetAnimation* maximizeConversation; // 0x380
    UWidgetAnimation* minimizeConversation; // 0x388
    UVerticalBox* conversationBox; // 0x390
    UUI_BP_LegendItem_C* JustTheLegend; // 0x398
    UPhoenixRichTextBlock* lastLine; // 0x3a0
    UBorder* lastLineBorder; // 0x3a8
    UBorder* optionsBorder; // 0x3b0
    UHorizontalBox* optionsBox; // 0x3b8
    UVerticalBox* OptionsPanel; // 0x3c0
    char pad_3c8[0x40];
    UI_BP_UIPlacementEnum::Type UI_Placement; // 0x408
    char pad_409[0x7];
    UUI_BP_BasicToolTipPopout_C* BasicToolTip; // 0x410
    int32_t CurrentIndex; // 0x418
    int32_t maxOptionIndex; // 0x41c
    TArray<UUI_BP_InteractButton_C*> OptionsArray; // 0x420
    bool Minimized; // 0x430
    bool ButtonDown; // 0x431
    char pad_432[0x6];
    USceneRigPlayer* SceneRigPlayer; // 0x438
    bool BCancelAllowed; // 0x440
    bool PreventMoreSelections; // 0x441
    bool SkipDelay; // 0x442
    char pad_443[0x1];
    FVector2D ButtonSize; // 0x444
    float SubtitlePadding; // 0x44c
    bool SubtitlesEnabled; // 0x450
    bool ShowDialogueLine; // 0x451
    char pad_452[0x2];
    FName TargetActorName; // 0x454
    bool EmptyActions; // 0x45c
    char pad_45d[0x3];
    TArray<FConversationOption> CachedConversationOptions; // 0x460
    FHermesBPDelegateHandle RefreshButtonCalloutsHandle; // 0x470
    FString LastSpeakerID; // 0x480
    float AnimationPlaybackSpeed; // 0x490
    char pad_494[0x4];
    static UUI_BP_OptionPanel_C* StaticClass();
    void OnOptionButtonClicked(UUI_BP_InteractButton_C* OptionButton, int32_t CallFunc_Array_Find_ReturnValue);
    void AdjustConversationForViewportWidth(float FixedPadding, float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, UUI_BP_InteractButton_C* TempSelectedOption, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetLastLineTextWithSpeaker(FString LastLineTextID);
    void CalculateStartingCursorPos(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, ESlateVisibility K2Node_Select_Default, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, FVector2D CallFunc_GetViewportSize_ReturnValue, FGeometry CallFunc_GetCachedGeometry_ReturnValue, FVector2D CallFunc_LocalToViewport_PixelPosition, FVector2D CallFunc_LocalToViewport_ViewportPosition, FVector2D CallFunc_GetAbsoluteSize_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Divide_Vector2DVector2D_ReturnValue);
    void SetCurrentActiveOption(int32_t NewCurrentIndex, bool& OptionChanged, bool CallFunc_Array_IsValidIndex_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetCurrentActiveOption(UUI_BP_InteractButton_C*& SelectedOption, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item);
    void GatherMastermindExtraScreenStrings(TArray<FString>& outExtraScreenStrings, TArray<FString> ExtraStrings, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FConversationOption CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SelectString_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void SetTargetName(FName Character, FString CallFunc_Conv_NameToString_ReturnValue);
    void ShowLine();
    void TranslateSubtitleText(FAudioDialogueLineData SubtitleData, FName TargetName, FString TranslatedString, bool CallFunc_NotEqual_NameName_ReturnValue, FName CallFunc_GetDbId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UUI_BP_InteractButton_C* CallFunc_GetCurrentActiveOption_SelectedOption, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6);
    void Translate_Cleanup(FString Button, FString& TranslatedButton, FString Debug_Button_String, FString Translated_Button_String);
    void InitializeButtonLegend(FString Button, FString Text, FLegendItemData K2Node_MakeStruct_LegendItemData);
    void DialogueMode(bool DialogueMode, bool CallFunc_Not_PreBool_ReturnValue);
    void Maximize(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged);
    void Minimize(bool NoAnim);
    void OnOptionHovered(UUI_BP_InteractButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged);
    void OptionSelected(int32_t SelectedIndex, int32_t Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FConversationOption CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void PreviousOption(bool CallFunc_SetCurrentActiveOption_OptionChanged, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged_1);
    void NextOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged_1);
    void BuildOptions(TArray<FConversationOption>& OPTIONS, TArray<UUI_BP_InteractButton_C*>& Button_Array, FString TranslatedString, bool PreviouslyUsed, FString ToolTipReason, bool Disabled, FString IconName, FString PreTranslatedButtonString);
    void OnActionHandler(FName Action, bool K2Node_SwitchName_CmpSuccess);
    void Construct();
    void Destruct();
    void OptionsAnimationsFinished();
    void DelaySkipping();
    void AudioDialogueLineStartedData(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData);
    void EmptyActionsEvent();
    void MinimizeAnimationFinished();
    void WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_0();
    void RefreshButtonCallouts(UObject* Caller);
    void ExecuteUbergraph_UI_BP_OptionPanel(int32_t EntryPoint);
    void SelectionMade__DelegateSignature(int32_t OptionIndex);
    void AbortConversation__DelegateSignature();
    void Cleanup__DelegateSignature(int32_t Selection, AActor* Actor_Reference);
    void AbortInteraction__DelegateSignature();
}; // Size: 0x498
#pragma pack(pop)
