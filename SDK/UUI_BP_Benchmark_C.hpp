#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UObject;
class ULegendItem;
class UPhoenixTextBlock;
class UPhoenixRichTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class UOverlay;
class UUI_BP_SystemMenu_C;
class UOverlaySlot;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UUI_BP_Benchmark_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* BenchmarkTitle; // 0x330
    UPhoenixRichTextBlock* DescText; // 0x338
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x340
    UOverlay* Overlay_0; // 0x348
    UUI_BP_SystemMenu_C* settingsMenu; // 0x350
    char pad_358[0x10];
    TArray<FLegendItemData> DefaultLegendData; // 0x368
    char pad_378[0x20];
    static UUI_BP_Benchmark_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2);
    void SetMenuLegend(TArray<FLegendItemData>& LegendData, TArray<FLegendItemData> ModifiedLegendData, int32_t Temp_int_Array_Index_Variable);
    void SetDescText(FString Text);
    void ToggleSettingsVisibility(bool Visible, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FLegendItemData CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BlueprintFocusAcquired();
    void OnLegendItemHoldComplete(ULegendItem* LegendItem, bool HoldCompleted);
    void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature();
    void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature(TArray<FLegendItemData>& NewLegend);
    void BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature(bool IsShown);
    void ResolutionSettingsApplied(UObject* Caller);
    void ExecuteUbergraph_UI_BP_Benchmark(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsHardwareBenchmarkApplied_ReturnValue, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_IsVisible_ReturnValue, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldCompleted, bool CallFunc_IsVisible_ReturnValue_1, TArray<FLegendItemData>& K2Node_ComponentBoundEvent_NewLegend);
    void DesiredCursorStateChanged__DelegateSignature(bool WantsCursor);
    void OnHDRScreenToggled__DelegateSignature(bool IsShown);
    void BenchmarkAccepted__DelegateSignature();
}; // Size: 0x398
#pragma pack(pop)
