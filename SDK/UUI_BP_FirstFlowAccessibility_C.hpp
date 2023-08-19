#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FFocusEvent.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UOverlay;
class UPhoenixRichTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class ULegendItem;
class UPhoenixTextBlock;
class UUI_BP_Settings_Accessibility_C;
class UOverlaySlot;
class UPhoenixGameSettings;
class UObject;
class UUIManager;
#pragma pack(push, 1)
class UUI_BP_FirstFlowAccessibility_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UOverlay* Content; // 0x330
    UPhoenixRichTextBlock* HiddenMenuReaderText; // 0x338
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x340
    UPhoenixTextBlock* ProfileName; // 0x348
    UPhoenixTextBlock* settingsTitle; // 0x350
    UUI_BP_Settings_Accessibility_C* UI_BP_Settings_Accessibility; // 0x358
    char pad_360[0x10];
    FLegendItemData MenuReaderOffLegendData; // 0x370
    FLegendItemData MenuReaderOnLegendData; // 0x3a0
    FLegendItemData ContinueLegendData; // 0x3d0
    FLegendItemData SelectLegendData; // 0x400
    FLegendItemData ResetLegendData; // 0x430
    bool EverEnteredSpecialMenuReaderMode; // 0x460
    bool IsInSpecialMenuReaderMode; // 0x461
    bool CurrentMenuReaderSetting; // 0x462
    bool WantsToShowCursor; // 0x463
    bool WaitingForMenuReaderIdle; // 0x464
    char pad_465[0x13];
    bool IsFirstFullRead; // 0x478
    char pad_479[0x7];
    ULegendItem* selectLegend; // 0x480
    ULegendItem* CachedResetLegendItem; // 0x488
    static UUI_BP_FirstFlowAccessibility_C* StaticClass();
    void OnResetHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, FMargin K2Node_MakeStruct_Margin_4, float CallFunc_Add_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void ExitSpecialMode();
    void ToggleMenuReader(int32_t CallFunc_SelectInt_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void RefreshLegend(int32_t TempResetLegendItemIndex, TArray<FLegendItemData> TempLegendItems, bool Temp_bool_Variable);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
    void Construct();
    void StartSpecialMenuReaderFlow();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature();
    void ResolutionSettingsApplied(UObject* Caller);
    void UserProfileChange(UObject* Caller, FString String);
    void ExecuteUbergraph_UI_BP_FirstFlowAccessibility(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsMenuReaderCurrentLanguageSupported_ReturnValue, bool CallFunc_IsMenuReaderSupported_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMenuReaderEnabled_ReturnValue, bool CallFunc_SetMenuReaderEnabled_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, bool CallFunc_IsMenuReaderBusy_ReturnValue, FFocusEvent K2Node_Event_InFocusEvent, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue);
    void CursorChangeRequested__DelegateSignature(bool WantsToShowCursor);
    void ChangesComplete__DelegateSignature();
}; // Size: 0x490
#pragma pack(pop)
