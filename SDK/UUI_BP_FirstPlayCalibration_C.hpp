#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_Legend_Horizontal_Screen_C;
class UWidgetSwitcher;
class ULegendItem;
class UObject;
class UUI_BP_Settings_Calibration_C;
class UUI_BP_Settings_HDRCalibration_C;
class UOverlaySlot;
#pragma pack(push, 1)
class UUI_BP_FirstPlayCalibration_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x330
    UWidgetSwitcher* MainSwitcher; // 0x338
    UUI_BP_Settings_Calibration_C* UI_BP_Settings_Calibration; // 0x340
    UUI_BP_Settings_HDRCalibration_C* UI_BP_Settings_HDRCalibration; // 0x348
    char pad_350[0x10];
    bool IsHDRCalibration; // 0x360
    char pad_361[0x17];
    ULegendItem* CachedResetLegendItem; // 0x378
    ULegendItem* CachedAdjustLegendItem; // 0x380
    static UUI_BP_FirstPlayCalibration_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void CallBrightnessAccepted();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void ShowCalibrationActor();
    void HideCalibrationActor();
    void InitCalibration();
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature();
    void BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature();
    void Construct();
    void ResolutionSettingsApplied(UObject* Caller);
    void OnResetHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void ExecuteUbergraph_UI_BP_FirstPlayCalibration(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void HDRBrightnessAccepted__DelegateSignature();
    void BrightnessAccepted__DelegateSignature();
}; // Size: 0x388
#pragma pack(pop)
