#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPopupScreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UHorizontalBox;
class UPhoenixRichTextBlock;
class ULegendItem;
class UVerticalBox;
class UUserWidget;
class UUMGSequencePlayer;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_GenericPopupScreen_C : public UPopupScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
    UWidgetAnimation* Modal_Intro; // 0x3c8
    UWidgetAnimation* Modal_Outro; // 0x3d0
    UHorizontalBox* PleaseWaitSection; // 0x3d8
    UCanvasPanel* Popup; // 0x3e0
    UPhoenixRichTextBlock* popupBody; // 0x3e8
    UUI_BP_Legend_Horizontal_Tooltip_C* PopupLegend; // 0x3f0
    UPhoenixTextBlock* PopupTitle; // 0x3f8
    UVerticalBox* TooltipContentContainer; // 0x400
    TArray<FInputActionHoldInfo> CompletionActions; // 0x408
    TArray<ULegendItem*> CachedLegendItems; // 0x418
    static UUI_BP_GenericPopupScreen_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3);
    void PreConstruct(bool IsDesignTime);
    void SetPopupTitle0(FString TitleString);
    void SetPopupDescription0(FString DescriptionString, bool isTranslated);
    void SetPopupLegendItems0(TArray<FLegendItemData>& LegendItems);
    void SetPopupCompletionActions0(TArray<FInputActionHoldInfo>& CompletionActions);
    void SetPopupUsesWaitIndicator0(bool bUsesWaitIndicator);
    void SetPopupContentWidget0(UUserWidget* ContentWidget);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void CompletionButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void OnIntroEnded(int32_t IntroType);
    void ExecuteUbergraph_UI_BP_GenericPopupScreen(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FString K2Node_Event_TitleString, FString K2Node_Event_DescriptionString, bool K2Node_Event_isTranslated, TArray<FLegendItemData>& K2Node_Event_LegendItems, TArray<FInputActionHoldInfo>& K2Node_Event_CompletionActions, bool K2Node_Event_bUsesWaitIndicator, bool CallFunc_Not_PreBool_ReturnValue, UUserWidget* K2Node_Event_ContentWidget, bool CallFunc_IsValid_ReturnValue, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool Temp_bool_Variable, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32_t Temp_int_Array_Index_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, FInputActionHoldInfo CallFunc_Array_Get_Item);
}; // Size: 0x428
#pragma pack(pop)
