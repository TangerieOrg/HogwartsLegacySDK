#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPopupScreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixRichTextBlock;
class UButton;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UHorizontalBox;
class UVerticalBox;
class UPhoenixTextBlock;
class UUI_BP_AudioLegendTooltipContent_C;
class ULegendItem;
class UUMGSequencePlayer;
class UUserWidget;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_AudioLegendPopup_C : public UPopupScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
    UWidgetAnimation* Modal_Intro; // 0x3c8
    UWidgetAnimation* Modal_Outro; // 0x3d0
    UButton* LegendBackButton; // 0x3d8
    UHorizontalBox* PleaseWaitSection; // 0x3e0
    UCanvasPanel* Popup; // 0x3e8
    UPhoenixRichTextBlock* popupBody; // 0x3f0
    UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3f8
    UPhoenixTextBlock* PopupTitle; // 0x400
    UVerticalBox* TooltipContentContainer; // 0x408
    UVerticalBox* TooltipContentContainer_1; // 0x410
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_1; // 0x418
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_2; // 0x420
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_3; // 0x428
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_4; // 0x430
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_5; // 0x438
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_6; // 0x440
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_7; // 0x448
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_8; // 0x450
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_9; // 0x458
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_10; // 0x460
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_11; // 0x468
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_12; // 0x470
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_13; // 0x478
    UUI_BP_AudioLegendTooltipContent_C* UI_BP_AudioLegendTooltipContent_14; // 0x480
    TArray<FInputActionHoldInfo> CompletionActions; // 0x488
    TArray<ULegendItem*> CachedLegendItems; // 0x498
    static UUI_BP_AudioLegendPopup_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_4, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_5, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_6, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_7, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_8, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_9, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_10, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_11, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_12, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_13, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_14, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_15);
    void HidePopup(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowPopup(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FInputActionHoldInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void SetPopupContentWidget0(UUserWidget* ContentWidget);
    void SetPopupUsesWaitIndicator0(bool bUsesWaitIndicator);
    void SetPopupCompletionActions0(TArray<FInputActionHoldInfo>& CompletionActions);
    void SetPopupLegendItems0(TArray<FLegendItemData>& LegendItems);
    void CompletionButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void SetPopupDescription0(FString DescriptionString, bool isTranslated);
    void SetPopupTitle0(FString TitleString);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void CollapseAudioLegend();
    void BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_AudioLegendPopup(int32_t EntryPoint, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, ESlateVisibility Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, UUserWidget* K2Node_Event_ContentWidget, float CallFunc_Divide_FloatFloat_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bUsesWaitIndicator, TArray<FInputActionHoldInfo>& K2Node_Event_CompletionActions, TArray<FLegendItemData>& K2Node_Event_LegendItems, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, FString K2Node_Event_DescriptionString, bool K2Node_Event_isTranslated, FString K2Node_Event_TitleString, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, int32_t CallFunc_Array_Find_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
}; // Size: 0x4a8
#pragma pack(pop)
