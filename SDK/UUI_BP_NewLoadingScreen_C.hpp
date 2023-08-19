#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FCurtainStageOptions.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputEvent.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "ULoadingcreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UUI_BP_AutoSave_C;
class USizeBox;
class UCurtainSubsystem;
class UTextBlock;
class UVerticalBox;
class APlayerController;
class UOverlay;
class UBorder;
class UPhoenixRichTextBlock;
class UUIManager;
class UUI_BP_LoadingBackgroundFX_C;
class UOverlaySlot;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_NewLoadingScreen_C : public ULoadingcreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    UWidgetAnimation* FadeInTips; // 0x380
    UWidgetAnimation* FadeInImage; // 0x388
    UWidgetAnimation* FadeInSpinner; // 0x390
    UWidgetAnimation* Intro; // 0x398
    UWidgetAnimation* NextTip; // 0x3a0
    UWidgetAnimation* FadeOut; // 0x3a8
    UUI_BP_AutoSave_C* AutoSaveIcon; // 0x3b0
    UCanvasPanel* Canvas; // 0x3b8
    USizeBox* imageSizeBox; // 0x3c0
    UTextBlock* LienHolders; // 0x3c8
    UVerticalBox* LienholdersBox; // 0x3d0
    UOverlay* TipsContent; // 0x3d8
    UBorder* TipsWidget; // 0x3e0
    UPhoenixRichTextBlock* TipText; // 0x3e8
    UUI_BP_LoadingBackgroundFX_C* UI_BP_LoadingBackgroundFX; // 0x3f0
    TArray<FKey> PrevHintKeys; // 0x3f8
    TArray<FKey> NextHintKeys; // 0x408
    bool LastSpinnerValue; // 0x418
    bool LastStaticImageValue; // 0x419
    bool LastTipsValue; // 0x41a
    char pad_41b[0x5];
    static UUI_BP_NewLoadingScreen_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void UpdateTipsState();
    void UpdateStaticImageState();
    void UpdateSpinnerState();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void InitKeyDownArrays(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, FInputActionKeyMapping CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, int32_t CallFunc_Array_Length_ReturnValue_1, FInputActionKeyMapping CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent, FInputEvent CallFunc_GetInputEventFromKeyEvent_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue_2);
    void UpdateLienholdersWidget(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, FString CallFunc_GetLienholderNames_ReturnValue);
    void OnCurtainRaised();
    void OnCurtainStageOptionsChanged(FCurtainStageOptions CurtainStageOptions);
    void OnDisplayNextTip0(FString TipKey);
    void Construct();
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnCurtainLienholdersChanged();
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void ExecuteUbergraph_UI_BP_NewLoadingScreen(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FCurtainStageOptions K2Node_CustomEvent_CurtainStageOptions, FString K2Node_Event_TipKey, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsDebugLoadingScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, int32_t K2Node_Event_OutroType, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue_2);
}; // Size: 0x420
#pragma pack(pop)
